class ALCdevice_android {
      ALCdevice_android(); //0x14a4370
      Init(); //0x14a46c0
      ThreadFuncAudioTrack(void*); //0x14a5b90
      closePlayback(); //0x14a4f50
      closeRecording(); //0x14a7f20
      getRecordingData(void*, int); //0x14a7f50
      getRecordingDataLen(); //0x14a7f60
      openPlayback(char const*); //0x14a4a70
      openRecording(int, int); //0x14a7f10
      pausePlayback(); //0x14a6330
      resetPlayback(); //0x14a4fd0
      resumePlayback(); //0x14a6770
      startPlayback(); //0x14a53a0
      startRecording(); //0x14a7f30
      stopPlayback(); //0x14a5e90
      stopRecording(); //0x14a7f40
      ~ALCdevice_android(); //0x14a4460
      ~ALCdevice_android(); //0x14a4500
};

class ALCdevice_capture_android {
      ALCdevice_capture_android(); //0x14a6c50
      GetCaptureDevice(char const*); //0x14a7e30
      closePlayback(); //0x14a7f80
      closeRecording(); //0x14a7970
      getRecordingData(void*, int); //0x14a7df0
      getRecordingDataLen(); //0x14a7e10
      openPlayback(char const*); //0x14a7f70
      openRecording(int, int); //0x14a7070
      resetPlayback(); //0x14a7f90
      startPlayback(); //0x14a7fa0
      startRecording(); //0x14a7a00
      stopPlayback(); //0x14a7fb0
      stopRecording(); //0x14a7cf0
      ~ALCdevice_capture_android(); //0x14a6d20
      ~ALCdevice_capture_android(); //0x14a6f20
};

class ALCdevice_null {
      ALCdevice_null(); //0x149dd30
      ThreadFunc(void*); //0x149dfb0
      closePlayback(); //0x149df10
      closeRecording(); //0x149e110
      getRecordingData(void*, int); //0x149e140
      getRecordingDataLen(); //0x149e150
      openPlayback(char const*); //0x149df00
      openRecording(int, int); //0x149e100
      resetPlayback(); //0x149df20
      startPlayback(); //0x149df30
      startRecording(); //0x149e120
      stopPlayback(); //0x149e0d0
      stopRecording(); //0x149e130
      ~ALCdevice_null(); //0x149ddf0
      ~ALCdevice_null(); //0x149de80
};

class ALCdevice_struct {
      ReorderChannels(); //0x149f380
      Resync(int); //0x149f420
      closePlayback(); //0x149f680
      closeRecording(); //0x149f6d0
      getRecordingData(void*, int); //0x149f700
      getRecordingDataLen(); //0x149f710
      initPanning(); //0x149e160
      openPlayback(char const*); //0x149f670
      openRecording(int, int); //0x149f6c0
      pausePlayback(); //0x149e0e0
      resetPlayback(); //0x149f690
      resumePlayback(); //0x149e0f0
      startPlayback(); //0x149f6a0
      startRecording(); //0x149f6e0
      stopPlayback(); //0x149f6b0
      stopRecording(); //0x149f6f0
      ~ALCdevice_struct(); //0x149f650
      ~ALCdevice_struct(); //0x149f660
};

class ALbuffer {
      IsInLoopSection(unsigned int); //0x149d020
      LoopSectionLength(); //0x149d030
      SetLoopEnd(double); //0x149cff0
      SetLoopStart(double); //0x149cfc0
      ~ALbuffer(); //0x149cf60
};

class ALsource {
      GetSampleOffset(); //0x14a0140
      GetSecondsOffset(); //0x14a0100
      SetLoopEnd(double); //0x14a0750
      SetLoopStart(double); //0x14a0730
      SetOffset(int, float); //0x14a0610
      calcNonAttnSourceParams(ALCcontext_struct*, ALCdevice_struct*); //0x14a1040
      calcSourceParams(ALCcontext_struct*, ALCdevice_struct*, float, SMixingParams*, bool); //0x14a11a0
};

class ASYNC_SAVE_LOAD_REQ_CONTEXT {
      Process(HTTP_REQ_CONTEXT*); //0x141ad50
      ~ASYNC_SAVE_LOAD_REQ_CONTEXT(); //0x141b040
      ~ASYNC_SAVE_LOAD_REQ_CONTEXT(); //0x141b0c0
};

class AllPassFilter {
      AllPassFilter(int); //0x14adc40
      Process(float); //0x14adcb0
      SetFeedback(double); //0x14adcf0
      ~AllPassFilter(); //0x14adc80
};

class AndroidGPDevice {
      AndroidGPDevice(int, char*, char*, int, int, int, char*, char*); //0x13dbbd0
      GenerateDefaultMapping(); //0x13dcf30
};

class AttRelEnvelope {
      AttRelEnvelope(int, double, double); //0x14a97f0
      Process(double, double); //0x14a9920
      SetAtt(double); //0x14a9880
      SetFs(int); //0x14a9870
      SetRel(double); //0x14a98d0
};

class AudioBuffer {
      AudioBuffer(); //0x147ac20
      Clear(); //0x147aca0
      ExpandToFit(int, int); //0x147ad10
      Free(); //0x147ac80
      GetData(); //0x147ade0
      GetNumChannels(); //0x147ae30
      GetNumFrames(); //0x147ae40
      Read(int, int); //0x147adf0
      Resize(int, int); //0x147acc0
      Write(int, int, float); //0x147ae10
      ~AudioBuffer(); //0x147ac40
};

class AudioBus {
      AudioBus(); //0x147ae50
      GetBypassState(); //0x147b240
      GetEffect(int); //0x147b290
      GetEffects(); //0x147b280
      GetGain(); //0x147b260
      GetHandle(); //0x147b230
      GetLinkedEmitters(); //0x147b530
      GetMixBuffer(); //0x147b360
      LinkEmitter(CEmitter*); //0x147b370
      Process(int, int); //0x147b540
      SetBypassState(bool); //0x147b250
      SetGain(double); //0x147b270
      UnlinkEmitter(CEmitter*); //0x147b4d0
};

class AudioBus::SetEffect(int, std::__ndk1 {
      shared_ptr<AudioEffect>); //0x147b2d0
};

class AudioBusStruct {
      AudioBusStruct(int); //0x12693f0
      Free(bool); //0x1269980
      GetEffect(int); //0x1269230
      GetHandle(); //0x12699c0
      GetParamDescriptors(); //0x12697a0
      GetParams(); //0x12699d0
      Mark4GC(unsigned int*, int); //0x12698a0
      SetEffect(int, AudioEffectStruct*); //0x1269370
      SetParam(int, double); //0x1268ea0
      ThreadFree(bool, GCContext*); //0x12699a0
      ~AudioBusStruct(); //0x12697d0
      ~AudioBusStruct(); //0x1269830
};

class AudioBusStructManager {
      CreateStruct(); //0x1269a70
      DestroyStruct(int); //0x1269c40
      GetMainBusStruct(); //0x1269c30
      GetStruct(int); //0x1269b10
      Init(); //0x1269a20
};

class AudioEffect {
      AudioEffect(); //0x147d3c0
      Create(YYAL_EffectType, double*, YYAL_DeviceProps const&); //0x147d400
      GetHandle(); //0x147d3f0
      SetBypassState(double); //0x147d740
      ~AudioEffect(); //0x147d770
      ~AudioEffect(); //0x147da80
};

class AudioEffectStruct {
      AudioEffectStruct(YYAL_EffectType); //0x126a570
      Create(YYAL_EffectType, YYObjectBase*); //0x126a730
      CreateInstance(); //0x126a8e0
      DestroyInstance(int); //0x126aa20
      Free(bool); //0x126a6f0
      GetParam(int); //0x126a530
      GetParamOrDefault(YYObjectBase*, char const*, float); //0x126abb0
      GetParams(); //0x126aba0
      GetType(); //0x126a500
      Mark4GC(unsigned int*, int); //0x126a6e0
      SetParam(int, double); //0x126aa90
      ThreadFree(bool, GCContext*); //0x126a710
      UpdateEffects(int, double); //0x126ab40
      ~AudioEffectStruct(); //0x126a6d0
      ~AudioEffectStruct(); //0x126ef20
};

class AudioEffectStructManager {
      CreateStruct(YYAL_EffectType, YYObjectBase*); //0x126ac60
      DestroyStruct(AudioEffectStruct*); //0x126a670
      GetStruct(AudioEffectStruct*); //0x126ad80
};

class AudioMixer {
      AudioMixer(); //0x147b680
      CreateBus(); //0x147b9a0
      CreateEffect(YYAL_EffectType, double*); //0x147c740
      DestroyBus(AudioBus*); //0x147bc60
      DestroyEffect(int); //0x147c860
      DeviceUpdated(YYAL_DeviceProps const&); //0x147cae0
      GetBusWithHandle(int); //0x147c700
      GetFxWithHandle(int); //0x147c9e0
      GetMainBus(); //0x147b670
      GetTempMixBuffer(); //0x147bdb0
      LinkEmitterToBus(CEmitter*, AudioBus*); //0x147c610
      LinkEmitterToMainBus(CEmitter*); //0x147c6f0
      Process(float*, int, int); //0x147bf00
      ProcessBus(AudioBus*, float*, int, int); //0x147c3b0
      ResizeAndClearBuffers(int, int, int); //0x147bdc0
      ~AudioMixer(); //0x147b860
};

class AudioPlaybackProperties {
      AudioPlaybackProperties(YYAL_PlaybackProperties const*); //0x14916a0
      AudioPlaybackProperties(int); //0x14913f0
      AudioPlaybackProperties(int, bool, double, AudioPosition&); //0x1491610
      AudioPlaybackProperties(int, double, bool); //0x14914f0
      AudioPlaybackProperties(int, int, bool, double); //0x1491580
      Init(int, int, double, bool); //0x1491470
      Invalid(); //0x14917d0
};

class AudioPosition {
      AudioPosition(float, float, float, float, float, float); //0x14913d0
};

class AudioPropsCalc {
      CalcBus(CNoise*); //0x1491b30
      CalcGain(CNoise*); //0x1491860
      CalcListenerMask(CNoise*); //0x1491b20
      CalcOffset(CNoise*); //0x1491a50
      CalcPitch(CNoise*); //0x1491a90
      GetAssetProps(int); //0x1491930
      GetEmitterProps(CEmitter*); //0x14919a0
      GetGroupProps(int); //0x1491a10
};

class AutoMutex {
      ~AutoMutex(); //0x123c900
};

class Backend {
      DisconnectPlayer(int); //0x11f7290
      GetLastConfirmedFrame(); //0x11f7d00
      GetNetworkStats(NetworkStats&, int); //0x11f72a0
      SendChatMsg(char const*, int); //0x11f7ce0
      SetDisconnectNotifyStart(int); //0x11f72d0
      SetDisconnectTimeout(int); //0x11f72c0
      SetExtraNetworkLatency(int); //0x11f7310
      SetFrameDelay(int); //0x11f72b0
      SetPlayerPrefs(char*, unsigned int); //0x11f7cf0
      SetPlayerPrefs(char*, unsigned int, unsigned int); //0x11f6590
      SetPlayerToken(char const*); //0x11f7300
      SetReportChecksum(bool); //0x11f72e0
      StartGame(); //0x11f7cd0
      SyncOnFrame(bool); //0x11f7cc0
      UpdateStats(Stats&); //0x11f7330
      UseRandomInput(bool); //0x11f6580
      ~Backend(); //0x11f7270
};

class BitVectorReader {
      Read(unsigned char); //0x11e16d0
};

class BitVectorWriter {
      Write(unsigned char, unsigned char); //0x11e19c0
};

class BitcrusherEffect {
      BitcrusherEffect(double*); //0x14a7fc0
      DeviceUpdated(YYAL_DeviceProps const&); //0x14a8450
      Process(float*, int, int); //0x14a8170
      SetFactor(double); //0x14a80f0
      SetGain(double); //0x14a80d0
      SetMix(double); //0x14a8130
      SetResolution(double); //0x14a8110
      UpdateParam(int, double); //0x14a83a0
      ~BitcrusherEffect(); //0x14a8460
};

class BitcrusherEffectStruct {
      BitcrusherEffectStruct(YYObjectBase*); //0x126af80
      GetParamDescriptors(); //0x126b2c0
      ~BitcrusherEffectStruct(); //0x126edc0
};

class BitmapLoader {
      Animated(); //0x142e0a0
      BitmapLoader(char const*); //0x142df00
      BitmapLoader(void*, int); //0x142dff0
      BitmapLoader(void*, int, int); //0x142df20
      Create(int); //0x142e0b0
      GetFrameCount(); //0x142e160
      ~BitmapLoader(); //0x142e010
      ~BitmapLoader(); //0x142e060
};

class Buffer {
      ReadByteArray(unsigned int, unsigned char*); //0x11fa540
      WriteByteArray(unsigned int, unsigned char const*); //0x11fa500
};

class Buffer_AutoMutex {
      ~Buffer_AutoMutex(); //0x121f4a0
};

class Buffer_Fast {
      Peek(int, eBuffer_Type, RValue*); //0x1417070
      Poke(int, eBuffer_Type, RValue*); //0x14170a0
      Read(eBuffer_Type, RValue*); //0x1417030
      Write(eBuffer_Type, RValue*); //0x1416fe0
      ~Buffer_Fast(); //0x14170e0
};

class Buffer_Network {
      Peek(int, eBuffer_Type, RValue*); //0x141b690
      Poke(int, eBuffer_Type, RValue*); //0x141b7d0
      Read(eBuffer_Type, RValue*); //0x141b490
      Write(eBuffer_Type, RValue*); //0x141b0e0
      ~Buffer_Network(); //0x141bb80
};

class Buffer_Standard {
      ~Buffer_Standard(); //0x120c9c0
};

class Buffer_Vertex {
      FindNextType(yyVertexType); //0x141bcd0
      FindNextUsage(yyVertexUsage, yyVertexType, char const*); //0x141bba0
      Realloc(unsigned int); //0x141ecf0
};

class CAnimCurve {
      CAnimCurve(); //0x13c4db0
      Evaluate(CSequenceParameterTrack*, int, int, float, float, float); //0x13bc9b0
      Free(bool); //0x13c50b0
      Mark4GC(unsigned int*, int); //0x13c5040
      PreFree(); //0x13c5130
      UpdateDirtiness(); //0x13c4fc0
      ~CAnimCurve(); //0x13c4e90
      ~CAnimCurve(); //0x13c4fa0
};

class CAnimCurveChannel {
      AllocNewCachedPoint(); //0x13c45b0
      CAnimCurveChannel(); //0x13c34c0
      ComputeBezier(); //0x13c4250
      ComputeCatmullRom(bool, bool, bool); //0x13c38e0
      Evaluate(float); //0x13c3700
      GetCachedPoints(int&); //0x13c4690
      Mark4GC(unsigned int*, int); //0x13c4800
      NeedsRegen(); //0x13c2e60
      ScrubCachedPoints(); //0x13c3170
      UpdateCachedPoints(bool, bool, bool); //0x13c2f00
      UpdateDirtiness(); //0x13c4780
      ~CAnimCurveChannel(); //0x13c35d0
      ~CAnimCurveChannel(); //0x13c36e0
};

class CAnimCurveManager {
      CAnimCurveManager(); //0x13ceff0
      Clean(); //0x13cf080
      FreeCurve(CAnimCurve*); //0x13a9520
      GetCurveFromID(int); //0x13b3b80
      GetCurveFromName(char const*); //0x13b3c50
      GetNewCurve(); //0x13afdb0
      IsLiveCurve(CAnimCurve*); //0x13cf0f0
      ~CAnimCurveManager(); //0x13cf000
};

class CAudioEffectTrackKey {
      CAudioEffectTrackKey(); //0x13c21e0
      Mark4GC(unsigned int*, int); //0x13c22d0
      SetupObject(); //0x13cfdd0
      ~CAudioEffectTrackKey(); //0x13cfd50
};

class CAudioGroup {
      AddSound(cAudio_Sound*); //0x147e3b0
      AsyncDecode(); //0x147e540
      CAudioGroup(int, char const*); //0x147e030
      FreeBuffers(); //0x147e300
      GetGain(); //0x147e750
      GetLoadProgress(); //0x147e710
      IncLoadCount(); //0x147e730
      RemoveSound(cAudio_Sound*); //0x147e4e0
      SetGain(float, int); //0x147e760
      SetName(char const*); //0x147e100
      UpdateGain(); //0x147e780
      ~CAudioGroup(); //0x147e130
};

class CAudioGroup::SetLoadState(CAudioGroup {
      eLoadState); //0x147e5f0
};

class CAudioGroupMan {
      CreateGroup(char const*); //0x147e7d0
      DestroyGroup(int); //0x147e8c0
      GetGroup(int); //0x147eb30
      GetGroupName(int); //0x147ea20
      GetLoadProgress(int); //0x147f3f0
      IsGroupLoaded(int); //0x147ef80
      IsGroupLoading(int); //0x147f090
      IsGroupUnloaded(int); //0x147f2d0
      IsGroupUnloading(int); //0x147f1b0
      LoadGroup(int, char*); //0x147ec30
      PopLoadQueue(); //0x147f6a0
      PopUnloadQueue(); //0x147f710
      PushLoadQueue(int); //0x147e6a0
      PushUnloadQueue(void*); //0x147e330
      UnloadGroup(int); //0x147ee40
      Update(); //0x147f520
      ~CAudioGroupMan(); //0x147dfa0
};

class CAudioTrackKey {
      CAudioTrackKey(); //0x13c09a0
      SetupObject(); //0x13d01f0
      ~CAudioTrackKey(); //0x13d0170
};

class CBackGM2 {
      DeSerialise(IBuffer*); //0x1340710
      Serialise(IBuffer*); //0x132d2b0
};

class CBitmap32 {
      Assign(CBitmap32*); //0x137cd50
      BoundingBox(); //0x137eaf0
      CBitmap32(CBitmap32*); //0x137cdd0
      CBitmap32(CBitmap32*, int, int, int, int); //0x137ce50
      CBitmap32(IBitmap*, bool, bool); //0x137dcd0
      CBitmap32(IBitmap*, bool, bool, bool); //0x137db50
      CBitmap32(IBitmap*, bool, bool, int); //0x137e4d0
      CBitmap32(int, IBitmap*, bool, bool); //0x137dee0
      CBitmap32(int, int, unsigned int); //0x137cf60
      CBitmap32(int, int, unsigned int, unsigned int, int); //0x137d020
      CreateBitmap32(); //0x137ec10
      GetData(); //0x137edf0
      GetHeight(); //0x137ede0
      GetWidth(); //0x137edd0
      ImproveBoundary(); //0x137e6f0
      RemoveBackground(); //0x137e2d0
      SaveToFile(char const*); //0x137ee00
      SetAlpha(int); //0x137e8a0
      SetAlphaFromBitmap(CBitmap32*); //0x137e8f0
      SmoothEdges(); //0x137e360
      Stretch(int, int); //0x137e9e0
      __Free(); //0x137ed60
      ~CBitmap32(); //0x137ed20
      ~CBitmap32(); //0x137ed90
};

class CBoolTrackKey {
      CBoolTrackKey(); //0x13c1240
      SetupObject(); //0x13d0410
      ~CBoolTrackKey(); //0x13d0390
};

class CBucket<128u, 524288u, true> {
      Alloc(bool); //0x1438e80
      Check(); //0x1438130
      Free(void const*); //0x143abe0
      GetSize(); //0x143abd0
};

class CBucket<16384u, 262144u, true> {
      Alloc(bool); //0x1439480
      Check(); //0x1438340
      Free(void const*); //0x143ad00
      GetSize(); //0x143acf0
};

class CBucket<16u, 1048576u, false> {
      Alloc(bool); //0x122d7a0
      Check(); //0x123bb80
      Free(void const*); //0x123bc40
      GetSize(); //0x123bc30
};

class CBucket<16u, 262144u, true> {
      Alloc(bool); //0x1438920
      Check(); //0x1437f20
      Free(void const*); //0x143aac0
      GetSize(); //0x143aab0
};

class CBucket<256u, 1048576u, true> {
      Alloc(bool); //0x1439070
      Check(); //0x14381e0
      Free(void const*); //0x143ac40
      GetSize(); //0x143ac30
};

class CBucket<32768u, 1048576u, false> {
      Alloc(bool); //0x13233a0
      Check(); //0x1329920
      Free(void const*); //0x1323f30
      GetSize(); //0x13299d0
};

class CBucket<32u, 262144u, true> {
      Alloc(bool); //0x1438ad0
      Check(); //0x1437fd0
      Free(void const*); //0x143ab20
      GetSize(); //0x143ab10
};

class CBucket<512u, 2097152u, true> {
      Alloc(bool); //0x14392a0
      Check(); //0x1438290
      Free(void const*); //0x143aca0
      GetSize(); //0x143ac90
};

class CBucket<64u, 524288u, true> {
      Alloc(bool); //0x1438ca0
      Check(); //0x1438080
      Free(void const*); //0x143ab80
      GetSize(); //0x143ab70
};

class CBucket<8u, 131072u, true> {
      Alloc(bool); //0x1438770
      Check(); //0x1437e70
      Free(void const*); //0x143aa60
      GetSize(); //0x143aa50
};

class CCamera {
      ApplyMatrices(); //0x1386950
      Begin(); //0x1386ab0
      Build2DView(float, float); //0x13861d0
      Build3DView(float, float); //0x1386580
      BuildView(); //0x1386160
      CCamera(); //0x1385eb0
      CameraUpdate(); //0x1386bf0
      CopyFrom(CCamera*); //0x138b360
      DeSerialize(IBuffer*); //0x138b4e0
      End(); //0x1386be0
      ExecuteScript(RValue*); //0x1386ac0
      GetBeginScript(); //0x1387780
      GetCamPos(); //0x13879f0
      GetEndScript(); //0x13878a0
      GetID(); //0x1387060
      GetInvProjMat(); //0x1387430
      GetInvViewMat(); //0x1387460
      GetInvViewProjMat(); //0x1387490
      GetProjMat(); //0x1387250
      GetTargetInstance(); //0x13875f0
      GetUpdateScript(); //0x13879c0
      GetViewAngle(); //0x13875d0
      GetViewBorderX(); //0x1387590
      GetViewBorderY(); //0x13875b0
      GetViewHeight(); //0x1387530
      GetViewMat(); //0x13873d0
      GetViewProjMat(); //0x1387400
      GetViewSpeedX(); //0x1387550
      GetViewSpeedY(); //0x1387570
      GetViewWidth(); //0x1387510
      GetViewX(); //0x13874d0
      GetViewY(); //0x13874f0
      Is2D(); //0x13879e0
      IsOrthoProj(); //0x13861b0
      IsViewDirty(); //0x1386aa0
      Mark4GC(unsigned int*, int); //0x1387b10
      Serialize(IBuffer*); //0x138ade0
      SetBeginScript(RValue*); //0x1387670
      SetEndScript(RValue*); //0x1387790
      SetID(int); //0x1387050
      SetProjMat(yyMatrix&); //0x1387070
      SetTargetInstance(int); //0x13875e0
      SetUpdateScript(RValue*); //0x13878b0
      SetViewAngle(float); //0x13875c0
      SetViewBorderX(float); //0x1387580
      SetViewBorderY(float); //0x13875a0
      SetViewDirty(); //0x13879d0
      SetViewHeight(float); //0x1387520
      SetViewMat(yyMatrix&); //0x1387280
      SetViewSpeedX(float); //0x1387540
      SetViewSpeedY(float); //0x1387560
      SetViewWidth(float); //0x1387500
      SetViewX(float); //0x13874c0
      SetViewY(float); //0x13874e0
      Update2D(); //0x13871c0
      ~CCamera(); //0x1386070
};

class CCameraManager {
      AddCameraToList(CCamera*, int); //0x138bbe0
      BuildRoomCameraList(); //0x138c270
      CCameraManager(); //0x1387b90
      Clean(); //0x1387ca0
      CloneCamera(int); //0x138bdd0
      CreateCamera(); //0x1387d70
      CreateCameraFromView(YYRoomView*); //0x138bd00
      DeSerialize(IBuffer*); //0x138b930
      DestroyCamera(int); //0x1388430
      EndRoom(); //0x138c440
      FindCameraInList(int); //0x138c210
      GetActiveCamera(); //0x1388410
      GetCamera(int); //0x13882e0
      GetTempCamera(); //0x138c3c0
      Serialize(IBuffer*); //0x138b290
      SetActiveCamera(int); //0x1388420
      SetupGMLFunctions(); //0x138a7a0
      StartRoom(); //0x138c3e0
      ~CCameraManager(); //0x1387c00
};

class CCode {
      CCode(int, bool); //0x130d750
      GetStatic(); //0x130dcc0
      GetText(); //0x130db60
      ~CCode(); //0x130da60
      ~CCode(); //0x130dae0
};

class CCodepointIterator_UTF8 {
      CCodepointIterator_UTF8(char const*); //0x13a6b00
      GetNext(); //0x13a5500
      Reset(); //0x13a6b20
};

class CColorTrackKey {
      CColorTrackKey(); //0x13c19c0
      Mark4GC(unsigned int*, int); //0x13c1ab0
      SetupObject(); //0x13cfba0
      ~CColorTrackKey(); //0x13cfb20
};

class CConfigurableTimeSource {
      AttachArgs(RValue*); //0x1276b40
      AttachCallback(RValue*); //0x1276a60
      CConfigurableTimeSource(CTimeSource*, double, eTimeSourceUnits, RValue*, RValue*, long long, eTimeSourceExpiryType); //0x1276360
      Check(); //0x1275d70
      ConvertPeriod(double, eTimeSourceUnits); //0x1276a30
      Destroy(CTimeSource*); //0x1276650
      DetachArgs(); //0x12765e0
      DetachCallback(); //0x12765b0
      Expired(); //0x1276760
      FindLockedSource(); //0x1276cd0
      GetDestroyingSource(); //0x12766c0
      GetParent(); //0x1276cb0
      GetPeriod(); //0x1276c30
      GetRepsCompleted(); //0x1276c60
      GetRepsRemaining(); //0x1276c70
      GetTimeRemaining(); //0x1276c80
      GetUnits(); //0x1276c50
      HandleExpiry(); //0x1276db0
      HandleReps(); //0x1276d90
      HasFinished(); //0x12767f0
      IncrementTimer(); //0x1276740
      InvokeCallback(); //0x1276e80
      IsLocked(); //0x1276cc0
      IsMarkedForDestruction(); //0x1275d60
      MarkForDestruction(bool); //0x1276d20
      PrepareArgs(); //0x1277090
      PrepareMethod(); //0x1277070
      Reconfigure(double, eTimeSourceUnits, RValue*, RValue*, long long, eTimeSourceExpiryType); //0x12764e0
      Reset(); //0x1276870
      RolloverTimer(); //0x1276d60
      ShouldExpireEarly(); //0x1276770
      SoftReset(); //0x1276800
      Start(); //0x12767b0
      Stop(); //0x1276820
      Tick(long long); //0x12766d0
      ValidateArgs(RValue*); //0x1277000
      ValidateCallback(RValue*); //0x1276fe0
      ValidateExpiryType(eTimeSourceExpiryType); //0x1277050
      ValidateInputs(double, eTimeSourceUnits, RValue*, RValue*, long long, eTimeSourceExpiryType); //0x12768a0
      ValidatePeriod(double, eTimeSourceUnits); //0x1276f10
      ValidateReps(long long); //0x1277030
      ValidateUnits(eTimeSourceUnits); //0x1276ef0
      ~CConfigurableTimeSource(); //0x1276630
      ~CConfigurableTimeSource(); //0x1277320
};

class CCurvePoint {
      CCurvePoint(); //0x13c29b0
      ~CCurvePoint(); //0x13c2a70
      ~CCurvePoint(); //0x13cf930
};

class CDS_Grid {
      Add4GC(CGCGeneration*); //0x1405270
      Assign(CDS_Grid*); //0x1402600
      CDS_Grid(int, int); //0x1402420
      Cell_Operation(int, int, int, int, RValue*); //0x1402c60
      Clear(RValue*); //0x1402c00
      Disk_Operation(int, double, double, double, RValue*); //0x1402f00
      Get_Disk_Max(RValue&, double, double, double); //0x1403d60
      Get_Disk_Mean(RValue&, double, double, double); //0x1404200
      Get_Disk_Min(RValue&, double, double, double); //0x1403fb0
      Get_Disk_Sum(RValue&, double, double, double); //0x1403c40
      Get_Max(RValue&, int, int, int, int); //0x1403790
      Get_Mean(RValue&, int, int, int, int); //0x1403b50
      Get_Min(RValue&, int, int, int, int); //0x1403970
      Get_Sum(RValue&, int, int, int, int); //0x14036a0
      Grid_Operation(int, CDS_Grid*, int, int, int, int, int, int); //0x14030d0
      Mark4GC(unsigned int*, int); //0x1405200
      MarkOnlyChildren4GC(unsigned int*, int); //0x14052e0
      ReadFromString(char const*, bool); //0x14027d0
      Region_Operation(int, int, int, int, int, RValue*); //0x1402d70
      Resize(int, int); //0x1402a70
      Set(int, int, RValue*); //0x1328430
      SetSize(int, int); //0x1402450
      Shuffle(); //0x1404bf0
      Sort(int, int); //0x1404e20
      Value_Disk_Exists(RValue&, double, double, double, RValue*); //0x1404710
      Value_Disk_X(RValue&, double, double, double, RValue*); //0x14048b0
      Value_Disk_Y(RValue&, double, double, double, RValue*); //0x1404a50
      Value_Exists(RValue&, int, int, int, int, RValue*); //0x1404340
      Value_X(RValue&, int, int, int, int, RValue*); //0x1404480
      Value_Y(RValue&, int, int, int, int, RValue*); //0x14045c0
      WriteToString(char const*&); //0x14026e0
      ~CDS_Grid(); //0x1405130
};

class CDS_List {
      Add(RValue*); //0x13fda10
      Add4GC(CGCGeneration*); //0x13fd970
      Assign(CDS_List*); //0x13fd220
      CDS_List(); //0x13fd1e0
      Clear(); //0x13fd370
      Delete(int); //0x13fdf60
      Empty(); //0x13fe030
      Find(RValue*); //0x13fe040
      GetValue(int); //0x13fe0c0
      Insert(int, RValue*); //0x13fdb10
      Mark4GC(unsigned int*, int); //0x13fd920
      MarkOnlyChildren4GC(unsigned int*, int); //0x13fd9c0
      ReadFromString(char const*, bool); //0x13fd690
      Replace(int, RValue*); //0x13fde10
      Set(int, RValue*, RValue*); //0x13fdc70
      Shuffle(); //0x13fe140
      Size(); //0x1405660
      Sort(bool); //0x13fe110
      WriteToString(char const*&); //0x13fd5e0
      ~CDS_List(); //0x13fe250
      ~CDS_List(); //0x13fe2b0
};

class CDS_Map {
      Add(RValue*, RValue*); //0x13ffb70
      Add(char const*, double, char const*); //0x1400540
      Add4GC(CGCGeneration*); //0x13feb40
      Assign(CDS_Map*); //0x13fe550
      CDS_Map(); //0x13fe440
      CDS_Map(int); //0x13fe4c0
      Clear(); //0x13ff850
      Delete(RValue*); //0x1400790
      Empty(); //0x1400a30
      Exists(RValue*); //0x1400a40
      Find(RValue*); //0x13fe310
      FindFirst(); //0x1400e70
      FindLast(); //0x1400eb0
      FindNext(RValue*); //0x1400ba0
      FindPrevious(RValue*); //0x1400a50
      Mark4GC(unsigned int*, int); //0x13fea50
      MarkOnlyChildren4GC(unsigned int*, int); //0x13fec30
      ReadFromString(char const*, bool); //0x13fee90
      Replace(RValue*, RValue*); //0x1400620
      Set(RValue*, RValue*, RValue*); //0x13fff30
      Size(); //0x1405670
      WriteToString(char const*&); //0x13fed30
      ~CDS_Map(); //0x1400f70
};

class CDS_Priority {
      Add(RValue*, RValue*); //0x1401980
      Add4GC(CGCGeneration*); //0x1401880
      Assign(CDS_Priority*); //0x1401160
      CDS_Priority(); //0x1400ff0
      Change(RValue*, RValue*); //0x1401b00
      Clear(); //0x1401020
      Delete(RValue*); //0x1401d10
      DeleteMax(RValue*); //0x1402080
      DeleteMin(RValue*); //0x1401ea0
      Empty(); //0x1402380
      Find(RValue*); //0x1401c90
      FindMax(); //0x14022f0
      FindMin(); //0x1402260
      Mark4GC(unsigned int*, int); //0x1401800
      MarkOnlyChildren4GC(unsigned int*, int); //0x1401900
      ReadFromString(char const*, bool); //0x1401450
      Size(); //0x1405680
      WriteToString(char const*&); //0x1401370
      ~CDS_Priority(); //0x1402390
      ~CDS_Priority(); //0x14023e0
};

class CDS_Queue {
      Add4GC(CGCGeneration*); //0x13fcd90
      Assign(CDS_Queue*); //0x13fc760
      CDS_Queue(); //0x13fc5e0
      Clear(); //0x13fc6b0
      Dequeue(); //0x13fcf30
      Empty(); //0x13fd0b0
      Enqueue(RValue*); //0x13fce40
      GetSize(); //0x13fc5d0
      Head(); //0x13fd070
      Mark4GC(unsigned int*, int); //0x13fcd40
      MarkOnlyChildren4GC(unsigned int*, int); //0x13fcde0
      ReadFromString(char const*, bool); //0x13fca10
      Size(); //0x1405650
      Tail(); //0x13fd090
      WriteToString(char const*&); //0x13fc940
      ~CDS_Queue(); //0x13fd0c0
      ~CDS_Queue(); //0x13fd1c0
};

class CDS_Stack {
      Add4GC(CGCGeneration*); //0x13fc530
      Assign(CDS_Stack*); //0x13fbcf0
      CDS_Stack(); //0x13fbbd0
      Clear(); //0x13fbc30
      Empty(); //0x13fc3d0
      Mark4GC(unsigned int*, int); //0x13fc4e0
      MarkOnlyChildren4GC(unsigned int*, int); //0x13fc580
      Pop(); //0x13fc390
      Push(RValue*); //0x13fc2a0
      ReadFromString(char const*, bool); //0x13fbf80
      Size(); //0x1405640
      Top(); //0x13fc3b0
      WriteToString(char const*&); //0x13fbed0
      ~CDS_Stack(); //0x13fc3e0
      ~CDS_Stack(); //0x13fc4c0
};

class CEmitter {
      AddNoiseToEmitter(CNoise*); //0x147ddb0
      CEmitter(); //0x147dcb0
      GetBus(); //0x147df20
      RemoveNoiseFromEmitter(CNoise*); //0x147dd70
      Reset(); //0x147dd20
      SetBus(AudioBus*); //0x147df30
};

class CEvent {
      CEvent(); //0x139b850
      Clear(); //0x139b860
      Compile(); //0x139b8e0
      Execute(CInstance*, CInstance*); //0x139b900
      LoadFromChunk(YYEvent*, unsigned char*); //0x139b870
      ~CEvent(); //0x139b8f0
};

class CExtensionFile {
      CExtensionFile(); //0x1423c00
      Clear(); //0x1423c50
      Free(); //0x1423db0
      FunctionFindId(int); //0x1423cd0
      FunctionFindName(char const*); //0x1423c80
      GetFileName(); //0x1423dc0
      GetFunction(int); //0x1423ab0
      GetFunction_Final(); //0x1423e50
      GetFunction_Init(); //0x1423e20
      GetFunctionsCount(); //0x1423e90
      GetFunctionsData(int); //0x1423ea0
      GetKind(); //0x1423e00
      SetCFunctions(int); //0x1423af0
      SetFileName(char const*); //0x1423dd0
      SetFunction(int, CExtensionFunction*); //0x1423ad0
      SetFunction_Final(char const*); //0x1423e60
      SetFunction_Init(char const*); //0x1423e30
      SetFunctionsCount(int); //0x1423c70
      SetFunctionsData(int, CExtensionFunction*); //0x1423ec0
      SetKind(int); //0x1423e10
      ~CExtensionFile(); //0x1423d00
      ~CExtensionFile(); //0x1423d90
};

class CExtensionFunction {
      Assign(CExtensionFunction*); //0x1423790
      CExtensionFunction(); //0x14236e0
      Clear(); //0x1423740
      Free(); //0x1423960
      GetArgCount(); //0x1423a30
      GetArgType(int); //0x14236b0
      GetExternalName(); //0x14239b0
      GetId(); //0x1423a10
      GetKind(); //0x14239f0
      GetName(); //0x1423970
      GetReturnType(); //0x1423a50
      GetScript(); //0x1423a70
      SetArgCount(int); //0x1423a40
      SetArgType(int, int); //0x14236d0
      SetExternalName(char const*); //0x14239c0
      SetId(int); //0x1423a20
      SetKind(int); //0x1423a00
      SetName(char const*); //0x1423980
      SetReturnType(int); //0x1423a60
      SetScript(char const*); //0x1423a80
      ~CExtensionFunction(); //0x1423880
      ~CExtensionFunction(); //0x14238f0
};

class CExtensionOption {
      CExtensionOption(); //0x1423ee0
      Clear(); //0x1423f00
      Free(); //0x1423fb0
      GetKind(); //0x1424040
      GetName(); //0x1423fc0
      GetValue(); //0x1424000
      SetKind(int); //0x1424050
      SetName(char const*); //0x1423fd0
      SetValue(char const*); //0x1424010
      ~CExtensionOption(); //0x1423f10
      ~CExtensionOption(); //0x1423f60
};

class CExtensionPackage {
      CExtensionPackage(); //0x14242a0
      Clear(); //0x1424350
      Free(); //0x1424700
      FunctionFindId(int); //0x1424540
      FunctionFindName(char const*); //0x14244a0
      GetClassName(); //0x1424790
      GetFolder(); //0x14247d0
      GetIncludes(int); //0x1424060
      GetIncludesCount(); //0x1424810
      GetIncludesFile(int); //0x1424820
      GetName(); //0x1424710
      GetOption(int); //0x1424930
      GetOptions(int); //0x14241b0
      GetOptionsCount(); //0x1424840
      GetVersion(); //0x1424750
      OptionFindName(char const*); //0x14245a0
      SetCIncludes(int); //0x1424080
      SetCOptions(int); //0x14241d0
      SetClassName(char const*); //0x14247a0
      SetFolder(char const*); //0x14247e0
      SetIncludesCount(int); //0x1424490
      SetName(char const*); //0x1424720
      SetOptionsCount(int); //0x1424850
      SetVersion(char const*); //0x1424760
      ~CExtensionPackage(); //0x14245f0
      ~CExtensionPackage(); //0x14246e0
};

class CFD_Sets {
      CFD_Sets(); //0x1263430
      GetyySocket(int); //0x1263a80
      add(yySocket*, bool, bool, bool); //0x1263490
      count(); //0x1263a70
      find_idx_by_yySocket(yySocket const*); //0x1263750
      poll(int); //0x12637b0
      remove(yySocket*); //0x1263620
      ~CFD_Sets(); //0x1263480
};

class CFD_Sets::FDIsSet_by_index(int, CFD_Sets {
      Set); //0x12639a0
};

class CFD_Sets::FDIsSet_by_yySocket(yySocket*, CFD_Sets {
      Set); //0x1263a10
};

class CFontGM {
      Assign(CFontGM*); //0x13769e0
      CFontGM(); //0x1375050
      CFontGM(YYEmbeddedFont*); //0x1376550
      CFontGM(char const*, float, bool, bool, int, int); //0x13753a0
      CFontGM(int, char const*, bool, int); //0x1375fa0
      CFontGM(unsigned char*, int, int, int); //0x1375cb0
      Clear(); //0x13751e0
      CreateIt(); //0x1375630
      Draw_String(float, float, unsigned int*, unsigned int, float); //0x1377020
      Draw_String_Color(float, float, unsigned int*, unsigned int, unsigned int, unsigned int, unsigned int, float); //0x1378bc0
      Draw_String_IDEstyle(float, float, unsigned int*, unsigned int, float, float, float, float, float, FontEffectParams*, bool); //0x1377640
      Draw_String_Transformed(float, float, unsigned int*, float, float, float, unsigned int, float); //0x1377d30
      Draw_String_Transformed_Color(float, float, unsigned int*, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, float); //0x13792e0
      EnableSDFRendering(bool); //0x1379c90
      Free(); //0x137a330
      FreeTexture(); //0x13769c0
      GetBold(); //0x137a360
      GetEffectParams(RValue&); //0x137a0d0
      GetFirst(); //0x137a380
      GetGlyph(int, bool); //0x1374970
      GetItalic(); //0x137a370
      GetKerning(int, YYGlyph2*); //0x1374910
      GetLast(); //0x137a390
      GetName(); //0x137a340
      GetSDFSpread(); //0x1379cf0
      GetShift(int); //0x1375030
      GetSize(); //0x137a350
      GetTexture(); //0x137a3a0
      InitTexture(); //0x1375c50
      IsSDFRenderingEnabled(); //0x1377630
      IsUsingFreetype(); //0x1379c80
      LoadFromChunk(YYFont3*, unsigned char*); //0x1376d00
      LoadFromChunk_Prev(YYFont*, unsigned char*); //0x1376b70
      SetEffectParams(YYObjectBase*); //0x1379d00
      SetSDFSpread(int); //0x1379cc0
      TextHeight(unsigned int*); //0x1379c60
      TextWidth(unsigned int*, float); //0x1379250
      TextWidthN(unsigned int*, int, float); //0x1379bc0
      ~CFontGM(); //0x1376f20
      ~CFontGM(); //0x1376fa0
};

class CGCGeneration {
      AddClassStat(char const*); //0x122e1d0
      AddDynamicRoot(YYObjectBase*, bool); //0x122e0e0
      AddRoot(YYObjectBase*); //0x122dd10
      CGCGeneration(); //0x122da30
      IsRoot(YYObjectBase*); //0x122dfa0
      RemoveRoot(YYObjectBase*); //0x122e040
      Reset(); //0x122dba0
      ResetClassStats(); //0x122e180
      ResetDynamicRoots(); //0x122dd00
      UpdateRange(int); //0x122e160
      ~CGCGeneration(); //0x122db40
};

class CGesture {
      CGesture(); //0x1212f50
      ~CGesture(); //0x1212fa0
      ~CGesture(); //0x1217610
};

class CGestureDoubleTap {
      Update(long long); //0x1213f90
      ~CGestureDoubleTap(); //0x1217700
};

class CGestureDrag {
      Update(long long); //0x1214320
      ~CGestureDrag(); //0x1217740
};

class CGestureEvent {
      ~CGestureEvent(); //0x1217060
};

class CGesturePinch {
      IsUsingTouch(int); //0x1215c50
      IsUsingTouchUID(int); //0x1215cd0
      NumUsedTouches(); //0x12177c0
      Update(long long); //0x1214810
      ~CGesturePinch(); //0x1217780
};

class CGestureRotate {
      IsUsingTouch(int); //0x1216fd0
      IsUsingTouchUID(int); //0x1217050
      NumUsedTouches(); //0x1217810
      Update(long long); //0x1215ce0
      ~CGestureRotate(); //0x12177d0
};

class CGestureTap {
      Update(long long); //0x12139a0
      ~CGestureTap(); //0x12176c0
};

class CGestureUnknown {
      Update(long long); //0x1213770
      ~CGestureUnknown(); //0x1217680
};

class CGraphicTrackKey {
      CGraphicTrackKey(); //0x13c00b0
      SetupObject(); //0x13cfef0
      ~CGraphicTrackKey(); //0x13cfe70
};

class CGrid {
      AddInstance(CInstance*, bool); //0x1426770
      Draw(); //0x14276a0
      FindPath(CPath*, int, int, int, int, bool); //0x1426a70
      ReallocQueue(); //0x1427cd0
      ~CGrid(); //0x1427c60
      ~CGrid(); //0x1427c90
};

class CHashMap<CSeqStackSnapshot, CSeqTrackAudioInfo, 3> {
      CalculateHash(CSeqStackSnapshot&); //0x13d4370
      Clear(); //0x13c98c0
      Grow(); //0x13d4470
      Insert(CSeqStackSnapshot, CSeqTrackAudioInfo); //0x13c8dc0
      ~CHashMap(); //0x13c6de0
};

class CHashMap<CSeqStackSnapshot, CSeqTrackInstanceInfo, 3> {
      CalculateHash(CSeqStackSnapshot&); //0x1339760
      CommonDelete(int); //0x13d3fa0
      FindPositionCheckKey(CSeqStackSnapshot&); //0x1339560
      Grow(); //0x13d4170
      Insert(CSeqStackSnapshot, CSeqTrackInstanceInfo); //0x13c7da0
      ~CHashMap(); //0x13c6db0
};

class CHashMap<RValue& (*)(CInstance*, CInstance*, RValue&, int, RValue**), int, 3> {
      ~CHashMap(); //0x130f5e0
};

class CHashMap<YYObjectBase*, YYObjectBase*, 3> {
      CommonDelete(int); //0x123bda0
      Insert(YYObjectBase*, YYObjectBase*); //0x123a5f0
      Shrink(); //0x123a920
};

class CHashMap<YYObjectBase*, YYObjectBase*, 4> {
      CommonDelete(int); //0x123bcc0
      Insert(YYObjectBase*, YYObjectBase*); //0x122dd30
      Shrink(); //0x1313de0
};

class CHashMap<char const*, EffectInfo*, 3> {
      Insert(char const*, EffectInfo*); //0x1288560
      ~CHashMap(); //0x12873e0
};

class CHashMap<char const*, char const*, 3> {
      Insert(char const*, char const*); //0x13d4ae0
};

class CHashMap<char const*, int, 3> {
      CommonDelete(int); //0x13fa5a0
      Insert(char const*, int); //0x1229830
      ~CHashMap(); //0x13f7900
};

class CHashMap<int, CAudioEffectTrackKey*, 0> {
      Insert(int, CAudioEffectTrackKey*); //0x13b0ee0
};

class CHashMap<int, CAudioTrackKey*, 0> {
      Insert(int, CAudioTrackKey*); //0x13ae500
};

class CHashMap<int, CBoolTrackKey*, 0> {
      Insert(int, CBoolTrackKey*); //0x13af040
};

class CHashMap<int, CColorTrackKey*, 0> {
      Insert(int, CColorTrackKey*); //0x13b0290
};

class CHashMap<int, CGraphicTrackKey*, 0> {
      Insert(int, CGraphicTrackKey*); //0x13acfb0
};

class CHashMap<int, CInstance*, 3> {
      Insert(int, CInstance*); //0x13294c0
};

class CHashMap<int, CInstanceTrackKey*, 0> {
      Insert(int, CInstanceTrackKey*); //0x13ad4f0
};

class CHashMap<int, CLayer*, 3> {
      CommonDelete(int); //0x135b1f0
      Insert(int, CLayer*); //0x133ecd0
      ~CHashMap(); //0x132b000
};

class CHashMap<int, CLayerElementBase*, 3> {
      CommonDelete(int); //0x135b050
      Insert(int, CLayerElementBase*); //0x1342840
      ~CHashMap(); //0x132afd0
};

class CHashMap<int, CLayerInstanceElement*, 3> {
      CommonDelete(int); //0x135b120
      Insert(int, CLayerInstanceElement*); //0x1342ad0
      ~CHashMap(); //0x132afa0
};

class CHashMap<int, CMessageEventKey*, 0> {
      Insert(int, CMessageEventKey*); //0x13b2f00
};

class CHashMap<int, CMomentEventKey*, 0> {
      Insert(int, CMomentEventKey*); //0x13b3220
};

class CHashMap<int, CObjectGM*, 2> {
      Insert(int, CObjectGM*); //0x1368f00
};

class CHashMap<int, CParticleTrackKey*, 0> {
      Insert(int, CParticleTrackKey*); //0x13ada30
};

class CHashMap<int, CRealTrackKey*, 0> {
      Insert(int, CRealTrackKey*); //0x13b0900
};

class CHashMap<int, CScript*, 3> {
      Insert(int, CScript*); //0x1221830
};

class CHashMap<int, CSequenceBaseTrack*, 3> {
      CommonDelete(int); //0x13d3750
      Insert(int, CSequenceBaseTrack*); //0x13b44f0
      ~CHashMap(); //0x13c9e10
};

class CHashMap<int, CSequenceTrackKey*, 0> {
      Insert(int, CSequenceTrackKey*); //0x13adf70
};

class CHashMap<int, CSpriteFramesTrackKey*, 0> {
      Insert(int, CSpriteFramesTrackKey*); //0x13b1420
};

class CHashMap<int, CStringTrackKey*, 0> {
      Insert(int, CStringTrackKey*); //0x13af620
};

class CHashMap<int, CTextTrackKey*, 0> {
      Insert(int, CTextTrackKey*); //0x13aeaf0
};

class CHashMap<int, CTrackKeyBase*, 0> {
      Insert(int, CTrackKeyBase*); //0x13ac9b0
};

class CHashMap<int, CTrackKeyBase*, 3> {
      Insert(int, CTrackKeyBase*); //0x1336460
      ~CHashMap(); //0x13c6d80
};

class CHashMap<int, STagList, 3> {
      Insert(int, STagList); //0x13d55c0
};

class CHashMap<int, TrackTag*, 3> {
      CommonDelete(int); //0x13d3820
      Insert(int, TrackTag*); //0x13b23d0
};

class CHashMap<int, YYObjectBase*, 3> {
      Insert(int, YYObjectBase*); //0x12c1210
      ~CHashMap(); //0x12c0d00
};

class CHashMap<int, int, 3> {
      CommonDelete(int); //0x1436d80
      DeleteCheckKey(int); //0x1436bd0
      Insert(int, int); //0x1336190
      ~CHashMap(); //0x13c6290
};

class CHashMap<unsigned char*, VMBuffer*, 3> {
      Insert(unsigned char*, VMBuffer*); //0x132a250
      ~CHashMap(); //0x1329e80
};

class CHashMap<unsigned long long, CEvent*, 3> {
      CommonDelete(int); //0x1367c20
      Insert(unsigned long long, CEvent*); //0x1366920
};

class CHashMap<void*, CScript*, 3> {
      Insert(void*, CScript*); //0x1221cb0
};

class CHashMap<void*, SScriptCacheInfo*, 3> {
      Insert(void*, SScriptCacheInfo*); //0x130f360
};

class CInstance {
      Activate(); //0x1231530
      Adapt_Path(); //0x1238200
      Adapt_Speed(); //0x1237a60
      AddTo_Speed(float, float); //0x12378d0
      Alloc(float, float, int, int, bool); //0x1231310
      Assign(CInstance*, bool); //0x1231700
      Assign_Path(int, float, float, float, bool, int); //0x1237d10
      CInstance(float, float, int, int, bool); //0x1230c40
      ChangeObjectIndex(int); //0x1234be0
      CheckSkeletonAnimation(); //0x1235340
      CollisionImageIndex(bool); //0x12345c0
      Collision_Ellipse(float, float, float, float, bool); //0x1238ff0
      Collision_Instance(CInstance*, bool); //0x1239ab0
      Collision_Line(float, float, float, float, bool); //0x12393b0
      Collision_Point(float, float, bool); //0x12389a0
      Collision_Rectangle(float, float, float, float, bool); //0x1238be0
      Collision_Skeleton(CInstance*, bool); //0x1239790
      Compute_BoundingBox(bool); //0x1233b70
      Compute_Speed1(); //0x1234790
      Compute_Speed2(); //0x12348d0
      CreatePhysicsBody(CRoom*); //0x1234e20
      DeSerialise(IBuffer*, bool); //0x1236bd0
      Deactivate(); //0x1231650
      DisconnectFromLists(); //0x12312d0
      Dump(tagIConsole&); //0x1235b80
      Find(int); //0x1321da0
      Free(bool); //0x12313c0
      GetCollisionSkeleton(); //0x1234560
      GetImageIndex(); //0x1235250
      GetImageNumber(); //0x12353c0
      GetTimer(int); //0x1235ad0
      Mark4GC(unsigned int*, int); //0x1231380
      MaskCollisionSkeleton(); //0x1234440
      Maybe_Compute_BoundingBox(bool); //0x1234610
      PreFree(); //0x1231400
      RebuildPhysicsBody(CRoom*); //0x1234dc0
      RelinkObjectTypes(); //0x1234ba0
      Serialise(IBuffer*); //0x1236130
      SetDeactivated(bool); //0x12315f0
      SetDirection(float); //0x1235640
      SetHspeed(float); //0x1235830
      SetID(int, bool); //0x1239f10
      SetImageAngle(float); //0x1235560
      SetImageIndexExt(float); //0x1234ad0
      SetImageScaleX(float); //0x1235420
      SetImageScaleY(float); //0x12354c0
      SetObjectIndex(int, bool); //0x1230fb0
      SetPathIndex(int); //0x1232110
      SetPathPosition(float); //0x1232170
      SetPathPositionPrevious(float); //0x1235b00
      SetPosition(float, float); //0x1237850
      SetSpeed(float); //0x1235740
      SetSpriteIndex(int); //0x12349a0
      SetTimer(int, int); //0x1235af0
      SetVspeed(float); //0x1235980
      Set_MaskIndex(int); //0x1234b80
      SkeletonAnimation(); //0x1234a50
      ThreadFree(bool, GCContext*); //0x12313e0
      UseSkeletonCollision(); //0x1234750
      ~CInstance(); //0x1231150
      ~CInstance(); //0x12312b0
};

class CInstanceBase {
      GetYYVarRef(int); //0xb26320
      GetYYVarRefL(int); //0xb26330
};

class CInstanceTrackKey {
      CInstanceTrackKey(); //0x13c0270
      SetupObject(); //0x13cfff0
      ~CInstanceTrackKey(); //0x13cff70
};

class CKeyFrameStore<CAudioEffectTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CAudioEffectTrackKey*, 0>*); //0x13d2940
      CKeyFrameStore(); //0x13bcec0
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x13d3df0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x13d3b30
      Mark4GC(unsigned int*, int); //0x13d3a30
      UpdateDirtiness(); //0x13d3aa0
      getKeyframeCount(); //0x13d3b20
      ~CKeyFrameStore(); //0x13d38f0
      ~CKeyFrameStore(); //0x13d3a10
};

class CKeyFrameStore<CAudioTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CAudioTrackKey*, 0>*); //0x13d1ae0
      CKeyFrameStore(); //0x13b4bf0
      GetKeyframeIndexAtFrame(float, float); //0x13ceec0
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12fa270
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f9fb0
      Mark4GC(unsigned int*, int); //0x12f9eb0
      UpdateDirtiness(); //0x12f9f20
      getKeyframeCount(); //0x12f9fa0
      ~CKeyFrameStore(); //0x12f9df0
      ~CKeyFrameStore(); //0x12f9e90
};

class CKeyFrameStore<CBoolTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CBoolTrackKey*, 0>*); //0x13d20a0
      CKeyFrameStore(); //0x13d0e40
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f89b0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f86f0
      Mark4GC(unsigned int*, int); //0x12f85f0
      UpdateDirtiness(); //0x12f8660
      getKeyframeCount(); //0x12f86e0
      ~CKeyFrameStore(); //0x12f8530
      ~CKeyFrameStore(); //0x12f85d0
};

class CKeyFrameStore<CColorTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CColorTrackKey*, 0>*); //0x13d2660
      CKeyFrameStore(); //0x13d0a80
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f9c40
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f9980
      Mark4GC(unsigned int*, int); //0x12f9880
      UpdateDirtiness(); //0x12f98f0
      getKeyframeCount(); //0x12f9970
      ~CKeyFrameStore(); //0x12f97c0
      ~CKeyFrameStore(); //0x12f9860
};

class CKeyFrameStore<CGraphicTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CGraphicTrackKey*, 0>*); //0x13d0f60
      CKeyFrameStore(); //0x13d0840
      GetKeyframeIndexAtFrame(float, float); //0x13345a0
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f6490
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f61d0
      Mark4GC(unsigned int*, int); //0x12f60d0
      UpdateDirtiness(); //0x12f6140
      getKeyframeCount(); //0x12f61c0
      ~CKeyFrameStore(); //0x12f6010
      ~CKeyFrameStore(); //0x12f60b0
};

class CKeyFrameStore<CInstanceTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CInstanceTrackKey*, 0>*); //0x13d1240
      CKeyFrameStore(); //0x13d0900
      GetKeyframeIndexAtFrame(float, float); //0x1335b00
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f6ac0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f6800
      Mark4GC(unsigned int*, int); //0x12f6700
      UpdateDirtiness(); //0x12f6770
      getKeyframeCount(); //0x12f67f0
      ~CKeyFrameStore(); //0x12f6640
      ~CKeyFrameStore(); //0x12f66e0
};

class CKeyFrameStore<CMessageEventKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CMessageEventKey*, 0>*); //0x13d3190
      CKeyFrameStore(); //0x13c6110
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12fa8a0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12fa5e0
      Mark4GC(unsigned int*, int); //0x12fa4e0
      UpdateDirtiness(); //0x12fa550
      getKeyframeCount(); //0x12fa5d0
      ~CKeyFrameStore(); //0x12fa420
      ~CKeyFrameStore(); //0x12fa4c0
};

class CKeyFrameStore<CMomentEventKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CMomentEventKey*, 0>*); //0x13d3470
      CKeyFrameStore(); //0x13c61d0
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12faed0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12fac10
      Mark4GC(unsigned int*, int); //0x12fab10
      UpdateDirtiness(); //0x12fab80
      getKeyframeCount(); //0x12fac00
      ~CKeyFrameStore(); //0x12faa50
      ~CKeyFrameStore(); //0x12faaf0
};

class CKeyFrameStore<CParticleTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CParticleTrackKey*, 0>*); //0x13d1520
      CKeyFrameStore(); //0x13d09c0
      GetKeyframeIndexAtFrame(float, float); //0x1336060
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f70f0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f6e30
      Mark4GC(unsigned int*, int); //0x12f6d30
      UpdateDirtiness(); //0x12f6da0
      getKeyframeCount(); //0x12f6e20
      ~CKeyFrameStore(); //0x12f6c70
      ~CKeyFrameStore(); //0x12f6d10
};

class CKeyFrameStore<CRealTrackKey*> {
      AddKeyframe(float, float, bool, bool, CHashMap<int, CRealTrackKey*, 0>*); //0x13bfc20
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CRealTrackKey*, 0>*); //0x13bfcd0
      CKeyFrameStore(); //0x13d0780
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f9610
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f9350
      Mark4GC(unsigned int*, int); //0x12f9250
      UpdateDirtiness(); //0x12f92c0
      getKeyframeCount(); //0x12f9340
      ~CKeyFrameStore(); //0x12f9190
      ~CKeyFrameStore(); //0x12f9230
};

class CKeyFrameStore<CSequenceTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CSequenceTrackKey*, 0>*); //0x13d1800
      CKeyFrameStore(); //0x13d0c00
      GetKeyframeIndexAtFrame(float, float); //0x1334b40
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f7720
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f7460
      Mark4GC(unsigned int*, int); //0x12f7360
      UpdateDirtiness(); //0x12f73d0
      getKeyframeCount(); //0x12f7450
      ~CKeyFrameStore(); //0x12f72a0
      ~CKeyFrameStore(); //0x12f7340
};

class CKeyFrameStore<CSpriteFramesTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CSpriteFramesTrackKey*, 0>*); //0x13d2eb0
      CKeyFrameStore(); //0x13d0b40
      GetKeyFramesAround(float, Keyframe<CSpriteFramesTrackKey*>**, Keyframe<CSpriteFramesTrackKey*>**); //0x13be300
      GetKeyframeIndexAtFrame(float, float); //0x13304b0
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f8380
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f80c0
      Mark4GC(unsigned int*, int); //0x12f7fc0
      UpdateDirtiness(); //0x12f8030
      getKeyframeCount(); //0x12f80b0
      ~CKeyFrameStore(); //0x12f7f00
      ~CKeyFrameStore(); //0x12f7fa0
};

class CKeyFrameStore<CStringTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CStringTrackKey*, 0>*); //0x13d2380
      CKeyFrameStore(); //0x13d0d80
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f8fe0
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f8d20
      Mark4GC(unsigned int*, int); //0x12f8c20
      UpdateDirtiness(); //0x12f8c90
      getKeyframeCount(); //0x12f8d10
      ~CKeyFrameStore(); //0x12f8b60
      ~CKeyFrameStore(); //0x12f8c00
};

class CKeyFrameStore<CTextTrackKey*> {
      AddKeyframeCommon(float, float, bool, bool, CHashMap<int, CTextTrackKey*, 0>*); //0x13d1dc0
      CKeyFrameStore(); //0x13d0cc0
      GetKeyframeIndexAtFrame(float, float); //0x1337250
      GetKeyframeIndexRange(float, float, int&, int&, float, bool, float); //0x12f7d50
      GetKeyframeIndexRanges(int, float, float, float, float, float, int*, int*, bool, bool); //0x12f7a90
      Mark4GC(unsigned int*, int); //0x12f7990
      UpdateDirtiness(); //0x12f7a00
      getKeyframeCount(); //0x12f7a80
      ~CKeyFrameStore(); //0x12f78d0
      ~CKeyFrameStore(); //0x12f7970
};

class CLangMan {
      GetActiveLanguage(char const**, char const**); //0x122ba20
      Language_Load(unsigned char*, unsigned int, unsigned char*); //0x122b630
      SetActiveLanguage(char*, char*); //0x122b950
};

class CLayer {
      Serialize(IBuffer*); //0x132c970
      SetBeginScript(RValue*); //0x133e780
      SetEffect(RValue*); //0x1288050
      SetEndScript(RValue*); //0x133e850
      ~CLayer(); //0x1330270
};

class CLayerEffectInfo {
      CLayerEffectInfo(CLayerEffectInfo&); //0x135aad0
};

class CLayerEffectParam {
      ~CLayerEffectParam(); //0x1330430
};

class CLayerManager {
      AddDynamicLayer(CRoom*, int); //0x13408f0
      AddElementToLayer(CRoom*, CLayer*, CLayerElementBase*, bool); //0x133e920
      AddInstance(CRoom*, CInstance*); //0x133d1b0
      AddInstanceToLayer(CRoom*, CLayer*, CInstance*); //0x1341790
      AddLayer(CRoom*, int, char const*); //0x1340940
      AddNewElement(CRoom*, CLayer*, CLayerElementBase*, bool); //0x133bba0
      AddNewElementAtDepth(CRoom*, int, CLayerElementBase*, bool, bool); //0x1342d60
      BuildBackgroundElementRuntimeData(CRoom*, CLayer*, CLayerBackgroundElement*); //0x133f730
      BuildElementRuntimeData(CRoom*, CLayer*, CLayerElementBase*); //0x133d110
      BuildInstanceElementRuntimeData(CRoom*, CLayer*, CLayerInstanceElement*); //0x133f740
      BuildOldTilemapElementRuntimeData(CRoom*, CLayer*, CLayerOldTilemapElement*); //0x133f8a0
      BuildParticleElementRuntimeData(CRoom*, CLayer*, CLayerParticleElement*); //0x133fa60
      BuildRoomLayerRuntimeData(CRoom*); //0x133cee0
      BuildRoomLayers(CRoom*, YYRoomLayers*); //0x133a980
      BuildSequenceElementRuntimeData(CRoom*, CLayer*, CLayerSequenceElement*); //0x133fac0
      BuildSpriteElementRuntimeData(CRoom*, CLayer*, CLayerSpriteElement*); //0x133fa40
      BuildTextElementRuntimeData(CRoom*, CLayer*, CLayerTextElement*); //0x133fb80
      BuildTileElementRuntimeData(CRoom*, CLayer*, CLayerTileElement*); //0x133fab0
      BuildTilemapElementRuntimeData(CRoom*, CLayer*, CLayerTilemapElement*); //0x133fa50
      ChangeInstanceDepth(CRoom*, CInstance*); //0x13423b0
      ChangeLayerDepth(CRoom*, CLayer*, int, bool); //0x1340dc0
      ChangeLayerDepth(CRoom*, int, int, bool); //0x1341530
      CleanBackgroundElementRuntimeData(CRoom*, CLayerBackgroundElement*); //0x13425b0
      CleanElementRuntimeData(CRoom*, CLayerElementBase*); //0x133d4c0
      CleanInstanceElementRuntimeData(CRoom*, CLayerInstanceElement*); //0x13425c0
      CleanOldTilemapElementRuntimeData(CRoom*, CLayerOldTilemapElement*); //0x1342630
      CleanParticleElementRuntimeData(CRoom*, CLayerParticleElement*); //0x1342770
      CleanRoomLayerRuntimeData(CRoom*); //0x133d430
      CleanRoomLayers(CRoom*); //0x133c4f0
      CleanSequenceElementRuntimeData(CRoom*, CLayerSequenceElement*); //0x1342790
      CleanSpriteElementRuntimeData(CRoom*, CLayerSpriteElement*); //0x1342750
      CleanTextElementRuntimeData(CRoom*, CLayerTextElement*); //0x13427e0
      CleanTileElementRuntimeData(CRoom*, CLayerTileElement*); //0x1342780
      CleanTilemapElementRuntimeData(CRoom*, CLayerTilemapElement*); //0x1342760
      Close(); //0x133a650
      DeSerializeLayer(CRoom*, IBuffer*); //0x133fc30
      DuplicateRoomLayers(CRoom*, CRoom*); //0x133d8d0
      GetElementFromID(CLayer*, int); //0x1343100
      GetElementFromID(CRoom*, int, CLayer**); //0x1342e50
      GetElementFromName(CLayer*, char const*); //0x1343090
      GetElementFromName(CRoom*, char const*, CLayer**); //0x1343000
      GetFirstElementOfType(CLayer*, int); //0x13430e0
      GetLayerDepth(CRoom*, int); //0x13415e0
      GetLayerFromID(CRoom*, int); //0x1340d20
      GetLayerFromName(CRoom*, char const*); //0x13416e0
      GetLayerIDForInstance(CRoom*, int); //0x13424f0
      GetLayerWithDepth(CRoom*, int, bool); //0x1341690
      GetNewBackgroundElement(); //0x1340700
      GetNewInstanceElement(); //0x1343130
      GetNewOldTilemapElement(); //0x1343140
      GetNewParticleElement(); //0x1343150
      GetNewSequenceElement(); //0x1343170
      GetNewSpriteElement(); //0x13408e0
      GetNewTextElement(); //0x1343180
      GetNewTileElement(); //0x1343160
      GetNewTilemapElement(); //0x13408d0
      GetNthLayerInRoom(CRoom*, int); //0x1341740
      GetNumLayersInRoom(CRoom*); //0x1341730
      GetTargetRoomObj(); //0x13427f0
      GetTilesFromPool(int); //0x133fb90
      Init(); //0x1339d70
      InitLayerFunctions(); //0x1359180
      InsertLayerIntoActiveList(CRoom*, CLayer*); //0x133c3e0
      MoveElement(CRoom*, CLayerElementBase*, CLayer*); //0x1342f30
      OnRoomStart(); //0x1339d60
      RemoveBackgroundElement(CLayer*, CLayerBackgroundElement*); //0x133ef60
      RemoveDisconnectedInstances(CRoom*, CLayer*); //0x133d320
      RemoveElement(CRoom*, CLayer*, CLayerElementBase*, bool); //0x133c7e0
      RemoveElement(CRoom*, int, bool, bool); //0x1341b70
      RemoveInstance(CRoom*, CInstance*); //0x1341c90
      RemoveInstanceElement(CLayer*, CLayerInstanceElement*, bool); //0x133f020
      RemoveInstanceFromLayer(CRoom*, CLayer*, CInstance*); //0x1341d70
      RemoveLayer(CRoom*, int, bool); //0x1340a60
      RemoveOldTilemapElement(CLayer*, CLayerOldTilemapElement*); //0x133f100
      RemoveParticleElement(CLayer*, CLayerParticleElement*); //0x133f320
      RemoveSequenceElement(CRoom*, CLayer*, CLayerSequenceElement*); //0x133f490
      RemoveSpriteElement(CLayer*, CLayerSpriteElement*); //0x133f170
      RemoveStorageInstanceFromLayer(CRoom*, CLayer*, int); //0x13420a0
      RemoveTextElement(CRoom*, CLayer*, CLayerTextElement*); //0x133f540
      RemoveTileElement(CLayer*, CLayerTileElement*); //0x133f3e0
      RemoveTilemapElement(CLayer*, CLayerTilemapElement*); //0x133f240
      RenameLayer(CLayer*, char*); //0x13409e0
      SetForcedDepth(float); //0x1343190
      SetLayerIndexWatermark(int); //0x133a920
      SortDeactivatedInstances(CLayer*); //0x133d380
      UpdateInstanceActivation(CRoom*, CInstance*); //0x1341950
};

class CLayerTilemapElement {
      Resize(int, int); //0x134d060
};

class CListener {
      CListener(); //0x1481f30
      GetGain(); //0x1481fa0
      Reset(); //0x1481f60
      SetGain(float); //0x1481f90
      SetOrientation(float, float, float, float, float, float); //0x1481ff0
      SetPosition(float, float, float); //0x1481fb0
      SetVelocity(float, float, float); //0x1481fd0
      Update(); //0x1482020
};

class CMessageEventKey {
      CMessageEventKey(); //0x13c2650
      SetupObject(); //0x13d0610
      ~CMessageEventKey(); //0x13d0590
};

class CMomentEventKey {
      CMomentEventKey(); //0x13c2720
      ~CMomentEventKey(); //0x13d0690
};

class CNineSliceCacheData {
      AddVert(float, float, float, float); //0x13f55f0
      CNineSliceCacheData(); //0x13f5580
      Reset(float, float, int, int); //0x13f55d0
      ~CNineSliceCacheData(); //0x13f55a0
};

class CNineSliceData {
      CNineSliceData(); //0x13f5ce0
      Draw(float, float, float, float, float, unsigned int, float, int, CSprite*, bool); //0x13e9f40
      DrawComplex(float, float, float, float, float, unsigned int, float, int, CSprite*, bool); //0x13f5f20
      DrawFromCache(float, float, float, unsigned int, float, CSprite*, bool); //0x13f70d0
      Free(bool); //0x13f5ee0
      GenerateCacheData(float, float, int, CSprite*); //0x13f5ff0
      ThreadFree(bool, GCContext*); //0x13f5f00
      ~CNineSliceData(); //0x13f5e30
      ~CNineSliceData(); //0x13f5e80
};

class CNoise {
      CNoise(); //0x148f1d0
      ConfigureSource(AudioPlaybackProperties&); //0x148f3a0
      GetLoopEnd(); //0x148f8b0
      GetLoopLength(); //0x148f980
      GetLoopStart(); //0x148f780
      GetLoopState(); //0x148f710
      GetTrueLoopEnd(); //0x148f870
      LoadProps(AudioPlaybackProperties&); //0x148f2e0
      SetLoopEnd(double); //0x148f8e0
      SetLoopStart(double); //0x148f7b0
      SetLoopState(bool); //0x148f730
      ~CNoise(); //0x148f230
};

class CObjectGM {
      AddEventForChildrenRecursively(CEvent*, CObjectGM*, int); //0x1366b90
      AddInstance(CInstance*); //0x1367a60
      CObjectGM(int); //0x1366160
      Clear(); //0x1366300
      ClearInstanceInfo(); //0x13666e0
      ClearParentEvents(); //0x1367260
      CopyParentEvents(); //0x1366760
      ExpandCollisionEvents(); //0x1366df0
      GetEventDirect(int, int); //0x13677b0
      GetEventRecursive(int, int); //0x1367870
      HasEventRecursive(int, int); //0x1367920
      IsDecendentOf(int); //0x13679d0
      LoadFromChunk(YYObject*, unsigned char*); //0x1367380
      RemoveInstance(CInstance*); //0x1367b30
      SetInCollisionRecursive(); //0x1366d60
      SetName(char*); //0x1366640
      SetNameRef(char*); //0x13666b0
      ~CObjectGM(); //0x1366510
};

class COggAudio {
      COggAudio(); //0x148f9d0
      CalcSoundInfo(cAudio_Sound*); //0x1490c50
      Create_SyncThread(bool); //0x148fad0
      DebugSyncGroup(int); //0x1490810
      DecompressOgg(cAudio_Sound*); //0x14910a0
      Delete_SyncThread(int); //0x148fc90
      GetEventualState(int); //0x1490310
      GetOggChannel(int, int); //0x14904b0
      GetSyncGroupTrackPos(int); //0x1490680
      GetThreadForChannel(int, int&); //0x148fe50
      Init(int, int); //0x148f9e0
      IsSyncGroupPaused(int); //0x1490640
      IsSyncGroupPlaying(int); //0x1490600
      PauseSyncGroup(int); //0x14905a0
      Pause_Sound(int); //0x148ff70
      Play_Sound(cAudio_Sound*, CNoise*, int); //0x148fd10
      Quit(); //0x1490130
      ResumeSyncGroup(int); //0x14905d0
      Resume_Sound(int, CNoise*); //0x1490040
      Seek_Sound(int, float); //0x148ff00
      SetLoopEnd(int, double); //0x1490440
      SetLoopStart(int, double); //0x14903d0
      SetLoopState(int, bool); //0x1490370
      StartSyncGroup(int); //0x1490540
      StopSyncGroup(int); //0x1490570
      Stop_Sound(int); //0x148fea0
      Suspend(); //0x1490290
      SyncGroupDebugGetInfo(YYAL_SyncGroupDebugInfo*); //0x1490930
      SyncGroupDebugGetNumChannels(); //0x1490820
      SyncGroupGetNumChannels(int); //0x14908b0
      SyncGroupGetSampleRate(int); //0x1490850
      Unsuspend(); //0x1490300
      ~COggAudio(); //0x14822d0
};

class COggAudio::Tick(std::__ndk1::vector<CNoise*, std::__ndk1 {
      allocator<CNoise*> >*); //0x1490ca0
};

class COggSyncThread {
      COggSyncThread(); //0x1496bc0
      CleanUp(); //0x1497d60
      Create(int, int, int, bool); //0x1496c80
      GetCurrentState(); //0x14989c0
      GetEventualState(); //0x1498270
      GetLongestChannelLength(); //0x14985a0
      GetNextRequest(); //0x1498a40
      IsSomeChannelStreaming(); //0x1498b40
      LogError(char const*, ...); //0x1497e50
      MixData(void*, int, int, int, float, float); //0x1498010
      PauseSyncGroup(); //0x1498460
      Play_Sound(int&, cAudio_Sound*); //0x1497ad0
      PopRequest(); //0x1498aa0
      PushRequest(OggRequest); //0x1498300
      Quit(); //0x1497bc0
      ResetSyncPos(); //0x1498940
      ResumeSyncGroup(); //0x1498500
      SetCurrentState(OggState); //0x1498a00
      ShowError(); //0x1497d00
      StartSyncGroup(); //0x14981c0
      StartThread(); //0x1496f80
      StopSyncGroup(); //0x14983c0
      Suspend(); //0x1497e20
      Tick(); //0x1497fa0
      UpdateSyncPos(); //0x14986e0
      WaitForThreadExit(); //0x1497ac0
};

class COggThread {
      COggThread(); //0x1495090
      CleanUp(); //0x14954b0
      Create(int, int, int); //0x1495130
      GetEventualState(int); //0x1495a30
      GetNextRequest(int); //0x1496a60
      LogError(char const*, ...); //0x1495f20
      PauseResume_Sound(int, bool); //0x1495930
      Play_Sound(int, cAudio_Sound*, CNoise*); //0x1495690
      PopRequest(int); //0x1496ae0
      PushRequest(int, unsigned char); //0x1495830
      Quit(); //0x1495e30
      Seek_Sound(int, float); //0x1495bb0
      SetLoopEnd(int, double); //0x1495dc0
      SetLoopStart(int, double); //0x1495d50
      SetLoopState(int, bool); //0x1495ce0
      ShowError(); //0x1496070
      StartThread(); //0x14953e0
      Stop_Sound(int); //0x1495ae0
      Suspend(); //0x1495ef0
      Tick(); //0x14960d0
      WaitForThreadExit(); //0x1495680
};

class CParticleSystem {
      CreateFromWAD(YYParticleSystem*); //0x1362790
      Find(char const*); //0x12ed9b0
      MakeInstance(int, bool, CLayerParticleElement*); //0x1365700
};

class CParticleSystem::List(std::__ndk1::vector<int, std::__ndk1 {
      allocator<int> >&); //0x12ede30
};

class CParticleTrackKey {
      CParticleTrackKey(); //0x13c0430
      SetupObject(); //0x13d00f0
      ~CParticleTrackKey(); //0x13d0070
};

class CPath {
      AddInternalPoint(float, float, float); //0x142acb0
      AddPoint(float, float, float); //0x142b800
      Append(CPath*); //0x142c8b0
      Assign(CPath*); //0x142b460
      CPath(); //0x142b430
      Center(float&, float&); //0x142be20
      ChangePoint(int, float, float, float); //0x142b9a0
      Clear(); //0x142b5b0
      ComputeCurved(); //0x142aee0
      ComputeInternal(); //0x142aa40
      ComputeLength(); //0x142ac30
      ComputeLinear(); //0x142ad40
      DeletePoint(int); //0x142ba70
      Draw(float, float, bool); //0x142c9f0
      Flip(); //0x142c300
      Free(); //0x142b6a0
      GetClosed(); //0x142cbd0
      GetCount(); //0x142cbb0
      GetKind(); //0x142cbc0
      GetPathLength(); //0x142cba0
      GetPoint(int); //0x142a960
      GetPosition(float, float&, float&, float&); //0x142bb60
      GetPrecision(); //0x142cbe0
      HandlePiece(int, float, float, float, float, float, float, float, float, float); //0x142b1d0
      InsertPoint(int, float, float, float); //0x142b820
      LoadFromChunk(YYPath*, unsigned char*); //0x142b6c0
      Mirror(); //0x142c060
      Reverse(); //0x142bed0
      Rotate(float); //0x142c4c0
      Scale(float, float); //0x142c6d0
      SetClosed(bool); //0x142aae0
      SetKind(int); //0x142a990
      SetPrecision(int); //0x142ab80
      Shift(float, float); //0x142c220
      Speed(float); //0x142bdd0
      XPosition(float); //0x142bd30
      YPosition(float); //0x142bd80
      ~CPath(); //0x142b690
};

class CPhysicsDebugRender {
      DrawCircle(b2Vec2 const&, float, b2Color const&); //0x13744a0
      DrawParticles(b2Vec2 const*, float, b2ParticleColor const*, int); //0x1374820
      DrawPolygon(b2Vec2 const*, int, b2Color const&); //0x13742a0
      DrawSegment(b2Vec2 const&, b2Vec2 const&, b2Color const&); //0x1374630
      DrawSolidCircle(b2Vec2 const&, float, b2Vec2 const&, b2Color const&); //0x1374570
      DrawSolidPolygon(b2Vec2 const*, int, b2Color const&); //0x13743a0
      DrawTransform(b2Transform const&); //0x13746e0
      TranslateColour(b2Color const&); //0x1374260
      ~CPhysicsDebugRender(); //0x13748e0
};

class CPhysicsFixture {
      AddShapePoint(float, float); //0x136d7c0
      AllocVertices(int); //0x136d3d0
      CPhysicsFixture(int); //0x136d2c0
      CheckPolygonIntegrity(); //0x136d970
      DeleteShape(); //0x136d390
      Finalise(CInstance*); //0x136da40
      SetBoxShape(float, float); //0x136d480
      SetChainShape(bool); //0x136d700
      SetCircleShape(float); //0x136d400
      SetEdgeShape(float, float, float, float); //0x136d530
      SetPolygonShape(); //0x136d650
      ~CPhysicsFixture(); //0x136d330
};

class CPhysicsFixtureFactory {
      CreateFixture(); //0x136d010
      DestroyFixture(unsigned int); //0x136d140
      FindFixture(unsigned int); //0x136d270
};

class CPhysicsJoint {
      EnableMotor(bool); //0x136e120
      GetValue(int); //0x136e230
      SetValue(int, float); //0x136e5d0
};

class CPhysicsJointFactory {
      CreateJoint(CPhysicsWorld*, b2JointDef const&); //0x136de20
      DestroyJoint(CPhysicsWorld*, unsigned int); //0x136def0
      FindJoint(b2Joint*); //0x136e020
      FindJoint(unsigned int); //0x136dfd0
};

class CPhysicsObject {
      ApplyAngularImpulse(float); //0x136ef50
      ApplyForce(float, float, float, float); //0x136ed30
      ApplyImpulse(float, float, float, float); //0x136ecb0
      ApplyLocalForce(float, float, float, float); //0x136ed90
      ApplyLocalImpulse(float, float, float, float); //0x136ee50
      ApplyTorque(float); //0x136ef20
      DebugRender(float); //0x136ef90
      DebugRenderJoints(float); //0x136f190
      DebugRenderShapes(float); //0x136efd0
      GetDensity(int); //0x136f5e0
      GetFixtureIndex(b2Fixture*); //0x136f3d0
      GetFriction(int); //0x136f5a0
      GetRestitution(int); //0x136f620
      Raycast(double, double, double, double, double, double*, double*, double*); //0x136f730
      RemoveFixture(int); //0x136f4a0
      SetAngularVelocity(float); //0x136ec40
      SetDensity(int, float); //0x136f6a0
      SetFriction(int, float); //0x136f660
      SetLinearVelocity(float, float); //0x136eba0
      SetMass(float, float, float, float); //0x136eaa0
      SetPosition(float, float); //0x136eaf0
      SetRestitution(int, float); //0x136f6f0
      SetRotation(float); //0x136eb60
      ~CPhysicsObject(); //0x136e8f0
};

class CPhysicsWorld {
      ApplyVisualOffset(float, b2Vec2 const&, b2Vec2&); //0x1370630
      AssignCollisionCategory(int); //0x13707c0
      BeginParticleGroup(unsigned int, unsigned int, float, float, float, float, float, float, unsigned int, float, float, int); //0x1372680
      BuildCollisionBits(int); //0x1370b50
      CPhysicsWorld(CPhysicsWorld*); //0x136fcd0
      CPhysicsWorld(float, int); //0x136f990
      CreateBody(CPhysicsFixture*, CInstance*, float, float, bool); //0x1370ef0
      CreateDistanceJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, bool); //0x1371960
      CreateFrictionJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, bool); //0x13722f0
      CreateGearJoint(CPhysicsObject*, CPhysicsObject*, CPhysicsJoint*, CPhysicsJoint*, float); //0x1372400
      CreateParticle(unsigned int, float, float, float, float, unsigned int, float, int); //0x13725e0
      CreatePrismaticJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, float, float, bool, float, float, bool, bool); //0x1371d10
      CreatePulleyJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, float, float, float, float, float, bool); //0x1371ea0
      CreateRevoluteJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, bool, float, float, bool, bool); //0x1371bb0
      CreateRopeJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, float, bool); //0x1371a70
      CreateWeldJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, float, bool); //0x13721c0
      CreateWheelJoint(CPhysicsObject*, CPhysicsObject*, float, float, float, float, bool, float, float, float, float, bool); //0x1372060
      DebugRender(unsigned int); //0x1370730
      DeleteJoint(int); //0x13700d0
      DeleteParticle(int); //0x1372670
      DeleteParticleBoxRegion(float, float, float, float); //0x1372bd0
      DeleteParticleCircleRegion(float, float, float); //0x1372b40
      DeleteParticleGroup(int); //0x136ffb0
      DeleteParticlePolyRegion(float*, int); //0x1372cc0
      DestroyBodies(); //0x136fff0
      DestroyBody(CPhysicsObject*); //0x1371650
      DestroyJoints(); //0x1370080
      DispatchContactEvents(); //0x1370560
      DrawParticles(unsigned int, int, CSprite*, int); //0x1373650
      DrawParticlesExt(unsigned int, int, CSprite*, int, float, float, float, unsigned int, float); //0x1373b90
      EndParticleGroup(); //0x1372980
      FindBaseObjectForCollisions(int, int); //0x1370a10
      GetCollisionCategory(int); //0x1370770
      GetCurrentContactNormal(CInstance*, int, float&, float&); //0x13717c0
      GetCurrentContactPointCount(CInstance*); //0x1371840
      GetCurrentContactPosition(CInstance*, int, float&, float&); //0x1371710
      GetFreeParticleGroupSlot(); //0x13728e0
      GetParticleData(IBuffer*, unsigned int); //0x1373340
      GetParticleData(IBuffer*, unsigned int, int, int); //0x1372fe0
      GetParticleDataGroup(int, IBuffer*, unsigned int); //0x13733b0
      GetParticleDataParticle(int, IBuffer*, unsigned int); //0x1373360
      GetParticleGroup(int); //0x1372ac0
      GetParticleGroupAngle(int); //0x1373610
      GetParticleGroupCentreX(int); //0x1373470
      GetParticleGroupCentreY(int); //0x13734a0
      GetParticleGroupCount(int); //0x1373380
      GetParticleGroupFlags(int); //0x1372fc0
      GetParticleGroupInertia(int); //0x1373440
      GetParticleGroupMass(int); //0x1373410
      GetParticleGroupOmega(int); //0x1373550
      GetParticleGroupVelocityX(int); //0x13734e0
      GetParticleGroupVelocityY(int); //0x1373510
      GetParticleGroupX(int); //0x1373590
      GetParticleGroupY(int); //0x13735d0
      GetValidCollisionData(CInstance*); //0x13716d0
      Init(); //0x136fac0
      InvalidateFixture(b2Fixture*); //0x13706d0
      JoinParticleGroups(int, int); //0x1372ae0
      ParticleGroupAddPoint(float, float); //0x1372890
      ParticleGroupBox(float, float); //0x1372760
      ParticleGroupCircle(float); //0x1372700
      ParticleGroupPoly(); //0x1372830
      PreProcess(); //0x13701c0
      RegisterContactResult(b2Contact*); //0x13706c0
      SetDebugMode(); //0x136f8d0
      SetGravity(float, float); //0x1371660
      SetParticleCategoryFlags(int, unsigned int); //0x1372f10
      SetParticleFlags(int, unsigned int); //0x1372ee0
      SetParticleGroupFlags(int, unsigned int); //0x1372fa0
      SetTraceMsg(char*); //0x136f960
      TestOverlap(CInstance*, CInstance*, float, float, float); //0x13724e0
      TransferPhysicalPositions(); //0x1370400
      Update(int, bool); //0x1370240
      UpdateInstantiatedShapesCollisionBits(); //0x1371570
      UpdatePaths(); //0x13700e0
      ~CPhysicsWorld(); //0x136fe10
};

class CProfiler {
      AddNodeDirect(int, int, unsigned int); //0x1282c60
      BeginFrame(); //0x1282e50
      BeginStep(); //0x12829a0
      CProfiler(); //0x1282140
      Clean(); //0x12828e0
      DumpProfileData(); //0x1282370
      Enable(bool); //0x12830e0
      EndFrame(); //0x1282ed0
      EndStep(); //0x1282b30
      FindOrCreateNode(int, int); //0x1282cc0
      Init(char const*, int); //0x1282150
      Pause(bool); //0x12830c0
      Pop(); //0x1282bd0
      ProfileDump(); //0x1282350
      Push(int, int); //0x1282a70
      ResetData(); //0x12831a0
      WriteProfileData(Buffer_Standard*); //0x1283290
};

class CProfiler::ScopeBlock {
      ~ScopeBlock(); //0x120fe40
};

class CRealTrackKey {
      CRealTrackKey(); //0x13c1dd0
      Mark4GC(unsigned int*, int); //0x13c1ec0
      SetupObject(); //0x13cfcc0
      ~CRealTrackKey(); //0x13cfc40
};

class CRoom {
      AddEffectLayerID(int); //0x132fc70
      AddInstance(CInstance*); //0x132ea20
      AddInstance(float, float, CLayer*, int); //0x132e800
      AddInstance(float, float, int); //0x132e440
      AddInstance(float, float, int, int); //0x132e600
      AddInstanceToStorage(float, float, int); //0x132e270
      AddSeqInstance(int); //0x132fbb0
      Assign(CRoom*, bool, bool); //0x132b620
      CRoom(); //0x132a5f0
      CleanPersistent(); //0x132f1c0
      Clear(); //0x132ac90
      ClearDeactiveInstances(); //0x132b480
      ClearEffectLayerIDs(); //0x132fd40
      ClearInstances(); //0x132b1b0
      ClearManagedInstances(); //0x132eb80
      ClearStorageInstances(); //0x132e400
      CreateWADStorage(); //0x132b0e0
      DeSerialise(IBuffer*, bool); //0x132dae0
      Debug(); //0x132c260
      DeleteInstance(CInstance*, bool, bool, bool); //0x132eea0
      LoadFromChunk(YYRoom*, unsigned char*); //0x132c300
      RemoveDeadInstance(CInstance*); //0x132c100
      RemoveEffectLayerID(int); //0x132fd00
      RemoveMarked(bool); //0x132f200
      RemovePersistentInstance(CInstance*, bool); //0x132ee70
      RemoveSeqInstance(int); //0x132fc30
      Serialise(IBuffer*); //0x132d500
      UpdateActive(); //0x132f4a0
      UpdateLayers(); //0x132f770
      ~CRoom(); //0x132fd50
};

class CRunnerContactListener {
      BeginContact(b2Contact*); //0x136cce0
      EndContact(b2Contact*); //0x136cd00
      PostSolve(b2Contact*, b2ContactImpulse const*); //0x136cd20
      PreSolve(b2Contact*, b2Manifold const*); //0x136cd10
      ~CRunnerContactListener(); //0x136cd30
};

class CScript {
      CScript(char const*); //0x1220720
      Clear(); //0x1220750
      Compile(); //0x12208f0
      Free(); //0x1220810
      GetCode(); //0x1220820
      LoadFromChunk(YYScript*, unsigned char*); //0x1220830
      ~CScript(); //0x1220790
      ~CScript(); //0x12207e0
};

class CScriptRef {
      CScriptRef(int, int); //0x12300a0
      Free(bool); //0x1230210
      ThreadFree(bool, GCContext*); //0x1230240
      ~CScriptRef(); //0x123bac0
};

class CSelfDestructingTimeSource {
      CSelfDestructingTimeSource(CTimeSource*, double, eTimeSourceUnits, RValue*, bool); //0x1277100
      HandleExpiry(); //0x1277150
      ~CSelfDestructingTimeSource(); //0x1277410
};

class CSeqStack {
      ~CSeqStack(); //0x13a7f50
};

class CSeqStackSnapshot {
      ~CSeqStackSnapshot(); //0x1335c30
};

class CSequence {
      AddEventToFunctionPair(CSequenceEvent const&); //0x13b31a0
      AddTrack(CSequenceBaseTrack*); //0x13ab320
      CSequence(); //0x13c5f30
      GetObjectIDs(int&); //0x13c6500
      GetObjectIDsFromTrack(CSequenceBaseTrack*, int**, int&); //0x13c6560
      Mark4GC(unsigned int*, int); //0x13c6480
      ~CSequence(); //0x13c62c0
      ~CSequence(); //0x13c6460
};

class CSequenceAudioEffectTrack {
      AreKeyframesDirty(int); //0x13cf8f0
      CSequenceAudioEffectTrack(); //0x13bcce0
      GetKeyframeChangeIndex(); //0x13cf910
      InstantiateEffect(); //0x13bbb00
      Mark4GC(unsigned int*, int); //0x13bdc80
      SetupObject(); //0x13bdfd0
      UpdateCachedPoints(int, float); //0x13bd420
      calculateAnimDistance(int, float, float, float, float*); //0x13bdcc0
      getCachedChannelVal(int, float, float, float*); //0x13bd030
      getKeyframeStore(); //0x13cf8e0
      getKeyframeStoreRef(); //0x13cf8d0
      getValue(int, float, float, void*); //0x13bd330
      ~CSequenceAudioEffectTrack(); //0x13bcf80
      ~CSequenceAudioEffectTrack(); //0x13bcfd0
};

class CSequenceAudioTrack {
      CSequenceAudioTrack(); //0x13b4ad0
      InstantiateBus(); //0x13b4ee0
      Mark4GC(unsigned int*, int); //0x13b4d60
      PushEffectStruct(AudioEffectStruct*); //0x13b4f10
      UpdateBusLayout(); //0x13b5050
      getKeyframeStore(); //0x13cf8c0
      getKeyframeStoreRef(); //0x13cf8b0
      ~CSequenceAudioTrack(); //0x13b4cb0
      ~CSequenceAudioTrack(); //0x13b4d00
};

class CSequenceBaseClass {
      CSequenceBaseClass(); //0x13b42d0
      Free(bool); //0x13b4400
      IsDirty(int); //0x12f5a60
      SignalChange(); //0x12f5aa0
      ThreadFree(bool, GCContext*); //0x13b4420
      UpdateDirtiness(); //0x12f5a50
      ~CSequenceBaseClass(); //0x13b4380
      ~CSequenceBaseClass(); //0x13cf930
};

class CSequenceBaseTrack {
      AddCurve(CAnimCurve*); //0x13a9580
      AddTrack(CSequenceBaseTrack*); //0x13a97c0
      AssignBuiltinTrackName(); //0x13a8bb0
      CSequenceBaseTrack(); //0x13b4440
      EvaluateTrack(float, float, TrackEval&, unsigned int); //0x13b9dc0
      Free(bool); //0x13b4830
      GetCurve(int); //0x13bbba0
      GetRemappedParameter(eBuiltinTrack, int&); //0x13bbb70
      Mark4GC(unsigned int*, int); //0x13b4da0
      PreFree(); //0x13b49a0
      SetupObject(); //0x13b47b0
      ThreadFree(bool, GCContext*); //0x13b4980
      enabled(); //0x13a8610
      getKeyframeCount(); //0x13b9d60
      getKeyframeStore(); //0x13b9da0
      getKeyframeStoreRef(); //0x13b9db0
      getKeyframes(); //0x13a8a00
      getLinkedTrack(); //0x13a86f0
      setEnabled(bool); //0x13a9b10
      setVisible(bool); //0x13a9890
      visible(); //0x13a84c0
      ~CSequenceBaseTrack(); //0x13b4790
      ~CSequenceBaseTrack(); //0x13cf1b0
};

class CSequenceBoolTrack {
      CSequenceBoolTrack(); //0x12f2990
      getKeyframeStore(); //0x12f5d90
      getKeyframeStoreRef(); //0x12f5d80
      ~CSequenceBoolTrack(); //0x12f5cf0
      ~CSequenceBoolTrack(); //0x12f5d30
};

class CSequenceClipMaskTrack {
      CSequenceClipMaskTrack(); //0x13b2010
      GetMaskTrack(); //0x13aa000
      GetSubjectTrack(); //0x13aa0c0
      ReplaceTrack(CSequenceBaseTrack*, int); //0x13bbce0
      SetMaskTrack(CSequenceBaseTrack*); //0x13aa170
      SetSubjectTrack(CSequenceBaseTrack*); //0x13aa200
      SetupObject(); //0x13bbc60
      ~CSequenceClipMaskTrack(); //0x13cf480
};

class CSequenceClipMask_MaskTrack {
      CSequenceClipMask_MaskTrack(); //0x13b2150
      ~CSequenceClipMask_MaskTrack(); //0x12f5f00
};

class CSequenceClipMask_SubjectTrack {
      CSequenceClipMask_SubjectTrack(); //0x13b2290
      ~CSequenceClipMask_SubjectTrack(); //0x12f5f20
};

class CSequenceColorTrack {
      AreKeyframesDirty(int); //0x13cf5b0
      CSequenceColorTrack(); //0x12f2880
      GetKeyframeChangeIndex(); //0x13cf5d0
      SetupObject(); //0x13be4c0
      UpdateCachedPoints(int, float); //0x13c5620
      getKeyframeStore(); //0x13cf5a0
      getKeyframeStoreRef(); //0x13cf590
      getValue(int, float, float, void*); //0x13c51a0
      ~CSequenceColorTrack(); //0x13cf500
      ~CSequenceColorTrack(); //0x13cf540
};

class CSequenceGraphicTrack {
      CSequenceGraphicTrack(); //0x12f2430
      getKeyframeStore(); //0x12f5ad0
      getKeyframeStoreRef(); //0x12f5ac0
      ~CSequenceGraphicTrack(); //0x12f59c0
      ~CSequenceGraphicTrack(); //0x12f5a00
};

class CSequenceGroupTrack {
      CSequenceGroupTrack(); //0x13b1ed0
      ~CSequenceGroupTrack(); //0x12f5f40
};

class CSequenceInstance {
      CSequenceInstance(); //0x13c6830
      CleanUpInstances(); //0x13c8320
      CleanUpParticles(); //0x13c94b0
      CleanupAudioEmitters(); //0x13c9340
      Mark4GC(unsigned int*, int); //0x13c9ad0
      Pause(); //0x13c6e10
      Play(); //0x13c9600
      PreFree(); //0x13cf8a0
      SetInstanceInSequenceStatus(bool); //0x13c6f80
      SetupAudioEmitters(CSequenceBaseTrack*); //0x13c8500
      SetupInstances(CSequenceBaseTrack*, int, int, int); //0x13c7180
      StopAllSounds(); //0x13c9760
      StopAllSoundsAndKeepEmitters(); //0x13c9970
      ~CSequenceInstance(); //0x13cf720
      ~CSequenceInstance(); //0x13cf880
};

class CSequenceInstanceTrack {
      CSequenceInstanceTrack(); //0x12f2500
      getKeyframeStore(); //0x12f5b80
      getKeyframeStoreRef(); //0x12f5b70
      ~CSequenceInstanceTrack(); //0x12f5ae0
      ~CSequenceInstanceTrack(); //0x12f5b20
};

class CSequenceManager {
      BuildRoomSequences(CRoom*, YYRoomSequences*); //0x13ca190
      CSequenceManager(); //0x13c9cc0
      Clean(); //0x13c9e90
      EvaluateLayerSequenceElement(CLayerSequenceElement*, bool); //0x13ce0c0
      FreeInstance(CSequenceInstance*); //0x13ca090
      FreeSequence(CSequence*); //0x13c9f60
      GetInstanceFromID(int); //0x13ca170
      GetNewInstance(); //0x13c9fc0
      GetNewSequence(); //0x13b37c0
      GetSequenceFromID(int); //0x13ab400
      GetSequenceFromName(char const*); //0x13b3590
      HandleAudioTrackUpdate(CLayerSequenceElement*, CSequence*, CSequenceInstance*, TrackEval&, yyMatrix&, CSequenceAudioTrack*, float, float, float); //0x13cb710
      HandleInstanceEvent(CSequenceInstance*, int, int); //0x13ce8c0
      HandleInstanceTrackUpdate(CLayerSequenceElement*, CSequence*, CSequenceInstance*, TrackEval&, yyMatrix&, CSequenceInstanceTrack*, float, float); //0x13cbfe0
      HandleParticleTrackUpdate(CLayerSequenceElement*, CSequence*, CSequenceInstance*, TrackEval&, yyMatrix&, CSequenceParticleTrack*, float, float); //0x13cca80
      HandleSequenceTrackUpdate(CLayerSequenceElement*, CSequence*, CSequenceInstance*, TrackEval&, TrackEvalNode**, YYObjectBase*, yyMatrix&, CSequenceBaseTrack*, CSequenceSequenceTrack*, float, float, float, bool, bool); //0x13cafc0
      HandleSpriteTrackUpdate(TrackEvalNode*, TrackEval&, CSequenceInstance*, CSequenceGraphicTrack*, float, float, float, float, float); //0x13cae20
      HandleTextTrackUpdate(TrackEval&, CSequenceTextTrack*, float, float); //0x13ccc90
      HandleUpdateTracks(CLayerSequenceElement*, CSequence*, CSequenceInstance*, TrackEvalNode**, YYObjectBase*, yyMatrix&, CSequenceBaseTrack*, CSequenceBaseTrack*, float, float, float, bool); //0x13ca410
      IsLiveSequence(CSequence*); //0x13ca130
      PerformInstanceEvents(CRoom*, int, int); //0x13cdaa0
      UpdateInstancesForRoom(CRoom*); //0x13ce760
      ~CSequenceManager(); //0x13c9e40
};

class CSequenceParameterTrack {
      AllocNewCachedPoint(int); //0x13bbf00
      CSequenceParameterTrack(); //0x13bcd70
      Mark4GC(unsigned int*, int); //0x13bbfc0
      evaluate(int, float, float, void*); //0x13bb840
      getCachedChannelVal(int, float, float, float*); //0x13c53f0
      ~CSequenceParameterTrack(); //0x13bbe00
      ~CSequenceParameterTrack(); //0x13bbef0
};

class CSequenceParticleTrack {
      CSequenceParticleTrack(); //0x12f25d0
      getKeyframeStore(); //0x12f5c30
      getKeyframeStoreRef(); //0x12f5c20
      ~CSequenceParticleTrack(); //0x12f5b90
      ~CSequenceParticleTrack(); //0x12f5bd0
};

class CSequenceRealTrack {
      AreKeyframesDirty(int); //0x13cf4c0
      CSequenceRealTrack(); //0x12f2770
      GetKeyframeChangeIndex(); //0x13cf4e0
      Mark4GC(unsigned int*, int); //0x13bcbd0
      SetupObject(); //0x13bcc60
      UpdateCachedPoints(int, float); //0x13bc150
      calculateAnimDistance(int, float, float, float, float*); //0x13bb8a0
      getKeyframeStore(); //0x13cf4b0
      getKeyframeStoreRef(); //0x13cf4a0
      getValue(int, float, float, void*); //0x13bc060
      ~CSequenceRealTrack(); //0x13bbfd0
      ~CSequenceRealTrack(); //0x13bc010
};

class CSequenceSequenceTrack {
      CSequenceSequenceTrack(); //0x12f2b30
      getKeyframeStore(); //0x12f5ef0
      getKeyframeStoreRef(); //0x12f5ee0
      ~CSequenceSequenceTrack(); //0x12f5e50
      ~CSequenceSequenceTrack(); //0x12f5e90
};

class CSequenceSpriteFramesTrack {
      CSequenceSpriteFramesTrack(); //0x12f2c00
      getKeyframeStore(); //0x12f6000
      getKeyframeStoreRef(); //0x12f5ff0
      getValue(float); //0x13be050
      ~CSequenceSpriteFramesTrack(); //0x12f5f60
      ~CSequenceSpriteFramesTrack(); //0x12f5fa0
};

class CSequenceStringTrack {
      CSequenceStringTrack(); //0x12f2a60
      getKeyframeStore(); //0x12f5e40
      getKeyframeStoreRef(); //0x12f5e30
      ~CSequenceStringTrack(); //0x12f5da0
      ~CSequenceStringTrack(); //0x12f5de0
};

class CSequenceTextTrack {
      CSequenceTextTrack(); //0x12f26a0
      getKeyframeStore(); //0x12f5ce0
      getKeyframeStoreRef(); //0x12f5cd0
      ~CSequenceTextTrack(); //0x12f5c40
      ~CSequenceTextTrack(); //0x12f5c80
};

class CSequenceTrackKey {
      CSequenceTrackKey(); //0x13c0670
      Mark4GC(unsigned int*, int); //0x13c0730
      SetupObject(); //0x13cfa20
      ~CSequenceTrackKey(); //0x13cf9a0
};

class CSingleFingerGesture {
      CommonUpdate(long long); //0x1212fb0
      GenerateMap(int, int, int, int, long long); //0x1213160
      IsUsingTouch(int); //0x1217650
      IsUsingTouchUID(int); //0x1217660
      NumUsedTouches(); //0x1217670
      ~CSingleFingerGesture(); //0x1217640
};

class CSkeletonInstance {
      CSkeletonInstance(CSkeletonInstance*); //0x1412cf0
      CSkeletonInstance(CSkeletonSprite*); //0x1412c20
      ClearAnimation(int, bool, float); //0x1413690
      CloneAttachment(spAttachment*, spAtlas*); //0x14130b0
      ComputeBoundingBox(tagYYRECT*, float, float, float, float, float, float); //0x1414560
      CreateAttachment(char const*, CSprite*, int, float, float, float, float, float, unsigned int, float, bool); //0x1413f10
      CreateAttachment(char const*, char const*, short, int, int, float, float, float, float, float, float, float, float, float, spColor, bool); //0x1413a80
      CreateAttachment(char const*, char const*, short, int, int, float, float, float, float, float, float, float, float, float, unsigned int, float, bool); //0x1413940
      CreateSkinFromSkins(char const*, char const**, int); //0x14162a0
      DestroyAttachment(char const*); //0x1414170
      EllipseCollision(float, float, float, float, float, float, tagYYRECT*); //0x1414dc0
      EventCallback(int, spEventType, spEvent*, int); //0x140dfa0
      FindAttachment(char const*, char const*, bool); //0x1415f90
      Finished(int); //0x1413490
      FrameCount(CSprite*, int); //0x1413270
      FrameDuration(CSprite*); //0x1413310
      GetAnimation(int); //0x14116b0
      GetAnimationEventFrames(char*, char*, int&); //0x14160f0
      GetAttachment(char*); //0x1415f60
      GetBoneData(char const*, int); //0x1415300
      GetBoneState(CInstance*, char const*, int); //0x14156f0
      GetBoundingBox(float&, float&, float&, float&); //0x1414640
      GetBoundingBoxAttachment(int, char const**, int*, float*); //0x1414760
      GetDuration(char*); //0x1416040
      GetFrames(char*); //0x1416080
      GetNumBoundingBoxAttachments(); //0x1414700
      GetScreenOrigin(); //0x1410080
      GetSkin(); //0x14116f0
      GetSlotAlpha(char const*); //0x14137f0
      GetSlotColour(char const*); //0x1413750
      GetSlotData(CDS_List*); //0x1413810
      ImageIndex(int); //0x1413350
      LineCollision(float, float, float, float, float, float, float, float, float, float); //0x1414c90
      Looping(int); //0x1413460
      PointCollision(float, float, float, float, float, float, float, float); //0x1414c50
      RectangleCollision(float, float, float, float, float, float, float, float, float, float); //0x1414ce0
      ReplaceSlotAttachments(spAttachment*, spAttachment*); //0x1413e30
      RotateSkeletonBounds(spSkeletonBounds*, float, float, float); //0x1414360
      SelectAnimation(char const*, bool, CInstance*); //0x14111b0
      SelectAnimationExt(char const*, int, bool, CInstance*); //0x14134d0
      SelectSkin(CSkeletonSkin*); //0x1413020
      SelectSkin(char const*); //0x14111c0
      SetAnimationMix(char const*, char const*, float); //0x1413180
      SetAnimationTransform(float, float, float, float, float, float, CInstance*, CSprite*); //0x140fbd0
      SetAnimationTransformInstance(CInstance*); //0x14144d0
      SetAnimationTransformTime(float, float, float, float, float, float); //0x14118e0
      SetAttachment(char const*, char const*, bool); //0x1411b90
      SetBoneData(char const*, int); //0x1415490
      SetBoneState(CInstance*, char const*, int); //0x1415a30
      SetImageIndex(int, float); //0x14133d0
      SetOnlySkinSlots(spSkeleton const*); //0x14135f0
      SetSlotAlpha(char const*, float); //0x1413710
      SetSlotColour(char const*, unsigned int); //0x14136b0
      SetupSkeletonData(spSkeletonData*); //0x1412c60
      SkeletonCollision(float, float, float, float, float, float, CSkeletonInstance*, float, float, float, float, float, float); //0x1414850
      SpriteCollision(float, float, float, float, float, float, CSprite*, tagYYRECT*, int, float, float, float, float, float); //0x14149d0
      StoreAttachment(spAttachment*, spAtlas*); //0x1413e90
      UpdateWorldTransformAndBounds(); //0x1414310
      ~CSkeletonInstance(); //0x1413190
};

class CSkeletonSkin {
      AddGlobalRef(); //0x1412ff0
      CSkeletonSkin(spSkin*, bool); //0x1416370
      Free(bool); //0x1416480
      PreFree(); //0x1416450
      RemoveGlobalRef(); //0x1413260
      ThreadFree(bool, GCContext*); //0x14164a0
      ~CSkeletonSkin(); //0x1416420
      ~CSkeletonSkin(); //0x1416430
};

class CSkeletonSprite {
      CSkeletonSprite(char*, int); //0x140ea70
      CSkeletonSprite(char*, unsigned int, unsigned int, unsigned int, CSprite*); //0x140e7e0
      CSkeletonSprite(char*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int); //0x140e530
      Draw(char const*, char const*, float, float, float, float, float, float, unsigned int, float, CInstance*, CSprite*); //0x140f9b0
      Draw(float, float, float, float, float, float, unsigned int, float, CSprite*); //0x140f850
      DrawCollision(char const*, float, float, float, float, float, float, unsigned int, CSprite*); //0x1411d40
      DrawCollisionBounds(spSkeletonBounds*); //0x1410a50
      DrawCollisionLine(float, float, float, float); //0x1411e50
      DrawFrame(CSkeletonInstance*, char const*, char const*, float, float, float, float, float, float, unsigned int, float); //0x1411a10
      DrawMesh(spSlot*, unsigned int); //0x14121c0
      DrawRegion(spSlot*, unsigned int); //0x1411ff0
      DrawSkeleton(spSkeleton*, unsigned int, float, float, float, float); //0x1410090
      DrawTime(char const*, char const*, float, float, float, float, float, float, unsigned int, float); //0x1411710
      FixupTexturesFromAsyncRequest(int); //0x140f630
      GetAnimationList(CDS_List*); //0x14123d0
      GetAtlasTextureID(int); //0x1412330
      GetAttachmentsForSlot(char const*); //0x1412800
      GetBoneList(CDS_List*); //0x1412550
      GetNumAtlasTextures(); //0x1412300
      GetPremultiplied(); //0x14123c0
      GetSkinList(CDS_List*); //0x1412490
      GetSlotData(CDS_List*); //0x14126d0
      GetSlotList(CDS_List*); //0x1412610
      GetSlotsAtWorldPos(CInstance*, char const*, char const*, float, float, float, float, float, float, float, float, CDS_List*); //0x1410ef0
      HasData(); //0x140f1f0
      LoadFromFile(char*, char*); //0x140ef40
      LoadFromFileAsync(char*, char*, int); //0x140ecd0
      PointInBoundingBox(spSlot*, float, float); //0x1411560
      PointInMesh(spSlot*, float, float); //0x14113c0
      PointInRegion(spSlot*, float, float); //0x1411260
      SetPremultiplied(bool); //0x14123b0
      SimpleDecode(unsigned char*, int); //0x140e790
      ~CSkeletonSprite(); //0x140f190
};

class CSprite {
      AddFromBitmap(IBitmap*, bool, bool, bool); //0x13e8760
      AddFromSprite(CSprite*); //0x13e8900
      Assign(CSprite*); //0x13ee5d0
      BuildSWFData(char*, int, int); //0x13ef510
      CSprite(); //0x13ee1a0
      Clear(); //0x13e7120
      ClearSWFData(); //0x13ee2a0
      ColMaskSet(int, int, unsigned char*); //0x13e2600
      Collision(int, float, float, float, float, float, float, float); //0x13f3fa0
      CollisionTilemapEllipse(ColVertPos*, float, float, float, float); //0x13e5d60
      CollisionTilemapLine(ColVertPos*, float, float, float, float); //0x13e6370
      ComputeBoundingBox(); //0x13dfc00
      ComputeCullRadius(); //0x13e03e0
      ComputeMask(bool, int, tagYYRECT const&, int, unsigned int); //0x13e0c30
      CreateFromBitmap(IBitmap*, bool, bool, bool, bool, int, int, bool); //0x13e85d0
      CreateMask(); //0x13df7c0
      Draw(CInstance*); //0x13ec3e0
      Draw(float, float, float, float, float, float, unsigned int, float); //0x13e9070
      DrawDictionaryItem(SWF_DictionaryItem*, yyMatrix, float, bool, bool, yyMatrix*, unsigned int*, unsigned int*, int*, int*, int*, Texture*, float, float); //0x13f1640
      DrawGeneral(float, float, float, float, float, float, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, float); //0x13ed780
      DrawPart(float, float, float, float, float, float, float, float, float, unsigned int, float); //0x13ed640
      DrawPos(float, float, float, float, float, float, float, float, float, unsigned int, float); //0x13ec990
      DrawSWF(int, float, float, float, float, float, float, float, unsigned int, float); //0x13e9600
      DrawSWFObject(SWF_TimelineObject*, yyMatrix*, yyMatrix*, unsigned int*, unsigned int*, unsigned int*, unsigned int*, bool); //0x13f3b10
      DrawSWFTiled(int, float, float, float, float, bool, bool, float, float, float, float, unsigned int, float); //0x13edde0
      DrawShape(int, int, int, float, float, float, float, float, unsigned int, unsigned int, float); //0x13f4540
      DrawShapeString(int, char const*, float, float, float, float, float, unsigned int, unsigned int, float); //0x13f5560
      DrawSimple(CInstance*); //0x13ecf40
      DrawSimple(float, float, float); //0x13eca60
      DrawStretched(float, float, float, float, float, unsigned int, float); //0x13ed490
      DrawTiled(float, float, float, float, float, bool, bool, float, float, float, float, unsigned int, float); //0x13edc20
      Free(); //0x13ee290
      FreeBitmapData(); //0x13e0520
      FreeMask(); //0x13e0590
      FreeTexture(); //0x13e8fa0
      GenerateBitmapData(); //0x13e0470
      GenerateBitmapDataForFrame(int); //0x13e13a0
      GetBitmap32(int); //0x13eeb70
      GetBoundingBoxImg(int); //0x13eeba0
      GetMaskData(int); //0x13e2540
      GetScaledBoundingBox(float, float); //0x13e6c40
      GetSkeletonBounds(spSkeleton*, tagYYRECT*); //0x13e00e0
      GetSkeletonSlotsAtPoint(CInstance*, float, float, CDS_List*); //0x13e6ae0
      GetSkeletonSpriteBounds(spSkeleton*, tagYYRECT*); //0x13e0320
      GetSkeletonSpriteSize(spSkeleton*, int&, int&); //0x13dfff0
      GetTexture(int); //0x13e9000
      InitLocalTPE(); //0x13e7f50
      InitTexture(bool); //0x13e7de0
      LoadFromASTCData(void*, int, int, bool, bool, bool, int, int, bool); //0x13e7b80
      LoadFromAnimation(IBitmapLoader*, bool, bool); //0x13e6fc0
      LoadFromChunk(YYSprite*, unsigned char*); //0x13eeca0
      LoadFromData(void*, int, int, int, bool, bool, bool, int, int, bool); //0x13e7d10
      LoadFromFile(char const*, int, bool, bool, bool, bool, int, int, bool); //0x13e75a0
      LoadFromFileAsync(char const*, int, int, int, bool, bool); //0x13e80c0
      LoadFromGIFData(void*, int, int, bool, bool, bool, int, int, bool); //0x13e79f0
      LoadFromJPEGData(void*, int, int, bool, bool, bool, int, int, bool); //0x13e7920
      LoadFromPNGData(void*, int, int, bool, bool, bool, int, int, bool); //0x13e7ac0
      LoadFromYYSFile(char const*, int, int); //0x13f1580
      LoadStrip(IBitmapLoader*, bool, bool, int, bool); //0x13e73d0
      OrigPreciseCollision(int, tagYYRECT*, float, float, float, float, float, CSprite*, int, tagYYRECT*, float, float, float, float, float); //0x13e1810
      OrigPreciseCollisionLine(int, tagYYRECT*, int, int, float, float, float, int, int, int, int); //0x13e54a0
      OrigPreciseCollisionPoint(int, tagYYRECT*, int, int, float, float, float, int, int); //0x13e3ea0
      OrigPreciseCollisionRectangle(int, tagYYRECT*, int, int, float, float, float, tagYYRECT*); //0x13e4670
      PreciseCollision(int, tagYYRECT*, float, float, float, float, float, CSprite*, int, tagYYRECT*, float, float, float, float, float); //0x13e2690
      PreciseCollisionEllipse(int, tagYYRECT*, int, int, float, float, float, tagYYRECT*); //0x13e4ac0
      PreciseCollisionLine(int, tagYYRECT*, float, float, float, float, float, float, float, float, float); //0x13e4fd0
      PreciseCollisionPoint(int, tagYYRECT*, int, int, float, float, float, float, float); //0x13e3c40
      PreciseCollisionRectangle(int, tagYYRECT*, float, float, float, float, float, tagYYRECT*); //0x13e4120
      PreciseCollisionTilemap(int, tagYYRECT*, float, float, float, float, float, ColVertPos*, ColVertTex*, unsigned char*, CSprite*); //0x13e3270
      PreciseCollisionTilemapEllipse(unsigned char*, ColVertPos*, ColVertTex*, float, float, float, float); //0x13e5f20
      PreciseCollisionTilemapLine(unsigned char*, ColVertPos*, ColVertTex*, float, float, float, float); //0x13e6510
      PreciseCollisionTilemapRect(unsigned char*, ColVertPos*, ColVertTex*, float, float, float, float); //0x13e5a10
      SampleGradient(SWF_GradientFillStyleData*, int); //0x13f0980
      SetAlphaFromSprite(CSprite*); //0x13e8ec0
      SetBoundingBox(tagYYRECT*); //0x13df730
      SetBoundingBoxMode(int); //0x13dfbe0
      SetColMaskBit(int, int, int, unsigned char*, int); //0x13e0620
      Set_NineSliceData(CNineSliceData*); //0x13df670
      SetupBitmapTexture(SWF_Bitmap*, int, int, int, int, int, int, unsigned char*, unsigned char*, unsigned char*, unsigned char*, unsigned int); //0x13f0c40
      SetupFromRequest(SSpriteLoadRequest*); //0x13e8290
      SetupGradientTexture(SWF_GradientFillStyleData*); //0x13f0aa0
      SetupSWFCollisionMasks(unsigned char**, int*, int); //0x13f11b0
      TMaskCreate(CMask*, CMask*, CBitmap32*, int, int, unsigned int); //0x13e0650
      ~CSprite(); //0x13ee240
      ~CSprite(); //0x13ee260
};

class CSpriteFramesTrackKey {
      CSpriteFramesTrackKey(); //0x13c1070
      SetupObject(); //0x13d0310
      ~CSpriteFramesTrackKey(); //0x13d0290
};

class CStatefulTimeSource {
      CStatefulTimeSource(); //0x12761e0
      CStatefulTimeSource(eTimeSource); //0x1276230
      GetState(); //0x1276350
      Pause(); //0x1276280
      PropagateState(eTimeSourceState); //0x1276310
      Resume(); //0x12762c0
      Start(); //0x1276300
      ~CStatefulTimeSource(); //0x12772b0
};

class CStream {
      CStream(int); //0x140a830
      Clear(); //0x140a8b0
      ConvertFromString(char const*); //0x140c6c0
      ConvertToString(char const*&); //0x140c5f0
      CopyFrom(CStream*, long long); //0x140aba0
      CopyFrom(CStream*, long long, bool); //0x140a950
      Free(); //0x140a8e0
      GetMemory(); //0x140a920
      GetPosition(); //0x140a930
      GetSize(); //0x140a940
      LoadFromFile(char const*, int); //0x140abd0
      LoadFromMemory(void*, long long); //0x140abb0
      Read(void*, int); //0x140aed0
      ReadBoolean(); //0x140b2a0
      ReadBuffer(void*, int); //0x140ad20
      ReadCompressedStream(); //0x140bc80
      ReadEncryptedStream(); //0x140bde0
      ReadInteger(); //0x140af20
      ReadInteger64(); //0x140afa0
      ReadReal(); //0x140b0a0
      ReadStream(); //0x140b320
      ReadString(); //0x140b1c0
      ReadString(char const*&); //0x140b0d0
      SaveToFile(char const*); //0x140acc0
      Seek(int, short); //0x140ad70
      SetPosition(int); //0x140a910
      SkipCompressedStream(); //0x140bc00
      Write(void*, int); //0x140ab00
      WriteBoolean(bool); //0x140b860
      WriteBuffer(void*, int); //0x140adb0
      WriteCompressedStream(CStream*); //0x140c480
      WriteInteger(int); //0x140b3e0
      WriteInteger64(long long); //0x140b4a0
      WriteReal(double); //0x140b5e0
      WriteString(char const*); //0x140b730
      _AllocExtraSpace(int); //0x140ae50
      ~CStream(); //0x140a870
};

class CStringTrackKey {
      CStringTrackKey(); //0x13c1410
      SetupObject(); //0x13d0510
      ~CStringTrackKey(); //0x13d0490
};

class CTagManager {
      AddTags(int, int, char const**, int); //0x13d53f0
      AssetHasTags(int, int, char const**, int, bool); //0x13d5240
      CTagManager(); //0x13d46e0
      Clean(); //0x13d4700
      ConcatStrings(STagList*, char*); //0x13d47e0
      Debug_ShowAllTags(); //0x13d5ff0
      FindAssetNames(char const**, int, int&); //0x13d4f60
      FindAssetsIds(char const**, int, int, int&); //0x13d4da0
      GetTagPtrs2(char const**, int, bool); //0x13d4850
      GetTags(int, int); //0x13d5160
      LoadFromChunk(unsigned char*, unsigned int, unsigned char*); //0x13d5c30
      RemoveAllTags(int, int); //0x13d59a0
      RemoveTags(int, int, char const**, int); //0x13d5a80
};

class CTextTrackKey {
      CTextTrackKey(); //0x13c0dc0
      SetupObject(); //0x13cfaa0
      ~CTextTrackKey(); //0x13c0ea0
      ~CTextTrackKey(); //0x13c0f50
};

class CThread {
      CleanPlatformSpecificData(); //0x143b280
      GetNumAvailableHardwareThreads(); //0x143b610
      LockConditionMutex(); //0x143b540
      Sleep(int); //0x143b5c0
      SleepUntilWoken(int); //0x143b400
      Start(void* (*); //0x143b2b0
      UnlockConditionMutex(); //0x143b560
      WaitForExit(); //0x143b3f0
      WakeUp(); //0x143b570
};

class CTileset {
      Assign(CTileset*); //0x122c4f0
      CTileset(); //0x122c4b0
      Clear(); //0x122c290
      CreateFromBitmap(IBitmap*, bool, bool, bool, bool); //0x122c090
      DrawGeneral(float, float, float, float, float, float, float, float, float, unsigned int, unsigned int, unsigned int, unsigned int, float); //0x122c430
      Free(); //0x122c7f0
      FreeTexture(); //0x122bb90
      GenerateBitmapData(); //0x122c8b0
      GetHeight(); //0x122c870
      GetPreload(); //0x122c8a0
      GetTexture(); //0x122c420
      GetTransparent(); //0x122c880
      GetWidth(); //0x122c860
      InitLocalTPE(); //0x122c350
      InitTexture(); //0x122c310
      LoadFromChunk(YYBackground*, unsigned char*); //0x122c640
      LoadFromData(void*, int, int, bool, bool, bool, bool); //0x122c010
      LoadFromFile(char const*, bool, bool, bool, bool); //0x122baa0
      LoadFromFileData(char const*, void*, int, bool, bool, bool, bool); //0x122bbb0
      LoadFromGIFData(void*, int, bool, bool, bool, bool); //0x122be70
      LoadFromJPEGData(void*, int, bool, bool, bool, bool); //0x122bd90
      LoadFromPNGData(void*, int, bool, bool, bool, bool); //0x122bf50
      Smooth(); //0x122c890
      ~CTileset(); //0x122c770
};

class CTimeLine {
      AddMoment(int); //0x14292b0
      AddMomentScript(int, int); //0x1428e90
      Clear(); //0x1428a50
      Compile(); //0x1428d50
      DeleteMoment(int); //0x1429340
      Find(int); //0x1428dc0
      FindLarger(double); //0x1428e00
      FindSmaller(double); //0x1428e50
      Free(); //0x14289f0
      GetCount(); //0x1428a40
      GetEvent(int); //0x1428a00
      GetStep(int); //0x1428a20
      LoadFromChunk(YYTimeline*, unsigned char*); //0x1428b10
      MakeMomentScript(int, int); //0x1429240
      ~CTimeLine(); //0x14294b0
      ~CTimeLine(); //0x1429640
};

class CTimeSource {
      AddChild(double, eTimeSourceUnits, RValue*, RValue*, long long, eTimeSourceExpiryType); //0x1275dd0
      AddChild(double, eTimeSourceUnits, RValue*, bool); //0x1275f50
      CTimeSource(); //0x1275800
      CTimeSource(eTimeSource); //0x1275840
      CheckChildren(); //0x1275ac0
      Destroy(CTimeSource*); //0x12758f0
      FindLockedSource(); //0x1276180
      FindSourceWithId(int); //0x1276120
      GetChildren(); //0x12760f0
      GetDestroyingSource(); //0x1275a10
      GetId(); //0x1276110
      GetNumChildren(); //0x1276100
      GetType(); //0x12761d0
      MarkForDestruction(bool); //0x1275a20
      RemoveChild(CConfigurableTimeSource*); //0x12759a0
      Tick(long long); //0x1275a60
      TickChildren(); //0x1275a70
      ~CTimeSource(); //0x1275880
      ~CTimeSource(); //0x1277240
};

class CTimingSource {
      GetFPS(); //0x140c8b0
      Reset(); //0x140c7d0
      SetFrameRate(double); //0x140c870
      Update(); //0x140c800
};

class CTouchAction {
      AddRecord(long long, int, int); //0x1212080
      CTouchAction(); //0x1212ef0
};

class CTrackKeyBase {
      SetupObject(); //0x13d0710
};

class CViewGM {
      DeSerialise(IBuffer*); //0x132e000
      Serialise(IBuffer*); //0x132d820
};

class CWeakRef {
      CWeakRef(); //0x123b1b0
      DetachReference(YYObjectBase*); //0x1230460
      Free(bool); //0x123b340
      PreFree(); //0x123b390
      SetReference(YYObjectBase*); //0x123b2f0
      ThreadFree(bool, GCContext*); //0x123b370
      ~CWeakRef(); //0x123bae0
};

class Camera_GCProxy {
      Camera_GCProxy(CCamera*); //0x1387a10
      Detach(); //0x1386150
      Free(bool); //0x1387b50
      Mark4GC(unsigned int*, int); //0x1387ab0
      ThreadFree(bool, GCContext*); //0x1387b70
      ~Camera_GCProxy(); //0x138c540
};

class ClippingMaskState {
      Apply(); //0x1336e10
      Save(); //0x1336d60
};

class Code_Error {
      Create(); //0x132a5d0
      Show(); //0x132a5e0
};

class CompressorEffect {
      CompressorEffect(double*, YYAL_DeviceProps const&); //0x14a8470
      DeviceUpdated(YYAL_DeviceProps const&); //0x14a8ce0
      Process(float*, int, int); //0x14a86d0
      SetAttack(double); //0x14a8630
      SetInputGain(double); //0x14a8690
      SetOutputGain(double); //0x14a86b0
      SetRatio(double); //0x14a8600
      SetRelease(double); //0x14a8660
      SetThreshold(double); //0x14a85d0
      UpdateParam(int, double); //0x14a8bd0
      ~CompressorEffect(); //0x14a8cf0
};

class CompressorEffectStruct {
      CompressorEffectStruct(YYObjectBase*); //0x126ec30
      GetParamDescriptors(); //0x126edb0
      ~CompressorEffectStruct(); //0x126f030
};

class ContactsStack {
      Pop(); //0x136cfc0
      Push(b2Contact*); //0x136cd40
      ~ContactsStack(); //0x136fcb0
};

class CopyStack<AggregatedContactResult> {
      Push(AggregatedContactResult*); //0x136cf20
};

class CopyStack<SStackNode> {
      Push(SStackNode*); //0x1283100
};

class DBGButton {
      CopyFromClipboard(char const*, json_object*); //0x12434b0
      CopyToClipboard(json_object*); //0x12434a0
      Render(); //0x12433d0
      ~DBGButton(); //0x1243360
      ~DBGButton(); //0x12433a0
};

class DBGCheckBox {
      CopyFromClipboard(char const*, json_object*); //0x1243a00
      CopyToClipboard(json_object*); //0x1243990
      Render(); //0x12438a0
      ~DBGCheckBox(); //0x1243830
      ~DBGCheckBox(); //0x1243870
};

class DBGColour {
      CopyFromClipboard(char const*, json_object*); //0x1243ce0
      CopyToClipboard(json_object*); //0x1243c70
      Render(); //0x1243af0
      ~DBGColour(); //0x1243a80
      ~DBGColour(); //0x1243ac0
};

class DBGControl {
      ~DBGControl(); //0x1241cb0
      ~DBGControl(); //0x1243310
};

class DBGDropDown {
      CopyFromClipboard(char const*, json_object*); //0x12430a0
      CopyToClipboard(json_object*); //0x1243030
      DBGDropDown(char const*, DBGRef*, int, char const**, RValue*); //0x123de50
      ParseElements(char const*); //0x1242b40
      Render(); //0x1242df0
      ~DBGDropDown(); //0x1242c70
      ~DBGDropDown(); //0x1242dd0
};

class DBGRef {
      DBGRef(char const*, YYObjectBase*, int, DBGRef*); //0x123d280
      DBGRef(char const*, YYObjectBase*, int, int); //0x123d070
      Get(RValue*); //0x1242430
      Set(RValue*); //0x1242770
};

class DBGSameLine {
      CopyFromClipboard(char const*, json_object*); //0x1243350
      CopyToClipboard(json_object*); //0x1243340
      Render(); //0x1243330
      ~DBGSameLine(); //0x1243320
};

class DBGSection {
      CopyFromClipboard(); //0x1241fc0
      CopyFromClipboard(char const*, json_object*); //0x1241f00
      CopyToClipboard(); //0x1241f10
      CopyToClipboard(json_object*); //0x1241ef0
      Render(); //0x1241da0
      ~DBGSection(); //0x1241cc0
      ~DBGSection(); //0x1241d30
};

class DBGSlider {
      CopyFromClipboard(char const*, json_object*); //0x12423b0
      CopyToClipboard(json_object*); //0x1242340
      Render(); //0x1242230
      SliderFloat(char const*, float*); //0x1242640
      ~DBGSlider(); //0x1242200
      ~DBGSlider(); //0x12428b0
};

class DBGSliderInt {
      Render(); //0x1242920
      SliderInt(char const*, int*); //0x1242a20
      ~DBGSliderInt(); //0x12428f0
};

class DBGSprite {
      CopyFromClipboard(char const*, json_object*); //0x1244420
      CopyToClipboard(json_object*); //0x1244370
      Render(); //0x1244090
      ~DBGSprite(); //0x1244020
      ~DBGSprite(); //0x1244060
};

class DBGText {
      CopyFromClipboard(char const*, json_object*); //0x1243eb0
      CopyToClipboard(json_object*); //0x1243ea0
      Render(); //0x1243dd0
      ~DBGText(); //0x1243d60
      ~DBGText(); //0x1243da0
};

class DBGTextInput {
      CopyFromClipboard(char const*, json_object*); //0x12437b0
      CopyToClipboard(json_object*); //0x1243740
      Render(); //0x1243590
      ~DBGTextInput(); //0x12434c0
      ~DBGTextInput(); //0x1243530
};

class DBGTextSeparator {
      CopyFromClipboard(char const*, json_object*); //0x1244010
      CopyToClipboard(json_object*); //0x1244000
      Render(); //0x1243f30
      ~DBGTextSeparator(); //0x1243ec0
      ~DBGTextSeparator(); //0x1243f00
};

class DBGView {
      Add(DBGControl*); //0x12420d0
      CopyFromClipboard(char const*, json_object*); //0x1241ca0
      CopyToClipboard(json_object*); //0x1241c90
      Render(); //0x1241b70
      ~DBGView(); //0x1241a90
      ~DBGView(); //0x1241b00
};

class DBGWatch {
      CopyFromClipboard(char const*, json_object*); //0x1243300
      CopyToClipboard(json_object*); //0x12432f0
      Render(); //0x1243210
      ~DBGWatch(); //0x12431a0
      ~DBGWatch(); //0x12431e0
};

class DIALOG_REQ_CONTEXT {
      AddInputDialog(char const*, char const*, char const*); //0x1281a20
      AddLoginDialog(char const*, char const*); //0x1281bd0
      AddMessageDialog(char const*, char const*); //0x1281ca0
      AddQuestionDialog(char const*, char const*); //0x1281b00
      Kick(); //0x1281590
      ~DIALOG_REQ_CONTEXT(); //0x1282060
      ~DIALOG_REQ_CONTEXT(); //0x12820d0
};

class DS_AutoMutex {
      DS_AutoMutex(); //0x1290b30
      ~DS_AutoMutex(); //0x1290b70
};

class DS_GCProxy {
      DS_GCProxy(int, void*); //0x1405350
      Detach(); //0x13fc290
      Free(bool); //0x1405600
      Mark4GC(unsigned int*, int); //0x1405400
      ThreadFree(bool, GCContext*); //0x1405620
      ~DS_GCProxy(); //0x1406870
};

class DbgServer {
      DbgServer(bool); //0x12812d0
      GetBufferSize(); //0x1280990
      Init(); //0x1281340
      Process(); //0x1280d50
      ~DbgServer(); //0x12814c0
};

class DbgSocket {
      GetUserData(); //0x127fe40
      Write(void*, unsigned int); //0x127fe50
};

class DefaultSteps {
      Begin(); //0x121eb80
      CheckLoadGame(); //0x121ebd0
      CheckRoomChange(); //0x121ec60
      Draw(); //0x121ec20
      End(); //0x121ec30
      HandleIO(); //0x121ebe0
      Update(); //0x121ec10
};

class DelayEffect {
      DelayEffect(double*, YYAL_DeviceProps const&); //0x14a8f80
      DeviceUpdated(YYAL_DeviceProps const&); //0x14a9540
      Process(float*, int, int); //0x14a9180
      SetFeedback(double); //0x14a9100
      SetMix(double); //0x14a9140
      SetTime(double); //0x14a90c0
      UpdateParam(int, double); //0x14a9480
      ~DelayEffect(); //0x14a96a0
      ~DelayEffect(); //0x14a9700
};

class DelayEffectStruct {
      DelayEffectStruct(YYObjectBase*); //0x126b420
      GetParamDescriptors(); //0x126b6f0
      ~DelayEffectStruct(); //0x126ede0
};

class DelayLine {
      DelayLine(); //0x14a8d00
      ExpandToFit(int, int); //0x14a8e50
      Read(int, double); //0x14a8db0
      SetFs(int); //0x14a8f70
      Write(int, float); //0x14a8d80
      ~DelayLine(); //0x14a8d30
};

class DeviceListener {
      DeviceIsInitial(); //0x1491b70
      DeviceUpdated(); //0x1491b80
      DeviceWasUpdated(); //0x1491b50
      GetContextSyncStep(int, int); //0x1491bc0
};

class DeviceListener::FinishedMix(std::__ndk1::chrono::time_point<std::__ndk1::chrono::steady_clock, std::__ndk1::chrono::duration<long long, std::__ndk1 {
      ratio<1l, 1000000000l> > > const&, int, int); //0x1491ba0
};

class DummyConsole {
      Create(wchar_t const*, bool); //0x1277b90
      Output(char const*, ...); //0x1277ba0
      ~DummyConsole(); //0x1277b80
};

class EQEffect {
      DeviceUpdated(YYAL_DeviceProps const&); //0x14a9b80
      EQEffect(double*); //0x14a9940
      Process(float*, int, int); //0x14a99d0
      UpdateParam(int, double); //0x14a9b70
      ~EQEffect(); //0x14a9bd0
      ~EQEffect(); //0x14a9c00
};

class EQEffect::RegisterBand(int, std::__ndk1 {
      shared_ptr<AudioEffect>); //0x14a9b90
};

class EQEffectStruct {
      CreateInstance(); //0x126e770
      EQEffectStruct(YYObjectBase*); //0x126e010
      GetBand(int); //0x126df20
      GetParamDescriptors(); //0x126e980
      Mark4GC(unsigned int*, int); //0x126e6b0
      ~EQEffectStruct(); //0x126ef00
};

class EffectInfo {
      EffectInfo(); //0x1284050
      SetupFromJson(char const*); //0x12840f0
      ~EffectInfo(); //0x1284070
};

class EffectInstance {
      EffectInstance(YYObjectBase*, EffectInfo*, bool); //0x1286860
      Free(bool); //0x1287290
      GetParamNames(RValue&); //0x1286f60
      GetParamVar(char const*); //0x1286d00
      GetParamVars(); //0x1286d90
      GetVar(char const*); //0x1286cc0
      Mark4GC(unsigned int*, int); //0x1287250
      PreFree(); //0x12872e0
      SetDefaultValues(); //0x1286a30
      SetParam(char const*, int, int, void*); //0x1286ac0
      SetParamVar(char const*, RValue*); //0x1287070
      SetParamVars(YYObjectBase*); //0x1287110
      ThreadFree(bool, GCContext*); //0x12872c0
      ~EffectInstance(); //0x1286940
      ~EffectInstance(); //0x12869b0
};

class EffectParameterInfo {
      EffectParameterInfo(); //0x1283f80
      ~EffectParameterInfo(); //0x1283fa0
};

class EffectsManager {
      AcquireTempSurface(int, int); //0x12865e0
      AddEffectInfo(char const*, char const*); //0x1288820
      Clean(); //0x1287650
      CleanLayerEffect(CRoom*, CLayer*); //0x1288110
      CleanRoomEffects(CRoom*); //0x12877d0
      CleanupOldTempSurfaces(); //0x1288300
      ClearEffectsFromRooms(); //0x12876f0
      CreateNewEffectInstance(char const*, bool); //0x1287890
      EffectsManager(); //0x1287320
      ExecuteEffectEventsForRoom(char const*, CRoom*, bool); //0x12883b0
      GetEffectFromRValue(RValue*); //0x1288530
      GetEffectInfo(char const*); //0x1287ad0
      Init(); //0x12874a0
      IsRValueAnEffect(RValue*); //0x1288500
      ReleaseTempSurface(int); //0x1286700
      SetupEffectInfo(); //0x1287520
      SetupLayerEffect(CRoom*, CLayer*); //0x1287dd0
      SetupRoomEffects(CRoom*); //0x1287d80
      StepEffectsForRoom(CRoom*); //0x1288170
      ~EffectsManager(); //0x1287410
};

class EndOfPlaybackData {
      EndOfPlaybackData(int, int); //0x1491c70
      FlagAsStopped(); //0x1491cb0
      GetAssetIndex(); //0x1491c90
      GetVoiceHandle(); //0x1491c80
      WasStopped(); //0x1491ca0
};

class EndOfPlaybackManager {
      GetEventQueue(); //0x1492970
      ProcessQueue(); //0x1492680
      RegisterPlayback(int, int, int); //0x1492000
      RegisterStoppage(int); //0x14921a0
      Reset(); //0x1491cc0
};

class EndOfPlaybackManager::QueueFinishedSources(std::__ndk1::vector<unsigned int, std::__ndk1 {
      allocator<unsigned int> >&); //0x14923e0
};

class Envelope {
      Envelope(int, double); //0x14a9770
      Process(double, double); //0x14a97e0
      SetFs(int); //0x14a97a0
      SetTime(double); //0x14a97b0
};

class FilterHost {
      Cleanup(); //0x1284e90
      FilterHost(Shader*, EffectInfo*); //0x1285fc0
      Free(bool); //0x12865a0
      GetCommonShaderConstants(); //0x12861d0
      GetCustomShaderConstants(); //0x1286280
      LayerBegin(int); //0x1284f40
      LayerEnd(int); //0x1285200
      RoomEnd(); //0x1285ef0
      RoomStart(); //0x1285ec0
      Step(); //0x1284ee0
      ThreadFree(bool, GCContext*); //0x12865c0
      ~FilterHost(); //0x12864c0
      ~FilterHost(); //0x1286580
};

class GCArrayThing {
      Free(bool); //0x123adb0
      GCArrayThing(); //0x123ab40
      Mark4GC(unsigned int*, int); //0x123ad40
      ThreadFree(bool, GCContext*); //0x123add0
      ~GCArrayThing(); //0x123ac60
      ~GCArrayThing(); //0x123ad20
};

class GCContext {
      AddArrayToFree(GCArrayThing*); //0x123af80
      AddRValToDecRef(RValue*, bool); //0x122f160
};

class GCObjectContainer {
      AddObject(YYObjectBase*); //0x123a5c0
      Free(bool); //0x123a580
      GCObjectContainer(); //0x123a230
      Mark4GC(unsigned int*, int); //0x123a4b0
      RemoveObject(YYObjectBase*); //0x123a860
      ThreadFree(bool, GCContext*); //0x123a5a0
      ~GCObjectContainer(); //0x123a400
      ~GCObjectContainer(); //0x123a450
};

class GLSLShader {
      ~GLSLShader(); //0x12530b0
};

class GMAudioWindow {
      MyDataGetter(int, void*); //0x1246f80
      Render(); //0x12469a0
};

class GMDebugViewControl {
      Add(DBGControl*); //0x123da50
      Add(DBGSection*); //0x123d680
      Render(); //0x1247020
};

class GMDebugWindowBase {
      BeginRender(); //0x1244510
      EndRender(); //0x1244ac0
      PostRender(); //0x1244a70
      PreRender(); //0x1244530
      UpdateWindowState(); //0x1244a80
      ~GMDebugWindowBase(); //0x12444e0
};

class GMFPSWindow {
      Render(); //0x1245cd0
};

class GMGamePad {
      AddMapping(char const*); //0x13d6ed0
      AxisCount(); //0x13d7100
      AxisValue(int); //0x13d7140
      ButtonCount(); //0x13d6b50
      ButtonDown(int); //0x13d6bc0
      ButtonPressed(int); //0x13d6c50
      ButtonReleased(int); //0x13d6d30
      ButtonValue(int); //0x13d6e00
      Clear(); //0x13d66c0
      FindMappingFromGUID(unsigned char const*); //0x13d6f10
      GMGamePad(); //0x13d64f0
      GMGamePad(int, int); //0x13d65b0
      GMGamePad(int, int, int); //0x13d6810
      GetButtonValueFromAxis(int, float*); //0x13d6b60
      GetGuid(); //0x13d70d0
      GetMappingString(); //0x13d70b0
      GetOption(char const*); //0x13d72f0
      HatCount(); //0x13d7110
      HatValue(int); //0x13d7120
      InitOptionBool(char const*, bool); //0x13d7480
      InitOptionDouble(char const*, double); //0x13d75b0
      InitOptionInt32(char const*, int); //0x13d74f0
      InitOptionInt64(char const*, long long); //0x13d7550
      InitOptionString(char const*, char const*); //0x13d7610
      RemoveMapping(); //0x13d6ea0
      SelectNextUninitializedOption(char const*); //0x13d7430
      SetColour(int, unsigned int); //0x13d6e90
      SetConnected(bool); //0x13d63b0
      SetDeviceId(char const*); //0x13d6560
      SetGamePadCount(int); //0x13d61a0
      SetGuid(char const*); //0x13d70e0
      SetMotorSpeeds(float, float); //0x13d72c0
      SetOption(char const*, RValue&); //0x13d7360
      Update(float*, float*); //0x13d71f0
      Update(float*, float*, unsigned int*); //0x13d7270
      UpdateCounts(int, int); //0x13d6a30
      UpdateCounts(int, int, int); //0x13d6af0
      UpdateOptionCount(int); //0x13d6950
      ~GMGamePad(); //0x13d6990
};

class GMLogWindow {
      CandidateCompareFunc(void const*, void const*); //0x1245a60
      CheckAndPopulateCandidates(ImGuiInputTextCallbackData*, GMLogWindow*); //0x1245470
      ConvertToRValue(RValue*, char const*); //0x1245bd0
      CreateArgumentArray(char*, int, int*, char***); //0x1244ce0
      DrawAutoComplete(ImVec2&, ImVec2&, bool&); //0x12452e0
      Execute(int, char**, bool); //0x1244f00
      MyCallback(ImGuiInputTextCallbackData*); //0x1244b00
      PopulateCandidates(ImVector<char const*>&, char const*); //0x1245560
      Render(); //0x1244570
};

class GMMemoryView {
      GMMemoryView(); //0x123ed70
      Render(); //0x1247070
};

class GMTextureView {
      Render(); //0x1247ad0
      restoreDrawAlphaBlend(ImDrawList const*, ImDrawCmd const*); //0x12486d0
      restoreTexFilter(ImDrawList const*, ImDrawCmd const*); //0x1248730
      setDrawAlphaBlend(ImDrawList const*, ImDrawCmd const*); //0x1248670
      setNoTexFilter(ImDrawList const*, ImDrawCmd const*); //0x12485b0
      storeDrawAlphaBlend(ImDrawList const*, ImDrawCmd const*); //0x1248610
};

class GainEffect {
      DeviceUpdated(YYAL_DeviceProps const&); //0x14a9f20
      GainEffect(); //0x14a9c30
      GainEffect(double*); //0x14a9c60
      GetGain(); //0x14a9f30
      Process(float*, int, int); //0x14a9cf0
      SetGain(double); //0x14a9cd0
      UpdateParam(int, double); //0x14a9ef0
      ~GainEffect(); //0x14a9f40
};

class GainEffectStruct {
      GainEffectStruct(YYObjectBase*); //0x126b770
      GetParamDescriptors(); //0x126b940
      ~GainEffectStruct(); //0x126ee00
};

class GameInput {
      desc(char*, unsigned long, bool); //0x11e26d0
      equal(GameInput&, bool); //0x11e28b0
      init(char*, int); //0x11e24e0
};

class GameInputCompressor {
      CalculateChanges(GameInput const&, GameInput const&, unsigned int&, unsigned int&); //0x11e1f30
      DecodeGameInput(GameInput&, BitVectorReader&, bool); //0x11e21d0
      DecodeGameInputAsBits(GameInput&, BitVectorReader&, bool, bool); //0x11e2310
      DecodeGameInputAsBytes(GameInput&, BitVectorReader&, bool, bool); //0x11e23d0
      DecodeGameInputAsFull(GameInput&, BitVectorReader&, bool); //0x11e2460
      EncodeGameInput(GameInput const&, GameInput const&, BitVectorWriter&); //0x11e1ce0
      EncodeGameInputAsBits(GameInput const&, GameInput const&, BitVectorWriter&, bool); //0x11e1ff0
      EncodeGameInputAsBytes(GameInput const&, GameInput const&, BitVectorWriter&, bool); //0x11e20c0
      EncodeGameInputAsFull(GameInput const&, BitVectorWriter&); //0x11e2160
      ReadIndex(BitVectorReader&, bool); //0x11e24c0
      WriteIndex(BitVectorWriter&, unsigned char, bool); //0x11e21b0
};

class Graphics {
      AddVertexBuffer(int, int, bool); //0x125afd0
      AllocVerts(ePrimType, void*, int, int); //0x125ba80
      CheckDoFrameFirst(); //0x124d4b0
      Clear(unsigned int, float, int, eClearFlags); //0x12502d0
      CopySurface(void*, int, int, int, void*, int, eTextureFormat); //0x12560c0
      CreateTexture(int, int, int, eTextureFlags, eTextureFormat, unsigned char*); //0x1255960
      CreateTextureFromData(unsigned char*, unsigned int, int, int, ImageInfo*, eTextureFormat, eTextureFlags); //0x1259340
      CreateTextureFromFile(unsigned char*, unsigned int, ImageInfo*, eTextureFormat, bool); //0x1259230
      DrawArrayEx(ePrimType, int, void*, int); //0x125b890
      DrawArrayFromVB(ePrimType, int, int, int, void*, VertexBuffer*); //0x125be00
      DrawChar(float, float, float, int); //0x12508b0
      DrawNumber(float, float, float, int); //0x12508a0
      DrawQuad(Texture*, float, float, float, float, float, float, float, float, unsigned int); //0x12508f0
      EndInit(); //0x124efb0
      FVFSize(int); //0x125b000
      FindVBSpace(int, int); //0x125b010
      Flip(); //0x124f0f0
      Flush(); //0x125b9c0
      FlushTexture(void*); //0x1257060
      FogType(); //0x1250860
      FreeTexture(void*); //0x12554e0
      FreeVerts(int); //0x125bc80
      GetColourArray(unsigned int, float); //0x1382a40
      GetFVF(int); //0x125a0d0
      GetMatrix(eMatrix, float*); //0x124fef0
      GetMaxDynamicVertexCount(); //0x125bc90
      GetMaxDynamicVertexSpace(); //0x125bca0
      GetMaxTextureSize(); //0x12572d0
      GetTimer(); //0x1250880
      GetTimerFreq(); //0x1250870
      GetTiming(); //0x1250890
      GetViewFrustum(); //0x1381270
      GrabScreenRect(int, int, int, int, int*, int*, eTextureFormat*); //0x124f260
      GraphicsReset(); //0x124efc0
      Init(); //0x12508c0
      IsSupportedNativePrimtype(ePrimType); //0x125bcb0
      IsTextureFormatSupported(eTextureFormat); //0x124fe80
      OpenWindow(void*, int, int, int); //0x124ee90
      PickResolution(int, int); //0x124f100
      PopRenderStates(); //0x12514d0
      PreLoadTexture(void*); //0x1259720
      PrefetchTexture(void*); //0x1259100
      PrefetchTextureWithData(void*, char const*, int, int); //0x1259190
      PushRenderStates(); //0x12514c0
      Quit(); //0x124efe0
      ResetBlends(); //0x1251f50
      ResetVBuffers(); //0x125b8b0
      RestoreRenderTarget(); //0x1259800
      SaveRenderTarget(); //0x1259740
      SceneBegin(); //0x124eff0
      SceneEnd(); //0x124f090
      ScissorRect(int, int, int, int); //0x124f200
      SetMatrices(float*, float*, float*); //0x12500b0
      SetMatrix(eMatrix, float*); //0x124ff30
      SetMultiSample(int); //0x124ede0
      SetRenderState(eRenderState, unsigned int); //0x1251640
      SetRenderStateEx(int, unsigned int); //0x1251630
      SetRenderTarget(int, void*, void*); //0x1259b40
      SetSamplerState(int, eSamplerState, unsigned int); //0x1251f60
      SetSamplerStateEx(int, int, unsigned int); //0x1251f20
      SetTexture(int, void*); //0x1256c50
      SetTextureBlending(bool); //0x1259d90
      SetTexturePriority(void*, int); //0x1259730
      SetVSync(bool); //0x124edd0
      SetViewPort(int, int, int, int); //0x124f170
      ShadersSupported(); //0x124f120
      SurfaceCopy(void*, int, int, void*, int, int, int, int); //0x124fbd0
      Surface_GrabDepth(void*); //0x124f980
      Surface_GrabRect(void*, int, int, int, int); //0x124f850
      Surface_SetDepth(void*, void*); //0x124fbc0
      Surface_SetRect(void*, void*, int, int, int, int); //0x124f990
      TextureFlush(bool); //0x1398330
      Texture_GrabRect(void*, int, int, int, int); //0x124f4a0
      UpdateRegion(void*, int, int, int, int); //0x1259410
      UpdateTexture(Texture*); //0x1259dd0
      UpdateWindowSize(); //0x124efd0
      VBLinkLast(VertexBuffer*); //0x125afe0
      VBUnLast(VertexBuffer*); //0x125aff0
};

class GraphicsPerf {
      AddMemoryBar(int, unsigned int, void*); //0x1240d40
      BeginDebugDraw(); //0x123f190
      BeginFrame(); //0x123ef40
      BuildPerfDisplay(); //0x123fc40
      DisplayAudio(); //0x1240750
      DisplayAudioSync(); //0x123fa90
      DisplayConsole(); //0x1240740
      DisplayFPS(float); //0x123fbf0
      DisplayTexGroup(); //0x123faa0
      DisplayVersionInfo(); //0x12402f0
      DisplayXBGameChat(); //0x123fa80
      EndDebugDraw(); //0x123f3d0
      EndFrame(); //0x123f4e0
      GenerateMemoryPerf(); //0x1240800
      HandleInput(); //0x123fa70
      Init(); //0x123ea40
      IsKeyboardDebugOverlay(); //0x123f4b0
      IsMouseOverDebugOverlay(); //0x123f480
      Pop(); //0x123fa40
      Print(float, float, float, float, unsigned int, char*, int); //0x1240e80
      Push(unsigned int, char const*); //0x123f100
      Quit(); //0x123ef30
      RenderRectangle(float, float, float, float, unsigned int); //0x1240210
      SetDebugFont(); //0x123f3b0
      coprintf(float, unsigned int, unsigned int, char const*, ...); //0x1241170
      cprintf(float, float, unsigned int, char const*, ...); //0x12404c0
      oprintf(float, float, unsigned int, unsigned int, char const*, ...); //0x1240020
      oprintf_wrap(int, int, unsigned int, unsigned int, char const*, ...); //0x12411f0
      oprintf_wrap_decode(int, int, unsigned int, unsigned int, char const*, ...); //0x1241620
      printf(float, float, unsigned int, char const*, ...); //0x1240630
      strwidth(char const*, int); //0x1241120
};

class Graphics_Bitmap32 {
      Color_Merge(unsigned int, unsigned int, double); //0x137ccb0
};

class HPF2Effect {
      CalculateCoeffs(); //0x14ab640
      DeviceUpdated(YYAL_DeviceProps const&); //0x14ab4a0
      HPF2Effect(double*, YYAL_DeviceProps const&); //0x14aad80
      Process(float*, int, int); //0x14ab1a0
      SetCutoff(double); //0x14aafe0
      SetFs(int); //0x14ab570
      SetQ(double); //0x14ab0b0
      UpdateParam(int, double); //0x14ab2c0
      ~HPF2Effect(); //0x14ab710
};

class HPF2EffectStruct {
      GetParamDescriptors(); //0x126be60
      HPF2EffectStruct(YYObjectBase*); //0x126ba30
      SetCutoff(double); //0x126bdc0
      SetParam(int, double); //0x126bc80
      ~HPF2EffectStruct(); //0x126ee20
};

class HTTP_AutoMutex {
      ~HTTP_AutoMutex(); //0xf71210
};

class HTTP_REQ_CONTEXT {
      HTTP_REQ_CONTEXT(char const*, int, int (*); //0x13da6b0
      SetResponseHeaders(char*); //0x13daa40
      ~HTTP_REQ_CONTEXT(); //0x13da8e0
      ~HTTP_REQ_CONTEXT(); //0x13daa20
};

class Hash<CInstance> {
      ~Hash(); //0x122d330
};

class Hash<CObjectGM> {
      ~Hash(); //0x1369a70
};

class Hash<CPhysicsFixture> {
      Clear(eDeleteType); //0x136dbb0
      ~Hash(); //0x136cfe0
};

class Hash<CPhysicsJoint> {
      ~Hash(); //0x136dd80
};

class Hash<CPhysicsObject::b2FixtureContainer> {
      ~Hash(); //0x136ea00
};

class Hash<MapStore> {
      Clear(eDeleteType); //0x13fe8d0
      DeleteNode(HashNode<MapStore>*, eDeleteType); //0x14008d0
};

class Hash<RSurface> {
      ~Hash(); //0x138c6a0
};

class Hash<VertexFormat> {
      ~Hash(); //0x139abc0
};

class HiShelfEffect {
      CalculateCoeffs(); //0x14aac60
      DeviceUpdated(YYAL_DeviceProps const&); //0x14aaa40
      HiShelfEffect(double*, YYAL_DeviceProps const&); //0x14a9f50
      Process(float*, int, int); //0x14aa6c0
      SetFreq(double); //0x14aa340
      SetFs(int); //0x14aab50
      SetGain(double); //0x14aa590
      SetQ(double); //0x14aa460
      UpdateParam(int, double); //0x14aa7e0
      ~HiShelfEffect(); //0x14aad70
};

class HiShelfEffectStruct {
      GetParamDescriptors(); //0x126d8e0
      HiShelfEffectStruct(YYObjectBase*); //0x126d430
      SetFreq(double); //0x126d840
      SetParam(int, double); //0x126d700
      ~HiShelfEffectStruct(); //0x126eec0
};

class IBitmap {
      Create(); //0x142dec0
      ~IBitmap(); //0x142e300
      ~IBitmap(); //0x142e310
};

class IBitmapLoader {
      Create(char const*); //0x142e170
      Create(void*, int); //0x142e1a0
      Create(void*, int, int); //0x142e1d0
      ~IBitmapLoader(); //0x142e320
      ~IBitmapLoader(); //0x142e330
};

class IBuffer {
      Base64decode(char const*, int, int); //0x1421e80
      Base64encode(RValue*, int, int); //0x1421d90
      CRC32(RValue*, int, int); //0x14224f0
      Compress(int, int, unsigned int&); //0x1421a70
      Copy(int, int, IBuffer*, int); //0x1422650
      CopyMemoryToBuffer(IBuffer*, unsigned char const*, int, int, int, int, bool, bool, bool); //0x141fd10
      CopyMemoryToMemory(unsigned char*, int, unsigned char*, int, int, int, int, bool, bool); //0x141ff70
      Decompress(unsigned int&); //0x1421bb0
      Fill(int, int, eBuffer_Type, RValue*, int, bool); //0x14226c0
      GetBufferFileHeader(char const*, BufferFileHeader&); //0x1420130
      GetBufferFileHeaderFromBase64(char const*, BufferFileHeader&); //0x1420220
      GetPOW2Alignment(int); //0x141fb20
      GetSurface(int); //0x1422f50
      GetSurfaceDepth(int); //0x1423040
      IBuffer(); //0x141f9c0
      IBuffer(int, eBuffer_Format, int); //0x141fa20
      IBuffer(void*, int, eBuffer_Format, int, bool); //0x141fba0
      Load(char const*, int, int, int); //0x14218e0
      LoadFromFileInMemory(char*, int, int, int, int); //0x1421a20
      MD5(RValue*, int, int); //0x1421f60
      Peek(int, eBuffer_Type, RValue*); //0x1420e70
      Poke(int, eBuffer_Type, RValue*); //0x14211d0
      Read(eBuffer_Type, RValue*); //0x1420910
      Read(void const*, unsigned long, unsigned long); //0x14235a0
      ReadString(); //0x1423360
      Resize(int); //0x1422580
      SHA1(RValue*, int, int); //0x1422320
      Save(char const*, int, int); //0x14216c0
      SaveToFileInMemory(char**, int*, int, int, int); //0x1421750
      Seek(eBuffer_Seek, int); //0x1422e90
      SetSurface(int, int); //0x1423130
      SetSurfaceDepth(int, int); //0x1423200
      SizeOf(eBuffer_Type); //0x14202d0
      Write(char const*); //0x14232c0
      Write(eBuffer_Type, RValue*); //0x1420390
      Write(void const*, unsigned long, unsigned long); //0x14233e0
      WriteArray(eBuffer_Type, unsigned char*, int); //0x14202f0
      ~IBuffer(); //0x141fc70
      ~IBuffer(); //0x141fcd0
};

class IKeyframeStore {
      IKeyframeStore(); //0x13bfba0
      ~IKeyframeStore(); //0x13cfe60
};

class ImBitVector {
      Create(int); //0xf89690
};

class ImChunkStream<ImGuiTableSettings> {
      ~ImChunkStream(); //0xf96990
};

class ImChunkStream<ImGuiWindowSettings> {
      ~ImChunkStream(); //0x1006e00
};

class ImDrawData {
      AddDrawList(ImDrawList*); //0xf7b750
      Clear(); //0xf7b600
      DeIndexAllBuffers(); //0xf7b7a0
      ScaleClipRects(ImVec2 const&); //0xf7b9f0
      ~ImDrawData(); //0x1008840
};

class ImDrawDataBuilder {
      ~ImDrawDataBuilder(); //0x1008790
};

class ImDrawList {
      AddBezierCubic(ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int, float, int); //0xf79000
      AddBezierQuadratic(ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int, float, int); //0xf79120
      AddCallback(void (*); //0xf74250
      AddCircle(ImVec2 const&, float, unsigned int, int, float); //0xf78b00
      AddCircleFilled(ImVec2 const&, float, unsigned int, int); //0xf78be0
      AddConcavePolyFilled(ImVec2 const*, int, unsigned int); //0xf7ae50
      AddConvexPolyFilled(ImVec2 const*, int, unsigned int); //0xf758b0
      AddDrawCmd(); //0xf74100
      AddEllipse(ImVec2 const&, ImVec2 const&, unsigned int, float, int, float); //0xf78d70
      AddEllipseFilled(ImVec2 const&, ImVec2 const&, unsigned int, float, int); //0xf78ec0
      AddImage(void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int); //0xf79b70
      AddImageQuad(void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int); //0xf79e00
      AddImageRounded(void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int, float, int); //0xf7a060
      AddLine(ImVec2 const&, ImVec2 const&, unsigned int, float); //0xf77c20
      AddNgon(ImVec2 const&, float, unsigned int, int, float); //0xf78c90
      AddNgonFilled(ImVec2 const&, float, unsigned int, int); //0xf78d10
      AddPolyline(ImVec2 const*, int, unsigned int, int, float); //0xf74d20
      AddQuad(ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int, float); //0xf78160
      AddQuadFilled(ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int); //0xf78430
      AddRect(ImVec2 const&, ImVec2 const&, unsigned int, float, int, float); //0xf77dc0
      AddRectFilled(ImVec2 const&, ImVec2 const&, unsigned int, float, int); //0xf77e90
      AddRectFilledMultiColor(ImVec2 const&, ImVec2 const&, unsigned int, unsigned int, unsigned int, unsigned int); //0xf77fe0
      AddText(ImFont const*, float, ImVec2 const&, unsigned int, char const*, char const*, float, ImVec4 const*); //0xf79230
      AddText(ImVec2 const&, unsigned int, char const*, char const*); //0xf79ad0
      AddTriangle(ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int, float); //0xf786d0
      AddTriangleFilled(ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int); //0xf78900
      CloneOutput(); //0xf73dd0
      PathArcTo(ImVec2 const&, float, float, float, int); //0xf764e0
      PathArcToFast(ImVec2 const&, float, int, int); //0xf76410
      PathBezierCubicCurveTo(ImVec2 const&, ImVec2 const&, ImVec2 const&, int); //0xf76e50
      PathBezierQuadraticCurveTo(ImVec2 const&, ImVec2 const&, int); //0xf77330
      PathEllipticalArcTo(ImVec2 const&, ImVec2 const&, float, float, float, int); //0xf76a80
      PathRect(ImVec2 const&, ImVec2 const&, float, int); //0xf77750
      PopClipRect(); //0xf746b0
      PopTextureID(); //0xf74810
      PrimQuadUV(ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int); //0xf74c30
      PrimRect(ImVec2 const&, ImVec2 const&, unsigned int); //0xf74a50
      PrimRectUV(ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, unsigned int); //0xf74b20
      PrimReserve(int, int); //0xf748b0
      PrimUnreserve(int, int); //0xf74a30
      PushClipRect(ImVec2 const&, ImVec2 const&, bool); //0xf744f0
      PushClipRectFullScreen(); //0xf74660
      PushTextureID(void*); //0xf746f0
      _CalcCircleAutoSegmentCount(float); //0xf74460
      _ClearFreeMemory(); //0xf73c20
      _OnChangedClipRect(); //0xf74310
      _OnChangedTextureID(); //0xf743a0
      _OnChangedVtxOffset(); //0xf74430
      _PathArcToFastEx(ImVec2 const&, float, int, int, int); //0xf75d20
      _PathArcToN(ImVec2 const&, float, float, float, int); //0xf761a0
      _PopUnusedDrawCmd(); //0xf74210
      _ResetForNewFrame(); //0xf73470
      _TryMergeDrawCmds(); //0xf742a0
      ~ImDrawList(); //0xfcc050
};

class ImDrawListSharedData {
      ImDrawListSharedData(); //0xf73200
      SetCircleTessellationMaxError(float); //0xf73380
      ~ImDrawListSharedData(); //0x1008210
};

class ImDrawListSplitter {
      ClearFreeMemory(); //0xf73d00
      Merge(ImDrawList*); //0xf73760
      SetCurrentChannel(ImDrawList*, int); //0xf7b530
      Split(ImDrawList*, int); //0xf7b3a0
      ~ImDrawListSplitter(); //0x1008bb0
};

class ImFont {
      AddGlyph(ImFontConfig const*, unsigned short, float, float, float, float, float, float, float, float, float); //0xf86590
      AddRemapChar(unsigned short, unsigned short, bool); //0xf87840
      BuildLookupTable(); //0xf86810
      CalcTextSizeA(float, float, float, char const*, char const*, char const**); //0xf87af0
      CalcWordWrapPositionA(float, char const*, char const*, float); //0xf878f0
      ClearOutputData(); //0xf84970
      FindGlyph(unsigned short); //0xf87730
      FindGlyphNoFallback(unsigned short); //0xf877b0
      GrowIndex(int); //0xf87560
      ImFont(); //0xf873b0
      IsGlyphRangeUnused(unsigned int, unsigned int); //0xf877e0
      RenderChar(ImDrawList*, float, ImVec2 const&, unsigned int, unsigned short); //0xf87d80
      RenderText(ImDrawList*, float, ImVec2 const&, unsigned int, ImVec4 const&, char const*, char const*, float, bool); //0xf79370
      SetGlyphVisible(unsigned short, bool); //0xf87760
      ~ImFont(); //0xf87460
};

class ImFontAtlas {
      AddCustomRectFontGlyph(ImFont*, unsigned short, int, int, float, ImVec2 const&); //0xf7e390
      AddCustomRectRegular(int, int); //0xf7e2a0
      AddFont(ImFontConfig const*); //0xf7c880
      AddFontDefault(ImFontConfig const*); //0xf7cbb0
      AddFontFromFileTTF(char const*, float, ImFontConfig const*, unsigned short const*); //0xf7ce30
      AddFontFromMemoryCompressedBase85TTF(char const*, float, ImFontConfig const*, unsigned short const*); //0xf7cd20
      AddFontFromMemoryCompressedTTF(void const*, int, float, ImFontConfig const*, unsigned short const*); //0xf7d130
      AddFontFromMemoryTTF(void*, int, float, ImFontConfig const*, unsigned short const*); //0xf7d010
      Build(); //0xf7c400
      CalcCustomRectUV(ImFontAtlasCustomRect const*, ImVec2*, ImVec2*); //0xf7e480
      Clear(); //0xf7bfd0
      ClearFonts(); //0xf7c1e0
      ClearInputData(); //0xf7c080
      ClearTexData(); //0xf7c1a0
      GetGlyphRangesChineseFull(); //0xf86ee0
      GetGlyphRangesChineseSimplifiedCommon(); //0xf86ef0
      GetGlyphRangesCyrillic(); //0xf87020
      GetGlyphRangesDefault(); //0xf7cd10
      GetGlyphRangesGreek(); //0xf86ec0
      GetGlyphRangesJapanese(); //0xf86f80
      GetGlyphRangesKorean(); //0xf86ed0
      GetGlyphRangesThai(); //0xf87030
      GetGlyphRangesVietnamese(); //0xf87040
      GetMouseCursorTexData(int, ImVec2*, ImVec2*, ImVec2*, ImVec2*); //0xf7e4e0
      GetTexDataAsAlpha8(unsigned char**, int*, int*, int*); //0xf7c260
      GetTexDataAsRGBA32(unsigned char**, int*, int*, int*); //0xf7c550
      ImFontAtlas(); //0xf7bea0
      ~ImFontAtlas(); //0xf7bf40
};

class ImFontConfig {
      ImFontConfig(); //0xf7be40
};

class ImFontGlyphRangesBuilder {
      AddRanges(unsigned short const*); //0xf87100
      AddText(char const*, char const*); //0xf87050
      BuildRanges(ImVector<unsigned short>*); //0xf87160
};

class ImGui {
      AcceptDragDropPayload(char const*, int); //0xfed7e0
      ActivateItemByID(unsigned int); //0xfe5ef0
      AddContextHook(ImGuiContext*, ImGuiContextHook const*); //0xfcb860
      AddDrawListToDrawDataEx(ImDrawData*, ImVector<ImDrawList*>*, ImDrawList*); //0xf7b670
      AddSettingsHandler(ImGuiSettingsHandler const*); //0xfca2b0
      AlignTextToFramePadding(); //0xf9cd10
      ArrowButton(char const*, int); //0xf9abc0
      ArrowButtonEx(char const*, int, ImVec2, int); //0xf9a9e0
      Begin(char const*, bool*, int); //0xfd6e10
      BeginChild(char const*, ImVec2 const&, int, int); //0xfe0130
      BeginChild(unsigned int, ImVec2 const&, int, int); //0xfe0a00
      BeginChildEx(char const*, unsigned int, ImVec2 const&, int, int); //0xfe0220
      BeginColumns(char const*, int, int); //0xf97ad0
      BeginCombo(char const*, char const*, int); //0xf9db20
      BeginComboPopup(unsigned int, ImRect const&, int); //0xf9e110
      BeginComboPreview(); //0xf9e3d0
      BeginDisabled(bool); //0xfe4a90
      BeginDockableDragDropSource(ImGuiWindow*); //0xfe3870
      BeginDockableDragDropTarget(ImGuiWindow*); //0xfe3ab0
      BeginDocked(ImGuiWindow*, bool*); //0xfe2650
      BeginDragDropSource(int); //0xfed0c0
      BeginDragDropTarget(); //0xfed6e0
      BeginDragDropTargetCustom(ImRect const&, unsigned int); //0xfed570
      BeginGroup(); //0xfea4d0
      BeginItemTooltip(); //0xfeac30
      BeginListBox(char const*, ImVec2 const&); //0xfb5d90
      BeginMainMenuBar(); //0xfb7470
      BeginMenu(char const*, bool); //0xfb8200
      BeginMenuBar(); //0xfb6e60
      BeginMenuEx(char const*, char const*, bool); //0xfb7560
      BeginPopup(char const*, int); //0xfeb7b0
      BeginPopupContextItem(char const*, int); //0xfebc60
      BeginPopupContextVoid(char const*, int); //0xfebec0
      BeginPopupContextWindow(char const*, int); //0xfebd90
      BeginPopupEx(unsigned int, int); //0xfeb630
      BeginPopupModal(char const*, bool*, int); //0xfeb890
      BeginTabBar(char const*, int); //0xfb8950
      BeginTabBarEx(ImGuiTabBar*, ImRect const&, int); //0xfb8ab0
      BeginTabItem(char const*, bool*, int); //0xfba7f0
      BeginTable(char const*, int, int, ImVec2 const&, float); //0xf8cd00
      BeginTableEx(char const*, unsigned int, int, int, ImVec2 const&, float); //0xf8cd40
      BeginTooltip(); //0xfea9f0
      BeginTooltipEx(int, int); //0xfeaa00
      BeginTooltipHidden(); //0xfed080
      BeginViewportSideBar(char const*, ImGuiViewport*, int, float, int); //0xfb72c0
      BringWindowToDisplayBack(ImGuiWindow*); //0xfe4360
      BringWindowToDisplayBehind(ImGuiWindow*, ImGuiWindow*); //0xfe43e0
      BringWindowToDisplayFront(ImGuiWindow*); //0xfe42c0
      BringWindowToFocusFront(ImGuiWindow*); //0xfe41d0
      Bullet(); //0xf9ca00
      BulletText(char const*, ...); //0xf99b80
      BulletTextV(char const*, __va_list_tag*); //0xf99c40
      Button(char const*, ImVec2 const&); //0xf9a850
      ButtonBehavior(ImRect const&, unsigned int, bool*, bool*, int); //0xf99df0
      ButtonEx(char const*, ImVec2 const&, int); //0xf9a5e0
      CalcItemSize(ImVec2, float, float); //0xfe0a70
      CalcItemWidth(); //0xfea2c0
      CalcRoundingFlagsForRectInRect(ImRect const&, ImRect const&, float); //0xf89300
      CalcTextSize(char const*, char const*, bool, float); //0xfc5a20
      CalcTypematicRepeatAmount(float, float, float, float); //0xfe7630
      CalcWindowNextAutoFitSize(ImGuiWindow*); //0xfe1d50
      CalcWrapWidthForPos(ImVec2 const&, float); //0xfce160
      CallContextHooks(ImGuiContext*, ImGuiContextHookType); //0xfcaa50
      Checkbox(char const*, bool*); //0xf9bd10
      CheckboxFlags(char const*, int*, int); //0xf9c090
      CheckboxFlags(char const*, long long*, long long); //0xf9c1b0
      CheckboxFlags(char const*, unsigned int*, unsigned int); //0xf9c120
      CheckboxFlags(char const*, unsigned long long*, unsigned long long); //0xf9c240
      ClearActiveID(); //0xfcd6e0
      ClearDragDrop(); //0xfdec90
      ClearIniSettings(); //0xfee6d0
      ClearWindowSettings(char const*); //0xfef040
      CloseButton(unsigned int, ImVec2 const&); //0xf9abf0
      CloseCurrentPopup(); //0xfeb560
      ClosePopupToLevel(int, bool); //0xfeb3f0
      ClosePopupsExceptModals(); //0xfeb500
      ClosePopupsOverWindow(ImGuiWindow*, bool); //0xfcfa00
      CollapseButton(unsigned int, ImVec2 const&, ImGuiDockNode*); //0xf9ae60
      CollapsingHeader(char const*, bool*, int); //0xfb52e0
      CollapsingHeader(char const*, int); //0xfb5280
      ColorButton(char const*, ImVec4 const&, int, ImVec2 const&); //0xfb08c0
      ColorConvertFloat4ToU32(ImVec4 const&); //0xfc2160
      ColorConvertHSVtoRGB(float, float, float, float&, float&, float&); //0xfc22b0
      ColorConvertRGBtoHSV(float, float, float, float&, float&, float&); //0xfc2210
      ColorConvertU32ToFloat4(unsigned int); //0xfc2110
      ColorEdit3(char const*, float*, int); //0xfaf4d0
      ColorEdit4(char const*, float*, int); //0xfaf4e0
      ColorEditOptionsPopup(float const*, int); //0xfb0430
      ColorPicker3(char const*, float*, int); //0xfb3560
      ColorPicker4(char const*, float*, int, float const*); //0xfb0ea0
      ColorPickerOptionsPopup(float const*, int); //0xfb35f0
      ColorTooltip(char const*, float const*, int); //0xfb3900
      Columns(int, char const*, bool); //0xf98960
      Combo(char const*, int*, bool (*); //0xf9f2c0
      Combo(char const*, int*, char const* (*); //0xf9e5e0
      Combo(char const*, int*, char const* const*, int, int); //0xf9ed90
      Combo(char const*, int*, char const*, int); //0xf9ef70
      CreateContext(ImFontAtlas*); //0xfc6c60
      CreateNewWindowSettings(char const*); //0xfeed70
      DataTypeApplyFromText(char const*, int, void*, char const*); //0xf9f740
      DataTypeApplyOp(int, int, void*, void const*, void const*); //0xf9f3c0
      DataTypeClamp(int, void*, void const*, void const*); //0xf9fbc0
      DataTypeCompare(int, void const*, void const*); //0xf9fb10
      DataTypeFormatString(char*, int, int, void const*, char const*); //0xf9f330
      DataTypeGetInfo(int); //0xf9f310
      DebugAllocHook(ImGuiDebugAllocInfo*, int, void*, unsigned long); //0xfce1c0
      DebugBreakButton(char const*, char const*); //0x1004aa0
      DebugBreakButtonTooltip(bool, char const*); //0x10050b0
      DebugBreakClearData(); //0x1002b40
      DebugCheckVersionAndDataLayout(char const*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long); //0xfe92b0
      DebugDrawCursorPos(unsigned int); //0x1006560
      DebugDrawItemRect(unsigned int); //0x10067f0
      DebugDrawLineExtents(unsigned int); //0x1006670
      DebugFlashStyleColor(int); //0xffc750
      DebugHookIdInfo(unsigned int, int, void const*, void const*); //0xfe67e0
      DebugLocateItem(unsigned int); //0x1006850
      DebugLocateItemOnHover(unsigned int); //0x1004980
      DebugLocateItemResolveWithLastItem(); //0xfe3e60
      DebugLog(char const*, ...); //0xfc3ce0
      DebugLogV(char const*, __va_list_tag*); //0x10062f0
      DebugNodeColumns(ImGuiOldColumns*); //0x1005130
      DebugNodeDockNode(ImGuiDockNode*, char const*); //0x1004330
      DebugNodeDrawCmdShowMeshAndBoundingBox(ImDrawList*, ImDrawList const*, ImDrawCmd const*, bool, bool); //0x1005f00
      DebugNodeDrawList(ImGuiWindow*, ImGuiViewportP*, ImDrawList const*, char const*); //0x1003150
      DebugNodeFont(ImFont*); //0xffc9a0
      DebugNodeFontGlyph(ImFont*, ImFontGlyph const*); //0x10061c0
      DebugNodeInputTextState(ImGuiInputTextState*); //0xfaf260
      DebugNodeStorage(ImGuiStorage*, char const*); //0x1006270
      DebugNodeTabBar(ImGuiTabBar*, char const*); //0x1003d30
      DebugNodeTable(ImGuiTable*); //0xf969b0
      DebugNodeTableSettings(ImGuiTableSettings*); //0xf97270
      DebugNodeTypingSelectState(ImGuiTypingSelectState*); //0xfb5d20
      DebugNodeViewport(ImGuiViewportP*); //0x10039a0
      DebugNodeWindow(ImGuiWindow*, char const*); //0x1005260
      DebugNodeWindowSettings(ImGuiWindowSettings*); //0x1004830
      DebugNodeWindowsList(ImVector<ImGuiWindow*>*, char const*); //0x1002ea0
      DebugNodeWindowsListByBeginStackParent(ImGuiWindow**, int, ImGuiWindow*); //0x1003000
      DebugRenderKeyboardPreview(ImDrawList*); //0xffc120
      DebugRenderViewportThumbnail(ImDrawList*, ImGuiViewportP*, ImRect const&); //0xffb800
      DebugStartItemPicker(); //0x1002ca0
      DebugTextEncoding(char const*); //0xffc4e0
      DestroyContext(ImGuiContext*); //0xfc8520
      DestroyPlatformWindow(ImGuiViewportP*); //0xfefea0
      DestroyPlatformWindows(); //0xfca870
      DockBuilderAddNode(unsigned int, int); //0xff8fc0
      DockBuilderCopyDockSpace(unsigned int, unsigned int, ImVector<char const*>*); //0xff9bd0
      DockBuilderCopyNode(unsigned int, unsigned int, ImVector<unsigned int>*); //0xff9610
      DockBuilderCopyWindowSettings(char const*, char const*); //0xff98c0
      DockBuilderDockWindow(char const*, unsigned int); //0xff8c40
      DockBuilderFinish(unsigned int); //0xffa700
      DockBuilderGetNode(unsigned int); //0xff8df0
      DockBuilderRemoveNode(unsigned int); //0xff90d0
      DockBuilderRemoveNodeChildNodes(unsigned int); //0xff1a70
      DockBuilderRemoveNodeDockedWindows(unsigned int, bool); //0xff18c0
      DockBuilderSetNodePos(unsigned int, ImVec2); //0xff8e70
      DockBuilderSetNodeSize(unsigned int, ImVec2); //0xff8f10
      DockBuilderSplitNode(unsigned int, int, float, unsigned int*, unsigned int*); //0xff9460
      DockContextCalcDropPosForDocking(ImGuiWindow*, ImGuiDockNode*, ImGuiWindow*, ImGuiDockNode*, int, bool, ImVec2*); //0xff7210
      DockContextClearNodes(ImGuiContext*, unsigned int, bool); //0xff18a0
      DockContextEndFrame(ImGuiContext*); //0xfde990
      DockContextFindNodeByID(ImGuiContext*, unsigned int); //0xff6230
      DockContextGenNodeID(ImGuiContext*); //0xff62a0
      DockContextInitialize(ImGuiContext*); //0xfca640
      DockContextNewFrameUpdateDocking(ImGuiContext*); //0xfd6cb0
      DockContextNewFrameUpdateUndocking(ImGuiContext*); //0xfd6a50
      DockContextProcessUndockNode(ImGuiContext*, ImGuiDockNode*); //0xff2740
      DockContextProcessUndockWindow(ImGuiContext*, ImGuiWindow*, bool); //0xfef480
      DockContextQueueDock(ImGuiContext*, ImGuiWindow*, ImGuiDockNode*, ImGuiWindow*, int, float, bool); //0xff6330
      DockContextQueueUndockNode(ImGuiContext*, ImGuiDockNode*); //0xfcef20
      DockContextQueueUndockWindow(ImGuiContext*, ImGuiWindow*); //0xff6410
      DockContextRebuildNodes(ImGuiContext*); //0xff2290
      DockContextShutdown(ImGuiContext*); //0xfca950
      DockNodeBeginAmendTabBar(ImGuiDockNode*); //0xff80a0
      DockNodeEndAmendTabBar(); //0xff8100
      DockNodeWindowMenuHandler_Default(ImGuiContext*, ImGuiDockNode*, ImGuiTabBar*); //0xff1700
      DockSpace(unsigned int, ImVec2 const&, int, ImGuiWindowClass const*); //0xff8130
      DockSpaceOverViewport(ImGuiViewport const*, int, ImGuiWindowClass const*); //0xff8770
      DragBehavior(unsigned int, int, void*, float, void const*, void const*, char const*, int); //0xf9fd40
      DragFloat(char const*, float*, float, float, float, char const*, int); //0xfa2c60
      DragFloat2(char const*, float*, float, float, float, char const*, int); //0xfa2cc0
      DragFloat3(char const*, float*, float, float, float, char const*, int); //0xfa2d20
      DragFloat4(char const*, float*, float, float, float, char const*, int); //0xfa2d80
      DragFloatRange2(char const*, float*, float*, float, float, float, char const*, char const*, int); //0xfa2de0
      DragInt(char const*, int*, float, int, int, char const*, int); //0xfa2ff0
      DragInt2(char const*, int*, float, int, int, char const*, int); //0xfa3050
      DragInt3(char const*, int*, float, int, int, char const*, int); //0xfa30c0
      DragInt4(char const*, int*, float, int, int, char const*, int); //0xfa3130
      DragIntRange2(char const*, int*, int*, float, int, int, char const*, char const*, int); //0xfa31a0
      DragScalar(char const*, int, void*, float, void const*, void const*, char const*, int); //0xfa22c0
      DragScalarN(char const*, int, void*, int, float, void const*, void const*, char const*, int); //0xfa2a90
      Dummy(ImVec2 const&); //0xf9cbc0
      End(); //0xfde680
      EndChild(); //0xfe0cb0
      EndColumns(); //0xf98480
      EndCombo(); //0xf9e3b0
      EndComboPreview(); //0xf9e4f0
      EndDisabled(); //0xfe4b50
      EndDragDropSource(); //0xfed420
      EndDragDropTarget(); //0xfedc00
      EndFrame(); //0xfdd8d0
      EndGroup(); //0xfe99d0
      EndListBox(); //0xfb6080
      EndMainMenuBar(); //0xfb7510
      EndMenu(); //0xfb8210
      EndMenuBar(); //0xfb7130
      EndPopup(); //0xfeb750
      EndTabBar(); //0xfb8de0
      EndTabItem(); //0xfbb580
      EndTable(); //0xf908f0
      EndTooltip(); //0xfeac50
      ErrorCheckEndFrameRecover(void (*); //0xfe9330
      ErrorCheckEndWindowRecover(void (*); //0xfe93f0
      ErrorCheckUsingSetCursorPosToExtendParentBoundaries(); //0xfe4180
      FindBestWindowPosForPopup(ImGuiWindow*); //0xfe3070
      FindBestWindowPosForPopupEx(ImVec2 const&, ImVec2 const&, int*, ImRect const&, ImRect const&, ImGuiPopupPositionPolicy); //0xfec020
      FindBlockingModal(ImGuiWindow*); //0xfe2480
      FindBottomMostVisibleWindowWithinBeginStack(ImGuiWindow*); //0xfdd7a0
      FindHoveredViewportFromPlatformWindowStack(ImVec2 const&); //0xfef8e0
      FindOrCreateColumns(ImGuiWindow*, unsigned int); //0xf97800
      FindRenderedTextEnd(char const*, char const*); //0xfc5080
      FindSettingsHandler(char const*); //0xfee620
      FindViewportByID(unsigned int); //0xfde610
      FindViewportByPlatformHandle(void*); //0xfef590
      FindWindowByID(unsigned int); //0xfe1c00
      FindWindowByName(char const*); //0xfe1c80
      FindWindowDisplayIndex(ImGuiWindow*); //0xfdd880
      FindWindowSettingsByID(unsigned int); //0xfeef40
      FindWindowSettingsByWindow(ImGuiWindow*); //0xfeefb0
      FixupKeyChord(ImGuiContext*, int); //0xfe7260
      FocusItem(); //0xfe5ac0
      FocusTopMostWindowUnderOne(ImGuiWindow*, ImGuiWindow*, ImGuiViewport*, int); //0xfd6c10
      FocusWindow(ImGuiWindow*, int); //0xfce660
      GcAwakeTransientWindowBuffers(ImGuiWindow*); //0xfcd240
      GcCompactTransientMiscBuffers(); //0xfccda0
      GcCompactTransientWindowBuffers(ImGuiWindow*); //0xfccf20
      GetAllocatorFunctions(void* (**); //0xfc6c40
      GetBackgroundDrawList(); //0xfce540
      GetBackgroundDrawList(ImGuiViewport*); //0xfce340
      GetClipboardText(); //0xfce240
      GetColorU32(ImVec4 const&); //0xfc49f0
      GetColorU32(int, float); //0xfc4910
      GetColorU32(unsigned int, float); //0xfc4ae0
      GetColumnIndex(); //0xf973b0
      GetColumnNormFromOffset(ImGuiOldColumns const*, float); //0xf97420
      GetColumnOffset(int); //0xf97430
      GetColumnOffsetFromNorm(ImGuiOldColumns const*, float); //0xf97410
      GetColumnWidth(int); //0xf97490
      GetColumnsCount(); //0xf973e0
      GetColumnsID(char const*, int); //0xf97a60
      GetContentRegionAvail(); //0xfe0a20
      GetContentRegionMax(); //0xfea420
      GetContentRegionMaxAbs(); //0xfea350
      GetCurrentContext(); //0xfc3cd0
      GetCursorPos(); //0xfe9dd0
      GetCursorPosX(); //0xfe9e00
      GetCursorPosY(); //0xfe9e30
      GetCursorScreenPos(); //0xfe9d70
      GetCursorStartPos(); //0xfe9f30
      GetDragDropPayload(); //0xfedbd0
      GetDrawData(); //0xfce2d0
      GetDrawListSharedData(); //0xfce570
      GetFont(); //0xfe5a00
      GetFontSize(); //0xfe5a20
      GetFontTexUvWhitePixel(); //0xfe5a40
      GetForegroundDrawList(); //0xfce070
      GetForegroundDrawList(ImGuiViewport*); //0xfc6bf0
      GetFrameCount(); //0xfce320
      GetFrameHeight(); //0xfea3d0
      GetFrameHeightWithSpacing(); //0xfea3f0
      GetHoveredID(); //0xfcd720
      GetID(char const*); //0xfe7180
      GetID(char const*, char const*); //0xfe7220
      GetID(void const*); //0xfe7240
      GetIDWithSeed(char const*, char const*, unsigned int); //0xfe6ff0
      GetIDWithSeed(int, unsigned int); //0xfe70e0
      GetIO(); //0xfce2b0
      GetItemID(); //0xfe00b0
      GetItemRectMax(); //0xfe00f0
      GetItemRectMin(); //0xfe00d0
      GetItemRectSize(); //0xfe0110
      GetKeyChordName(int); //0xfe7440
      GetKeyData(ImGuiContext*, ImGuiKey); //0xfbfd30
      GetKeyIndex(ImGuiKey); //0xfe72f0
      GetKeyMagnitude2d(ImGuiKey, ImGuiKey, ImGuiKey, ImGuiKey); //0xfe7810
      GetKeyName(ImGuiKey); //0xfe7380
      GetKeyOwner(ImGuiKey); //0xfe2f40
      GetKeyPressedAmount(ImGuiKey, float, float); //0xfe7700
      GetMainViewport(); //0xfde660
      GetMouseClickedCount(int); //0xfe8b20
      GetMouseCursor(); //0xfe8d00
      GetMouseDragDelta(int, float); //0xfe8c40
      GetMousePos(); //0xfe8b70
      GetMousePosOnOpeningCurrentPopup(); //0xfe8bc0
      GetNavTweakPressedAmount(ImGuiAxis); //0xfec940
      GetPlatformIO(); //0xfce2c0
      GetPopupAllowedExtentRect(ImGuiWindow*); //0xfec490
      GetScrollMaxX(); //0xfea710
      GetScrollMaxY(); //0xfea730
      GetScrollX(); //0xfea6d0
      GetScrollY(); //0xfea6f0
      GetShortcutRoutingData(int); //0xfe7a70
      GetStateStorage(); //0xfe6710
      GetStyle(); //0xfc4900
      GetStyleColorName(int); //0xfc5060
      GetStyleColorVec4(int); //0xfc4ac0
      GetStyleVarInfo(int); //0xfc4da0
      GetTextLineHeight(); //0xfea390
      GetTextLineHeightWithSpacing(); //0xfea3b0
      GetTime(); //0xfce300
      GetTopMostAndVisiblePopupModal(); //0xfeaf20
      GetTopMostPopupModal(); //0xfcf940
      GetTreeNodeToLabelSpacing(); //0xfb5220
      GetTypematicRepeatRate(int, float*, float*); //0xfe7690
      GetTypingSelectRequest(int); //0xfb54d0
      GetVersion(); //0xfce2a0
      GetViewportPlatformMonitor(ImGuiViewport*); //0xfe3660
      GetWindowAlwaysWantOwnTabBar(ImGuiWindow*); //0xfe2620
      GetWindowContentRegionMax(); //0xfea4a0
      GetWindowContentRegionMin(); //0xfea470
      GetWindowDockID(); //0xfe51e0
      GetWindowDpiScale(); //0xfe59c0
      GetWindowDrawList(); //0xfe5990
      GetWindowHeight(); //0xfe5260
      GetWindowPos(); //0xfe5280
      GetWindowResizeBorderID(ImGuiWindow*, int); //0xfe22f0
      GetWindowResizeCornerID(ImGuiWindow*, int); //0xfe2230
      GetWindowScrollbarID(ImGuiWindow*, ImGuiAxis); //0xf9b020
      GetWindowScrollbarRect(ImGuiWindow*, ImGuiAxis); //0xf9b040
      GetWindowSize(); //0xfe53a0
      GetWindowViewport(); //0xfe59e0
      GetWindowWidth(); //0xfe5240
      Image(void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec4 const&, ImVec4 const&); //0xf9b770
      ImageButton(char const*, void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec4 const&, ImVec4 const&); //0xf9bb70
      ImageButton(void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, int, ImVec4 const&, ImVec4 const&); //0xf9bbf0
      ImageButtonEx(unsigned int, void*, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec4 const&, ImVec4 const&, int); //0xf9b910
      Indent(float); //0xfe9f60
      Initialize(); //0xfc7f10
      InputDouble(char const*, double*, double, double, char const*, int); //0xfad110
      InputFloat(char const*, float*, float, float, char const*, int); //0xfacf00
      InputFloat2(char const*, float*, char const*, int); //0xfacf70
      InputFloat3(char const*, float*, char const*, int); //0xfacfa0
      InputFloat4(char const*, float*, char const*, int); //0xfacfd0
      InputInt(char const*, int*, int, int, int); //0xfad000
      InputInt2(char const*, int*, int); //0xfad080
      InputInt3(char const*, int*, int); //0xfad0b0
      InputInt4(char const*, int*, int); //0xfad0e0
      InputScalar(char const*, int, void*, void const*, void const*, char const*, int); //0xfac9a0
      InputScalarN(char const*, int, void*, int, void const*, void const*, char const*, int); //0xfacd50
      InputText(char const*, char*, unsigned long, int, int (*); //0xfaccf0
      InputTextDeactivateHook(unsigned int); //0xfae8d0
      InputTextEx(char const*, char const*, char*, int, ImVec2 const&, int, int (*); //0xfa9100
      InputTextMultiline(char const*, char*, unsigned long, ImVec2 const&, int, int (*); //0xfad180
      InputTextWithHint(char const*, char const*, char*, unsigned long, int, int (*); //0xfad1b0
      InvisibleButton(char const*, ImVec2 const&, int); //0xf9a8e0
      IsAnyItemActive(); //0xfdffa0
      IsAnyItemFocused(); //0xfdffc0
      IsAnyItemHovered(); //0xfdff70
      IsAnyMouseDown(); //0xfe8c00
      IsClippedEx(ImRect const&, unsigned int); //0xfce0a0
      IsDragDropActive(); //0xfed060
      IsDragDropPayloadBeingAccepted(); //0xfcf630
      IsItemActivated(); //0xfdfd50
      IsItemActive(); //0xfdfd20
      IsItemClicked(int); //0xfdfe20
      IsItemDeactivated(); //0xfdfd80
      IsItemDeactivatedAfterEdit(); //0xfdfdc0
      IsItemEdited(); //0xfe0010
      IsItemFocused(); //0xfcdb10
      IsItemHovered(int); //0xfcd860
      IsItemToggledOpen(); //0xfdff30
      IsItemToggledSelection(); //0xfdff50
      IsItemVisible(); //0xfdfff0
      IsKeyChordPressed(int); //0xfe90c0
      IsKeyChordPressed(int, unsigned int, int); //0xfe90d0
      IsKeyDown(ImGuiKey); //0xfe80a0
      IsKeyDown(ImGuiKey, unsigned int); //0xfe8210
      IsKeyPressed(ImGuiKey, bool); //0xfe83e0
      IsKeyPressed(ImGuiKey, unsigned int, int); //0xfe83f0
      IsKeyReleased(ImGuiKey); //0xfe85d0
      IsKeyReleased(ImGuiKey, unsigned int); //0xfe8750
      IsMouseClicked(int, bool); //0xfced30
      IsMouseClicked(int, unsigned int, int); //0xfe8830
      IsMouseDoubleClicked(int); //0xfe8a00
      IsMouseDoubleClicked(int, unsigned int); //0xfe8af0
      IsMouseDown(int); //0xfdeba0
      IsMouseDown(int, unsigned int); //0xfe8800
      IsMouseDragPastThreshold(int, float); //0xfe8b40
      IsMouseDragging(int, float); //0xfceee0
      IsMouseHoveringRect(ImVec2 const&, ImVec2 const&, bool); //0xfcdf90
      IsMousePosValid(ImVec2 const*); //0xfcf270
      IsMouseReleased(int); //0xfe88e0
      IsMouseReleased(int, unsigned int); //0xfe89d0
      IsPopupOpen(char const*, int); //0xfeadd0
      IsPopupOpen(unsigned int, int); //0xfcf840
      IsRectVisible(ImVec2 const&); //0xfe6730
      IsRectVisible(ImVec2 const&, ImVec2 const&); //0xfe6790
      IsWindowAbove(ImGuiWindow*, ImGuiWindow*); //0xfcf9a0
      IsWindowAppearing(); //0xfe5590
      IsWindowChildOf(ImGuiWindow*, ImGuiWindow*, bool, bool); //0xfe4e20
      IsWindowCollapsed(); //0xfe5570
      IsWindowContentHoverable(ImGuiWindow*, int); //0xfcd780
      IsWindowDocked(); //0xfe5200
      IsWindowFocused(int); //0xfe50d0
      IsWindowHovered(int); //0xfe4eb0
      IsWindowNavFocusable(ImGuiWindow*); //0xfe5220
      IsWindowWithinBeginStackOf(ImGuiWindow*, ImGuiWindow*); //0xfcd830
      ItemAdd(ImRect const&, unsigned int, ImRect const*, int); //0xfe1020
      ItemHoverable(ImRect const&, unsigned int, int); //0xfcdca0
      ItemSize(ImVec2 const&, float); //0xfe0e40
      KeepAliveID(unsigned int); //0xfcf230
      LabelText(char const*, char const*, ...); //0xf99880
      LabelTextV(char const*, char const*, __va_list_tag*); //0xf99940
      ListBox(char const*, int*, bool (*); //0xf9f050
      ListBox(char const*, int*, char const* (*); //0xf9f0a0
      ListBox(char const*, int*, char const* const*, int, int); //0xfb6090
      LoadIniSettingsFromDisk(char const*); //0xfee7e0
      LoadIniSettingsFromMemory(char const*, unsigned long); //0xfee8e0
      LocalizeRegisterEntries(ImGuiLocEntry const*, int); //0xfca350
      LogBegin(ImGuiLogType, int); //0xfede50
      LogButtons(); //0xfee0e0
      LogFinish(); //0xfe4010
      LogRenderedText(ImVec2 const*, char const*, char const*); //0xfc52c0
      LogSetNextTextDecoration(char const*, char const*); //0xfedeb0
      LogText(char const*, ...); //0xfedc20
      LogTextV(char const*, __va_list_tag*); //0xfedd90
      LogToBuffer(int); //0xfee070
      LogToClipboard(int); //0xfee000
      LogToFile(int, char const*); //0xfedf50
      LogToTTY(int); //0xfeded0
      MarkIniSettingsDirty(); //0xfee500
      MarkIniSettingsDirty(ImGuiWindow*); //0xfe3040
      MarkItemEdited(unsigned int); //0xfcd740
      MemAlloc(unsigned long); //0xfc0fc0
      MemFree(void*); //0xfc1240
      MenuItem(char const*, char const*, bool*, bool); //0xfb88b0
      MenuItem(char const*, char const*, bool, bool); //0xfb88a0
      MenuItemEx(char const*, char const*, char const*, bool, bool); //0xfb82a0
      NavClearPreferredPosForAxis(ImGuiAxis); //0xfec530
      NavHighlightActivated(unsigned int); //0xfec510
      NavInitRequestApplyResult(); //0xfeca20
      NavInitWindow(ImGuiWindow*, bool); //0xfe0b30
      NavMoveRequestApplyResult(); //0xfecb80
      NavMoveRequestButNoResultYet(); //0xfec7c0
      NavMoveRequestCancel(); //0xfe0090
      NavMoveRequestForward(int, int, int, int); //0xfec8d0
      NavMoveRequestResolveWithLastItem(ImGuiNavItemData*); //0xfe5e60
      NavMoveRequestResolveWithPastTreeNode(ImGuiNavItemData*, ImGuiNavTreeNodeData*); //0xfec7f0
      NavMoveRequestSubmit(int, int, int, int); //0xfe5d30
      NavMoveRequestTryWrapping(ImGuiWindow*, int); //0xfebb10
      NavRestoreHighlightAfterMove(); //0xfec920
      NavUpdateCurrentWindowIsScrollPushableX(); //0xfec780
      NewFrame(); //0xfd0070
      NewLine(); //0xf9cc50
      NextColumn(); //0xf981a0
      OpenPopup(char const*, int); //0xfeaf90
      OpenPopup(unsigned int, int); //0xfeb270
      OpenPopupEx(unsigned int, int); //0xfeb070
      OpenPopupOnItemClick(char const*, int); //0xfebb50
      PlotEx(ImGuiPlotType, char const*, float (*); //0xfb60b0
      PlotHistogram(char const*, float (*); //0xfb6ad0
      PlotHistogram(char const*, float const*, int, int, char const*, float, float, ImVec2, int); //0xfb6a60
      PlotLines(char const*, float (*); //0xfb6a00
      PlotLines(char const*, float const*, int, int, char const*, float, float, ImVec2, int); //0xfb6970
      PopButtonRepeat(); //0xfe4d00
      PopClipRect(); //0xfdd750
      PopColumnsBackground(); //0xf97790
      PopFocusScope(); //0xfe3fd0
      PopFont(); //0xfe48c0
      PopID(); //0xfe7160
      PopItemFlag(); //0xfe4a60
      PopItemWidth(); //0xfea270
      PopStyleColor(int); //0xfc4d40
      PopStyleVar(int); //0xfc4fb0
      PopTabStop(); //0xfe4c40
      PopTextWrapPos(); //0xfe4dd0
      ProgressBar(float, ImVec2 const&, char const*); //0xf9c710
      PushButtonRepeat(bool); //0xfe4c70
      PushClipRect(ImVec2 const&, ImVec2 const&, bool); //0xfdd6f0
      PushColumnClipRect(int); //0xf976c0
      PushColumnsBackground(); //0xf97710
      PushFocusScope(unsigned int); //0xfe2d60
      PushFont(ImFont*); //0xfe4760
      PushID(char const*); //0xfe6c30
      PushID(char const*, char const*); //0xfe6d40
      PushID(int); //0xfe6e60
      PushID(void const*); //0xfe6dd0
      PushItemFlag(int, bool); //0xfe49d0
      PushItemWidth(float); //0xfea020
      PushMultiItemsWidths(int, float); //0xfea0d0
      PushOverrideID(unsigned int); //0xfe6f60
      PushStyleColor(int, ImVec4 const&); //0xfc4c60
      PushStyleColor(int, unsigned int); //0xfc4b20
      PushStyleVar(int, ImVec2 const&); //0xfc4eb0
      PushStyleVar(int, float); //0xfc4dc0
      PushTabStop(bool); //0xfe4bb0
      PushTextWrapPos(float); //0xfe4d30
      RadioButton(char const*, bool); //0xf9c2d0
      RadioButton(char const*, int*, int); //0xf9c6e0
      RemoveContextHook(ImGuiContext*, unsigned int); //0xfcb910
      RemoveSettingsHandler(char const*); //0xfee530
      Render(); //0xfdf0f0
      RenderArrow(ImDrawList*, ImVec2, unsigned int, int, float); //0xf87f60
      RenderArrowDockMenu(ImDrawList*, ImVec2, float, unsigned int); //0xf88530
      RenderArrowPointingAt(ImDrawList*, ImVec2, ImVec2, int, unsigned int); //0xf88420
      RenderBullet(ImDrawList*, ImVec2, unsigned int); //0xf88090
      RenderCheckMark(ImDrawList*, ImVec2, unsigned int, float); //0xf88130
      RenderColorRectWithAlphaCheckerboard(ImDrawList*, ImVec2, ImVec2, unsigned int, float, ImVec2, float, int); //0xf89380
      RenderDragDropTargetRect(ImRect const&, ImRect const&); //0xfeda00
      RenderFrame(ImVec2, ImVec2, unsigned int, bool, float); //0xfc6030
      RenderFrameBorder(ImVec2, ImVec2, float); //0xfc62d0
      RenderMouseCursor(ImVec2, float, int, unsigned int, unsigned int, unsigned int); //0xfc6840
      RenderNavHighlight(ImRect const&, unsigned int, int); //0xfc6530
      RenderPlatformWindowsDefault(void*, void*); //0xfeff40
      RenderRectFilledRangeH(ImDrawList*, ImRect const&, unsigned int, float, float, float); //0xf88630
      RenderRectFilledWithHole(ImDrawList*, ImRect const&, ImRect const&, unsigned int, float); //0xf88f00
      RenderText(ImVec2, char const*, char const*, bool); //0xfc50d0
      RenderTextClipped(ImVec2 const&, ImVec2 const&, char const*, char const*, ImVec2 const*, ImVec2 const&, ImRect const*); //0xfc5ad0
      RenderTextClippedEx(ImDrawList*, ImVec2 const&, ImVec2 const&, char const*, char const*, ImVec2 const*, ImVec2 const&, ImRect const*); //0xfc5670
      RenderTextEllipsis(ImDrawList*, ImVec2 const&, ImVec2 const&, float, float, char const*, char const*, ImVec2 const*); //0xfc5b90
      RenderTextWrapped(ImVec2, char const*, char const*, float); //0xfc54d0
      ResetMouseDragDelta(int); //0xfe8ce0
      SameLine(float, float); //0xfe9cc0
      SaveIniSettingsToDisk(char const*); //0xfca7d0
      SaveIniSettingsToMemory(unsigned long*); //0xfeec70
      ScaleWindowsInViewport(ImGuiViewportP*, float); //0xfef7a0
      ScrollToItem(int); //0xfea620
      ScrollToRect(ImGuiWindow*, ImRect const&, int); //0xfea640
      ScrollToRectEx(ImGuiWindow*, ImRect const&, int); //0xfe6390
      Scrollbar(ImGuiAxis); //0xf9b0f0
      ScrollbarEx(ImRect const&, unsigned int, ImGuiAxis, long long*, long long, long long, int); //0xf9b2c0
      Selectable(char const*, bool*, int, ImVec2 const&); //0xfb54b0
      Selectable(char const*, bool, int, ImVec2 const&); //0xf9e7e0
      Separator(); //0xf9d040
      SeparatorEx(int, float); //0xf9cda0
      SeparatorText(char const*); //0xf9d4c0
      SeparatorTextEx(unsigned int, char const*, char const*, float); //0xf9d090
      SetActiveID(unsigned int, ImGuiWindow*); //0xfcd580
      SetActiveIdUsingAllKeyboardKeys(); //0xfceb30
      SetAllocatorFunctions(void* (*); //0xfc6c20
      SetClipboardText(char const*); //0xfce270
      SetColorEditOptions(int); //0xfb3c20
      SetColumnOffset(int, float); //0xf97500
      SetColumnWidth(int, float); //0xf97650
      SetCurrentContext(ImGuiContext*); //0xfc6c10
      SetCurrentFont(ImFont*); //0xfd68e0
      SetCurrentViewport(ImGuiWindow*, ImGuiViewportP*); //0xfdeb30
      SetCursorPos(ImVec2 const&); //0xfe9e60
      SetCursorPosX(float); //0xfe9eb0
      SetCursorPosY(float); //0xfe9ef0
      SetCursorScreenPos(ImVec2 const&); //0xfe9d90
      SetDragDropPayload(char const*, void const*, unsigned long, int); //0xfed450
      SetFocusID(unsigned int, ImGuiWindow*); //0xfec620
      SetHoveredID(unsigned int); //0xfcd6f0
      SetItemAllowOverlap(); //0xfe0050
      SetItemDefaultFocus(); //0xfe61f0
      SetItemKeyOwner(ImGuiKey, int); //0xfe8fa0
      SetItemTooltip(char const*, ...); //0xfeac90
      SetItemTooltipV(char const*, __va_list_tag*); //0xfead80
      SetKeyOwner(ImGuiKey, unsigned int, int); //0xfd6990
      SetKeyOwnersForKeyChord(int, unsigned int, int); //0xfe8d80
      SetKeyboardFocusHere(int); //0xfe5f10
      SetLastItemData(unsigned int, int, int, ImRect const&); //0xfce120
      SetMouseCursor(int); //0xfe8d20
      SetNavFocusScope(unsigned int); //0xfe4580
      SetNavID(unsigned int, ImGuiNavLayer, unsigned int, ImRect const&); //0xfec570
      SetNavWindow(ImGuiWindow*); //0xfe44f0
      SetNextFrameWantCaptureKeyboard(bool); //0xfe8d40
      SetNextFrameWantCaptureMouse(bool); //0xfe8d60
      SetNextItemAllowOverlap(); //0xfe0030
      SetNextItemOpen(bool, int); //0xfb5240
      SetNextItemSelectionUserData(long long); //0xfb5d70
      SetNextItemShortcut(int); //0xfe9220
      SetNextItemWidth(float); //0xfc2fe0
      SetNextWindowBgAlpha(float); //0xfe58f0
      SetNextWindowClass(ImGuiWindowClass const*); //0xfe5960
      SetNextWindowCollapsed(bool, int); //0xfe58a0
      SetNextWindowContentSize(ImVec2 const&); //0xfe5850
      SetNextWindowDockID(unsigned int, int); //0xfe5930
      SetNextWindowFocus(); //0xfe58d0
      SetNextWindowPos(ImVec2 const&, int, ImVec2 const&); //0xfe57d0
      SetNextWindowScroll(ImVec2 const&); //0xfe5880
      SetNextWindowSize(ImVec2 const&, int); //0xfd6de0
      SetNextWindowSizeConstraints(ImVec2 const&, ImVec2 const&, void (*); //0xfe5810
      SetNextWindowViewport(unsigned int); //0xfe5910
      SetScrollFromPosX(ImGuiWindow*, float, float); //0xfea650
      SetScrollFromPosX(float, float); //0xfea7f0
      SetScrollFromPosY(ImGuiWindow*, float, float); //0xfea690
      SetScrollFromPosY(float, float); //0xfea840
      SetScrollHereX(float); //0xfea890
      SetScrollHereY(float); //0xfea940
      SetScrollX(ImGuiWindow*, float); //0xfea750
      SetScrollX(float); //0xfea790
      SetScrollY(ImGuiWindow*, float); //0xfea770
      SetScrollY(float); //0xfea7c0
      SetShortcutRouting(int, unsigned int, int); //0xfe7c60
      SetStateStorage(ImGuiStorage*); //0xfe66e0
      SetTabItemClosed(char const*); //0xfbbf30
      SetTooltip(char const*, ...); //0xfdedb0
      SetTooltipV(char const*, __va_list_tag*); //0xfeac60
      SetWindowClipRectBeforeSetChannel(ImGuiWindow*, ImRect const&); //0xf93270
      SetWindowCollapsed(ImGuiWindow*, bool, int); //0xfe2f10
      SetWindowCollapsed(bool, int); //0xfe5530
      SetWindowCollapsed(char const*, bool, int); //0xfe55b0
      SetWindowDock(ImGuiWindow*, unsigned int, int); //0xfe2510
      SetWindowFocus(); //0xfe56c0
      SetWindowFocus(char const*); //0xfe56e0
      SetWindowFontScale(float); //0xfe5a60
      SetWindowHiddenAndSkipItemsForCurrentFrame(ImGuiWindow*); //0xfe5510
      SetWindowHitTestHole(ImGuiWindow*, ImVec2 const&, ImVec2 const&); //0xfe54c0
      SetWindowPos(ImGuiWindow*, ImVec2 const&, int); //0xfcf2b0
      SetWindowPos(ImVec2 const&, int); //0xfe52a0
      SetWindowPos(char const*, ImVec2 const&, int); //0xfe52c0
      SetWindowSize(ImGuiWindow*, ImVec2 const&, int); //0xfe2df0
      SetWindowSize(ImVec2 const&, int); //0xfe53c0
      SetWindowSize(char const*, ImVec2 const&, int); //0xfe53e0
      SetWindowViewport(ImGuiWindow*, ImGuiViewportP*); //0xfef5e0
      ShadeVertsLinearColorGradientKeepAlpha(ImDrawList*, int, int, ImVec2, ImVec2, unsigned int, unsigned int); //0xf7ba50
      ShadeVertsLinearUV(ImDrawList*, int, int, ImVec2 const&, ImVec2 const&, ImVec2 const&, ImVec2 const&, bool); //0xf7a2f0
      ShadeVertsTransformPos(ImDrawList*, int, int, ImVec2 const&, float, float, ImVec2 const&); //0xf7bdc0
      Shortcut(int, unsigned int, int); //0xfe9240
      ShowDebugLogWindow(bool*); //0x1001c70
      ShowFontAtlas(ImFontAtlas*); //0xffc7b0
      ShowIDStackToolWindow(bool*); //0x10024d0
      ShowMetricsWindow(bool*); //0xffd260
      ShrinkWidths(ImGuiShrinkWidthItem*, int, float); //0xf9d840
      Shutdown(); //0xfc8600
      SliderAngle(char const*, float*, float, float, char const*, int); //0xfa8630
      SliderBehavior(ImRect const&, unsigned int, int, void*, void const*, void const*, char const*, int, ImRect*); //0xfa3360
      SliderFloat(char const*, float*, float, float, char const*, int); //0xfa84b0
      SliderFloat2(char const*, float*, float, float, char const*, int); //0xfa8510
      SliderFloat3(char const*, float*, float, float, char const*, int); //0xfa8570
      SliderFloat4(char const*, float*, float, float, char const*, int); //0xfa85d0
      SliderInt(char const*, int*, int, int, char const*, int); //0xfa86d0
      SliderInt2(char const*, int*, int, int, char const*, int); //0xfa8730
      SliderInt3(char const*, int*, int, int, char const*, int); //0xfa87a0
      SliderInt4(char const*, int*, int, int, char const*, int); //0xfa8810
      SliderScalar(char const*, int, void*, void const*, void const*, char const*, int); //0xfa7e60
      SliderScalarN(char const*, int, void*, int, void const*, void const*, char const*, int); //0xfa8300
      SmallButton(char const*); //0xf9a860
      Spacing(); //0xf9cb50
      SplitterBehavior(ImRect const&, unsigned int, ImGuiAxis, float*, float*, float, float, float, float, unsigned int); //0xf9d510
      StartMouseMovingWindow(ImGuiWindow*); //0xfce580
      StartMouseMovingWindowOrNode(ImGuiWindow*, ImGuiDockNode*, bool); //0xfceb70
      StyleColorsClassic(ImGuiStyle*); //0xf72ae0
      StyleColorsDark(ImGuiStyle*); //0xf72750
      StyleColorsLight(ImGuiStyle*); //0xf72e70
      TabBarAddTab(ImGuiTabBar*, int, ImGuiWindow*); //0xfba370
      TabBarCloseTab(ImGuiTabBar*, ImGuiTabItem*); //0xfba540
      TabBarFindMostRecentlySelectedTabForActiveWindow(ImGuiTabBar*); //0xfba2e0
      TabBarFindTabByID(ImGuiTabBar*, unsigned int); //0xfba290
      TabBarFindTabByOrder(ImGuiTabBar*, int); //0xfba2c0
      TabBarGetCurrentTab(ImGuiTabBar*); //0xfba320
      TabBarGetTabName(ImGuiTabBar*, ImGuiTabItem*); //0xfba340
      TabBarProcessReorder(ImGuiTabBar*); //0xfba6c0
      TabBarQueueFocus(ImGuiTabBar*, ImGuiTabItem*); //0xfba580
      TabBarQueueReorder(ImGuiTabBar*, ImGuiTabItem*, int); //0xfba590
      TabBarQueueReorderFromMousePos(ImGuiTabBar*, ImGuiTabItem*, ImVec2); //0xfba5a0
      TabBarRemoveTab(ImGuiTabBar*, unsigned int); //0xfba4b0
      TabItemBackground(ImDrawList*, ImRect const&, int, unsigned int); //0xfbb6a0
      TabItemButton(char const*, int); //0xfbb5c0
      TabItemCalcSize(ImGuiWindow*); //0xfbc070
      TabItemCalcSize(char const*, bool); //0xfbb600
      TabItemEx(ImGuiTabBar*, char const*, bool*, int, ImGuiWindow*); //0xfba860
      TabItemLabelAndCloseButton(ImDrawList*, ImRect const&, int, ImVec2, char const*, unsigned int, unsigned int, bool, bool*, bool*); //0xfbbb40
      TableAngledHeadersRow(); //0xf94dd0
      TableAngledHeadersRowEx(float, float); //0xf94df0
      TableBeginApplyRequests(ImGuiTable*); //0xf8e420
      TableBeginCell(ImGuiTable*, int); //0xf93420
      TableBeginContextMenuPopup(ImGuiTable*); //0xf903f0
      TableBeginInitMemory(ImGuiTable*, int); //0xf8e0e0
      TableBeginRow(ImGuiTable*); //0xf93040
      TableDrawBorders(ImGuiTable*); //0xf91a50
      TableDrawDefaultContextMenu(ImGuiTable*, int); //0xf90440
      TableEndCell(ImGuiTable*); //0xf93170
      TableEndRow(ImGuiTable*); //0xf91270
      TableFindByID(unsigned int); //0xf8ccc0
      TableFixColumnSortDirection(ImGuiTable*, ImGuiTableColumn*); //0xf93a00
      TableGcCompactSettings(); //0xf96720
      TableGcCompactTransientBuffers(ImGuiTable*); //0xf96620
      TableGcCompactTransientBuffers(ImGuiTableTempData*); //0xf96700
      TableGetBoundSettings(ImGuiTable*); //0xf95c00
      TableGetCellBgRect(ImGuiTable const*, int); //0xf92dc0
      TableGetColumnCount(); //0xf92c70
      TableGetColumnFlags(int); //0xf92d70
      TableGetColumnIndex(); //0xf932b0
      TableGetColumnName(ImGuiTable const*, int); //0xf92d00
      TableGetColumnName(int); //0xf92c90
      TableGetColumnNextSortDirection(ImGuiTableColumn*); //0xf93a40
      TableGetColumnResizeID(ImGuiTable*, int, int); //0xf908a0
      TableGetColumnWidthAuto(ImGuiTable*, ImGuiTableColumn*); //0xf8fde0
      TableGetHeaderAngledMaxLabelWidth(); //0xf94050
      TableGetHeaderRowHeight(); //0xf93f30
      TableGetHoveredColumn(); //0xf92e10
      TableGetHoveredRow(); //0xf92e40
      TableGetMaxColumnWidth(ImGuiTable const*, int); //0xf8fe70
      TableGetRowIndex(); //0xf92f40
      TableGetSortSpecs(); //0xf939b0
      TableHeader(char const*); //0xf94420
      TableHeadersRow(); //0xf94160
      TableLoadSettings(ImGuiTable*); //0xf8e1e0
      TableMergeDrawChannels(ImGuiTable*); //0xf91f60
      TableNextColumn(); //0xf935e0
      TableNextRow(int, float); //0xf92f60
      TableOpenContextMenu(int); //0xf919e0
      TablePopBackgroundChannel(); //0xf93930
      TablePushBackgroundChannel(); //0xf938b0
      TableRemove(ImGuiTable*); //0xf96580
      TableResetSettings(ImGuiTable*); //0xf8e1c0
      TableSaveSettings(ImGuiTable*); //0xf92800
      TableSetBgColor(int, unsigned int, int); //0xf92e90
      TableSetColumnEnabled(int, bool); //0xf92d40
      TableSetColumnIndex(int); //0xf932d0
      TableSetColumnSortDirection(int, int, bool); //0xf93ab0
      TableSetColumnWidth(int, float); //0xf8e5f0
      TableSetColumnWidthAutoAll(ImGuiTable*); //0xf93870
      TableSetColumnWidthAutoSingle(ImGuiTable*, int); //0xf908d0
      TableSettingsAddSettingsHandler(); //0xf95c40
      TableSettingsCreate(unsigned int, int); //0xf95a10
      TableSettingsFindByID(unsigned int); //0xf95bb0
      TableSetupColumn(char const*, int, float, unsigned int); //0xf92990
      TableSetupDrawChannels(ImGuiTable*); //0xf8ff50
      TableSetupScrollFreeze(int, int); //0xf92b60
      TableSortSpecsBuild(ImGuiTable*); //0xf90700
      TableSortSpecsSanitize(ImGuiTable*); //0xf93d00
      TableUpdateBorders(ImGuiTable*); //0xf900f0
      TableUpdateColumnsWeightFromWidth(ImGuiTable*); //0xf937e0
      TableUpdateLayout(ImGuiTable*); //0xf8e880
      TeleportMousePos(ImVec2 const&); //0xfe8b90
      TempInputScalar(ImRect const&, unsigned int, char const*, int, void*, char const*, void const*, void const*); //0xfa27f0
      TempInputText(ImRect const&, unsigned int, char const*, char*, int, int); //0xfa9020
      TestKeyOwner(ImGuiKey, unsigned int); //0xfe82c0
      TestShortcutRouting(int, unsigned int); //0xfe7fe0
      Text(char const*, ...); //0xf99160
      TextColored(ImVec4 const&, char const*, ...); //0xf99300
      TextColoredV(ImVec4 const&, char const*, __va_list_tag*); //0xf99430
      TextDisabled(char const*, ...); //0xf994d0
      TextDisabledV(char const*, __va_list_tag*); //0xf99610
      TextEx(char const*, char const*, int); //0xf98c70
      TextUnformatted(char const*, char const*); //0xf99150
      TextV(char const*, __va_list_tag*); //0xf99280
      TextWrapped(char const*, ...); //0xf996c0
      TextWrappedV(char const*, __va_list_tag*); //0xf99780
      TranslateWindowsInViewport(ImGuiViewportP*, ImVec2 const&, ImVec2 const&); //0xfef610
      TreeNode(char const*); //0xfb4020
      TreeNode(char const*, char const*, ...); //0xfb3c80
      TreeNode(void const*, char const*, ...); //0xfb3e50
      TreeNodeBehavior(unsigned int, int, char const*, char const*); //0xfb4070
      TreeNodeEx(char const*, int); //0xfb4c10
      TreeNodeEx(char const*, int, char const*, ...); //0xfb4c70
      TreeNodeEx(void const*, int, char const*, ...); //0xfb4da0
      TreeNodeExV(char const*, int, char const*, __va_list_tag*); //0xfb3db0
      TreeNodeExV(void const*, int, char const*, __va_list_tag*); //0xfb3f80
      TreeNodeSetOpen(unsigned int, bool); //0xfb4ed0
      TreeNodeUpdateNextOpen(unsigned int, int); //0xfb4f00
      TreeNodeV(char const*, char const*, __va_list_tag*); //0xfb4ad0
      TreeNodeV(void const*, char const*, __va_list_tag*); //0xfb4b70
      TreePop(); //0xfb5160
      TreePush(char const*); //0xfb50c0
      TreePush(void const*); //0xfb5110
      TreePushOverrideID(unsigned int); //0xfb5080
      TypingSelectFindBestLeadingMatch(ImGuiTypingSelectRequest*, int, char const* (*); //0xfb5c40
      TypingSelectFindMatch(ImGuiTypingSelectRequest*, int, char const* (*); //0xfb5910
      TypingSelectFindNextSingleCharMatch(ImGuiTypingSelectRequest*, int, char const* (*); //0xfb5b10
      Unindent(float); //0xfe9fc0
      UpdateHoveredWindowAndCaptureFlags(); //0xfcfae0
      UpdateInputEvents(bool); //0xfd5ef0
      UpdateMouseMovingWindowEndFrame(); //0xfcf660
      UpdateMouseMovingWindowNewFrame(); //0xfcf010
      UpdatePlatformWindows(); //0xfef980
      UpdateWindowParentAndRootLinks(ImGuiWindow*, int, ImGuiWindow*); //0xfe23b0
      VSliderFloat(char const*, ImVec2 const&, float*, float, float, char const*, int); //0xfa8c20
      VSliderInt(char const*, ImVec2 const&, int*, int, int, char const*, int); //0xfa8c80
      VSliderScalar(char const*, ImVec2 const&, int, void*, void const*, void const*, char const*, int); //0xfa8880
      Value(char const*, bool); //0xfb6b30
      Value(char const*, float, char const*); //0xfb6ba0
      Value(char const*, int); //0xfb6b60
      Value(char const*, unsigned int); //0xfb6b80
};

class ImGuiContext {
      ImGuiContext(ImFontAtlas*); //0xfc6d30
      ~ImGuiContext(); //0x100d9c0
};

class ImGuiDockContext {
      ~ImGuiDockContext(); //0x1006f60
};

class ImGuiDockNode {
      ImGuiDockNode(unsigned int); //0xff7da0
      ~ImGuiDockNode(); //0xff7f10
};

class ImGuiDockPreviewData {
      ImGuiDockPreviewData(); //0xff7400
};

class ImGuiIDStackTool {
      ~ImGuiIDStackTool(); //0x1006bf0
};

class ImGuiIO {
      AddFocusEvent(bool); //0xfc03e0
      AddInputCharacter(unsigned int); //0xfbf250
      AddInputCharacterUTF16(unsigned short); //0xfbf340
      AddInputCharactersUTF8(char const*); //0xfbf620
      AddKeyAnalogEvent(ImGuiKey, bool, float); //0xfbfae0
      AddKeyEvent(ImGuiKey, bool); //0xfbfdc0
      AddMouseButtonEvent(int, bool); //0xfc0000
      AddMousePosEvent(float, float); //0xfbfe30
      AddMouseSourceEvent(ImGuiMouseSource); //0xfc0290
      AddMouseViewportEvent(unsigned int); //0xfc02a0
      AddMouseWheelEvent(float, float); //0xfc0180
      ClearEventsQueue(); //0xfbf910
      ClearInputCharacters(); //0xfbfab0
      ClearInputKeys(); //0xfbf9e0
      ImGuiIO(); //0xfbf0a0
      SetAppAcceptingEvents(bool); //0xfbfe20
      SetKeyEventNativeData(ImGuiKey, int, int, int); //0xfbfdf0
      ~ImGuiIO(); //0x1008420
};

class ImGuiInputTextCallbackData {
      DeleteChars(int, int); //0xfae6e0
      ImGuiInputTextCallbackData(); //0xfae6c0
      InsertChars(int, char const*, char const*); //0xfae750
};

class ImGuiInputTextDeactivatedState {
      ~ImGuiInputTextDeactivatedState(); //0x1007160
};

class ImGuiInputTextState {
      ClearFreeMemory(); //0xfcb640
      OnKeyPressed(int); //0xfad210
      ~ImGuiInputTextState(); //0x1007210
};

class ImGuiKeyRoutingTable {
      Clear(); //0xfcac40
      ~ImGuiKeyRoutingTable(); //0x1007f50
};

class ImGuiListClipper {
      Begin(int, float); //0xfc3a50
      End(); //0xfc39b0
      ImGuiListClipper(); //0xfc38e0
      IncludeItemsByIndex(int, int); //0xfc3f80
      Step(); //0xfc4090
      ~ImGuiListClipper(); //0xfc3900
};

class ImGuiListClipperData {
      ~ImGuiListClipperData(); //0xfc3da0
};

class ImGuiMenuColumns {
      CalcNextTotalWidth(bool); //0xfb6cd0
      DeclColumns(float, float, float, float); //0xfb6d70
      Update(float, bool); //0xfb6c30
};

class ImGuiOldColumns {
      ~ImGuiOldColumns(); //0xf97a00
};

class ImGuiPlatformIO {
      ~ImGuiPlatformIO(); //0x10082c0
};

class ImGuiStackSizes {
      CompareWithContextState(ImGuiContext*); //0xfe41c0
      SetToContextState(ImGuiContext*); //0xfe2cf0
};

class ImGuiStorage {
      BuildSortByKey(); //0xfc23f0
      GetBool(unsigned int, bool); //0xfc24a0
      GetBoolRef(unsigned int, bool); //0xfc2710
      GetFloat(unsigned int, float); //0xfc2510
      GetFloatRef(unsigned int, float); //0xfc2720
      GetInt(unsigned int, int); //0xfc2430
      GetIntRef(unsigned int, int); //0xfc25f0
      GetVoidPtr(unsigned int); //0xfc2580
      GetVoidPtrRef(unsigned int, void*); //0xfc2840
      SetAllInt(int); //0xfc2cd0
      SetBool(unsigned int, bool); //0xfc2a80
      SetFloat(unsigned int, float); //0xfc2a90
      SetInt(unsigned int, int); //0xfc2960
      SetVoidPtr(unsigned int, void*); //0xfc2bb0
      ~ImGuiStorage(); //0xfcc630
};

class ImGuiStyle {
      ImGuiStyle(); //0xfbedc0
      ScaleAllSizes(float); //0xfbeee0
};

class ImGuiTabBar {
      ImGuiTabBar(); //0xfb8900
      ~ImGuiTabBar(); //0x100f5f0
};

class ImGuiTable {
      ~ImGuiTable(); //0xf98bd0
};

class ImGuiTableTempData {
      ~ImGuiTableTempData(); //0xf8e090
};

class ImGuiTextBuffer {
      append(char const*, char const*); //0xfc3390
      appendf(char const*, ...); //0xfc35d0
      appendfv(char const*, __va_list_tag*); //0xfc3690
      ~ImGuiTextBuffer(); //0xf98bb0
};

class ImGuiTextFilter {
      Build(); //0xfc2d60
      Draw(char const*, float); //0xfc2f80
      ImGuiTextFilter(char const*); //0xfc2d00
      PassFilter(char const*, char const*); //0xfc3130
      ~ImGuiTextFilter(); //0x11c3e90
};

class ImGuiTextFilter::ImGuiTextRange::split(char, ImVector<ImGuiTextFilter {
      ImGuiTextRange>*); //0xfc3000
};

class ImGuiTextIndex {
      append(char const*, int, int); //0xfc37a0
      ~ImGuiTextIndex(); //0x1006ca0
};

class ImGuiViewportP {
      ImGuiViewportP(); //0xfca540
      ~ImGuiViewportP(); //0x100a7d0
};

class ImGuiWindow {
      GetID(char const*, char const*); //0xfcbf50
      GetID(int); //0xfe6ba0
      GetID(void const*); //0xfe6ad0
      GetIDFromRectangle(ImRect const&); //0xfcdb50
      ImGuiWindow(ImGuiContext*, char const*); //0xfcb950
      TitleBarRect(); //0xfcf8e0
      ~ImGuiWindow(); //0xfcc9a0
};

class ImGuiWindowTempData {
      ~ImGuiWindowTempData(); //0xfcc6e0
};

class ImPlot {
      AddColormap(char const*, ImVec4 const*, int, bool); //0x11c0570
      AddColormap(char const*, unsigned int const*, int, bool); //0x11c0680
      AddTextCentered(ImDrawList*, ImVec2, unsigned int, char const*, char const*); //0x11a75b0
      AddTextVertical(ImDrawList*, ImVec2, unsigned int, char const*, char const*); //0x11a7320
      AddTicksCustom(double const*, char const* const*, int, ImPlotTicker&, int (*); //0x11aa270
      AddTicksLogarithmic(ImPlotRange const&, int, int, int, ImPlotTicker&, int (*); //0x11a9840
      AddTime(ImPlotTime const&, int, int); //0x11aa600
      Annotation(double, double, ImVec4 const&, ImVec2 const&, bool, bool); //0x11bcd70
      Annotation(double, double, ImVec4 const&, ImVec2 const&, bool, char const*, ...); //0x11bce90
      AnnotationV(double, double, ImVec4 const&, ImVec2 const&, bool, char const*, __va_list_tag*); //0x11bcf40
      ApplyNextPlotData(int); //0x11b38f0
      BeginAlignedPlots(char const*, bool); //0x11bffd0
      BeginDragDropSourceAxis(int, int); //0x11bfe40
      BeginDragDropSourceItem(char const*, int); //0x11bfee0
      BeginDragDropSourcePlot(int); //0x11bfdb0
      BeginDragDropTargetAxis(int); //0x11bfc60
      BeginDragDropTargetLegend(); //0x11bfd00
      BeginDragDropTargetPlot(); //0x11bfbe0
      BeginItem(char const*, int, int); //0x106bec0
      BeginLegendPopup(char const*, int); //0x11bf580
      BeginPlot(char const*, ImVec2 const&, int); //0x11b4640
      BeginPlot(char const*, char const*, char const*, ImVec2 const&, int, int, int, int, int, char const*, char const*); //0x11c5220
      BeginSubplots(char const*, int, int, ImVec2 const&, int, float*, float*); //0x11ba2e0
      BustColorCache(char const*); //0x106bc70
      BustItemCache(); //0x106ba20
      BustPlotCache(); //0x11a8740
      CalcLegendSize(ImPlotItemGroup&, ImVec2 const&, ImVec2 const&, bool); //0x11a8940
      CalcLogarithmicExponents(ImPlotRange const&, float, bool, int&, int&, int&); //0x11a96d0
      CalcSymLogPixel(double, ImPlotRange const&, float); //0x11a9bd0
      CancelPlotSelection(); //0x11bcd00
      CeilTime(ImPlotTime const&, int); //0x11aaab0
      ColormapButton(char const*, ImVec2 const&, int); //0x11c1d30
      ColormapIcon(int); //0x11c22b0
      ColormapScale(char const*, double, double, ImVec2 const&, char const*, int, int); //0x11c0e60
      ColormapSlider(char const*, float*, ImVec4*, char const*, int); //0x11c1920
      CombineDateTime(ImPlotTime const&, ImPlotTime const&); //0x11aabc0
      CreateContext(); //0x11a7820
      DestroyContext(ImPlotContext*); //0x11a8130
      DragLineX(int, double*, ImVec4 const&, float, int); //0x11bde80
      DragLineY(int, double*, ImVec4 const&, float, int); //0x11be310
      DragPoint(int, double*, double*, ImVec4 const&, float, int); //0x11bd9c0
      DragRect(int, ImPlotRect*, ImVec4 const&, int); //0x11bf4e0
      DragRect(int, double*, double*, double*, double*, ImVec4 const&, int); //0x11be7b0
      EndAlignedPlots(); //0x11c0080
      EndDragDropSource(); //0x11bff90
      EndDragDropTarget(); //0x11bfd70
      EndItem(); //0x103def0
      EndLegendPopup(); //0x11bf650
      EndPlot(); //0x11b6d50
      EndSubplots(); //0x11bbbd0
      FloorTime(ImPlotTime const&, int); //0x11aa990
      FormatDate(ImPlotTime const&, char*, int, int, bool); //0x11aaf40
      FormatDateTime(ImPlotTime const&, char*, int, ImPlotDateTimeSpec); //0x11ab0f0
      FormatTime(ImPlotTime const&, char*, int, int, bool); //0x11aaca0
      GetAutoColor(int); //0x11a7120
      GetColormapColor(int, int); //0x11c0a60
      GetColormapColorU32(int, int); //0x11c0a10
      GetColormapCount(); //0x11c06a0
      GetColormapIndex(char const*); //0x11c06f0
      GetColormapName(int); //0x11c06c0
      GetColormapSize(int); //0x11c09e0
      GetCurrentContext(); //0x11a8170
      GetCurrentItem(); //0x10437b0
      GetCurrentPlot(); //0x11a8730
      GetDateTimeWidth(ImPlotDateTimeSpec); //0x11abf70
      GetDateTimeWidth(ImPlotDateTimeSpec); //0x16988f8
      GetDateTimeWidth(ImPlotDateTimeSpec); //0x1698908
      GetGmtTime(ImPlotTime const&, tm*); //0x11aa4d0
      GetInputMap(); //0x11c20a0
      GetItem(char const*); //0x10437c0
      GetLastItemColor(); //0x106b9f0
      GetLocTime(ImPlotTime const&, tm*); //0x11aa500
      GetLocationPos(ImRect const&, ImVec2 const&, int, ImVec2 const&); //0x11a8890
      GetMarkerName(int); //0x11a70f0
      GetPlot(char const*); //0x11a86d0
      GetPlotDrawList(); //0x11bde70
      GetPlotLimits(int, int); //0x11bca40
      GetPlotMousePos(int, int); //0x11bc9f0
      GetPlotPos(); //0x11bc950
      GetPlotSelection(int, int); //0x11bcbd0
      GetPlotSize(); //0x11bc9a0
      GetStyle(); //0x11c00c0
      GetStyleColorName(int); //0x11a70e0
      GetTimeStep(int, int); //0x499690
      GetTimeStep(int, int); //0x4996c0
      GetTimeStep(int, int); //0x4996e0
      GetTimeStep(int, int); //0x499700
      GetTimeStep(int, int); //0x499710
      GetTimeStep(int, int); //0x11ac0c0
      GetUnitForRange(double); //0x1680960
      GetYear(ImPlotTime const&); //0x11aa5c0
      HideNextItem(bool, int); //0x11bcd50
      Initialize(ImPlotContext*); //0x11a7b20
      IsAxisHovered(int); //0x11bcb20
      IsItemHidden(char const*); //0x1029440
      IsLegendEntryHovered(char const*); //0x11bf500
      IsPlotHovered(); //0x11bcae0
      IsPlotSelected(); //0x11bcb90
      IsSubplotsHovered(); //0x11bcb70
      ItemIcon(ImVec4 const&); //0x11c20f0
      ItemIcon(unsigned int); //0x11c21d0
      LabelAxisValue(ImPlotAxis const&, double, char*, int, bool); //0x11afb10
      LegendSortingComp(void const*, void const*); //0x11a8a80
      Locator_Default(ImPlotTicker&, ImPlotRange const&, float, bool, int (*); //0x11a90d0
      Locator_Log10(ImPlotTicker&, ImPlotRange const&, float, bool, int (*); //0x11a9a90
      Locator_SymLog(ImPlotTicker&, ImPlotRange const&, float, bool, int (*); //0x11a9cc0
      Locator_Time(ImPlotTicker&, ImPlotRange const&, float, bool, int (*); //0x11ab180
      MakeTime(int, int, int, int, int, int, int); //0x11aa510
      MapInputDefault(ImPlotInputMap*); //0x11a6f30
      MapInputReverse(ImPlotInputMap*); //0x11c20b0
      MkGmtTime(tm*); //0x11aa4b0
      MkLocTime(tm*); //0x11aa4e0
      NextColormapColor(); //0x11c0990
      NextColormapColorU32(); //0x11c0940
      NiceNum(double, bool); //0x11a7740
      PadAndDatumAxesX(ImPlotPlot&, float&, float&, ImPlotAlignmentData*); //0x11b00b0
      PadAndDatumAxesY(ImPlotPlot&, float&, float&, ImPlotAlignmentData*); //0x11b0410
      PixelsToPlot(ImVec2 const&, int, int); //0x11bc750
      PixelsToPlot(float, float, int, int); //0x11bc5c0
      PlotBarsG(char const*, ImPlotPoint (*); //0x106cfd0
      PlotDigitalG(char const*, ImPlotPoint (*); //0x106d470
      PlotDummy(char const*, int); //0x106e000
      PlotImage(char const*, void*, ImPlotPoint const&, ImPlotPoint const&, ImVec2 const&, ImVec2 const&, ImVec4 const&, int); //0x106da00
      PlotLineG(char const*, ImPlotPoint (*); //0x106c450
      PlotScatterG(char const*, ImPlotPoint (*); //0x106c8b0
      PlotShadedG(char const*, ImPlotPoint (*); //0x106cdd0
      PlotStairsG(char const*, ImPlotPoint (*); //0x106caa0
      PlotText(char const*, double, double, ImVec2 const&, int); //0x106dbe0
      PlotToPixels(ImPlotPoint const&, int, int); //0x11bc930
      PlotToPixels(double, double, int, int); //0x11bc770
      PopColormap(int); //0x11c0810
      PopPlotClipRect(); //0x11b9c80
      PopStyleColor(int); //0x11bc3d0
      PopStyleVar(int); //0x11bc430
      PushColormap(char const*); //0x11c07e0
      PushColormap(int); //0x11c0720
      PushPlotClipRect(float); //0x11b9bd0
      PushStyleColor(int, ImVec4 const&); //0x11c00d0
      PushStyleColor(int, unsigned int); //0x11bb940
      PushStyleVar(int, ImVec2 const&); //0x11bba80
      PushStyleVar(int, float); //0x11c01f0
      PushStyleVar(int, int); //0x11c0330
      RegisterOrGetItem(char const*, int, bool*); //0x106b7b0
      RenderColorBar(unsigned int const*, int, ImDrawList&, ImRect const&, bool, bool, bool); //0x11c0bc0
      ResetCtxForNextAlignedPlots(ImPlotContext*); //0x11a82b0
      ResetCtxForNextPlot(ImPlotContext*); //0x11a8180
      ResetCtxForNextSubplot(ImPlotContext*); //0x11a82c0
      RoundTime(ImPlotTime const&, int); //0x11aab00
      SampleColormap(float, int); //0x11c0b30
      SampleColormapU32(float, int); //0x11c0ab0
      SetAxes(int, int); //0x11bc560
      SetAxis(int); //0x11bc510
      SetCurrentContext(ImPlotContext*); //0x11a8120
      SetImGuiContext(ImGuiContext*); //0x11a7810
      SetNextAxesLimits(double, double, double, double, int); //0x11b45d0
      SetNextAxesToFit(); //0x11b4620
      SetNextAxisLimits(int, double, double, int); //0x11b4550
      SetNextAxisLinks(int, double*, double*); //0x11b4590
      SetNextAxisToFit(int); //0x11b45b0
      SetNextErrorBarStyle(ImVec4 const&, float, float); //0x106b9c0
      SetNextFillStyle(ImVec4 const&, float); //0x106b960
      SetNextLineStyle(ImVec4 const&, float); //0x106b940
      SetNextMarkerStyle(int, float, ImVec4 const&, float, ImVec4 const&); //0x106b980
      SetupAxes(char const*, char const*, int, int); //0x11b4440
      SetupAxesLimits(double, double, double, double, int); //0x11b4470
      SetupAxis(int, char const*, int); //0x11b3ce0
      SetupAxisFormat(int, char const*); //0x11b3e10
      SetupAxisFormat(int, int (*); //0x11b3e90
      SetupAxisLimits(int, double, double, int); //0x11b3db0
      SetupAxisLimitsConstraints(int, double, double); //0x11b43e0
      SetupAxisLinks(int, double*, double*); //0x11b3e50
      SetupAxisScale(int, double (*); //0x11b43a0
      SetupAxisScale(int, int); //0x11b4200
      SetupAxisTicks(int, double const*, int, char const* const*, bool); //0x11b3ec0
      SetupAxisTicks(int, double, double, int, char const* const*, bool); //0x11b3fc0
      SetupAxisZoomConstraints(int, double, double); //0x11b4410
      SetupFinish(); //0x11b4ec0
      SetupLegend(int, int); //0x11b4500
      SetupMouseText(int, int); //0x11b4530
      ShowAltLegend(char const*, bool, ImVec2, bool); //0x11bf690
      ShowAxisContextMenu(ImPlotAxis&, ImPlotAxis*, bool); //0x11ac3c0
      ShowAxisMetrics(ImPlotPlot const&, ImPlotAxis const&); //0x11c4000
      ShowColormapSelector(char const*); //0x11c27e0
      ShowDatePicker(char const*, int*, ImPlotTime*, ImPlotTime const*, ImPlotTime const*); //0x11ada90
      ShowInputMapSelector(char const*); //0x11c28f0
      ShowLegendContextMenu(ImPlotLegend&, bool); //0x11af020
      ShowLegendEntries(ImPlotItemGroup&, ImRect const&, bool, ImVec2 const&, ImVec2 const&, bool, ImDrawList&); //0x11a8ad0
      ShowMetricsWindow(bool*); //0x11c4250
      ShowPlotContextMenu(ImPlotPlot&); //0x11af520
      ShowStyleEditor(ImPlotStyle*); //0x11c2980
      ShowStyleSelector(char const*); //0x11c2490
      ShowSubplotsContextMenu(ImPlotSubplot&); //0x11af340
      ShowTicksMetrics(ImPlotTicker const&); //0x11c3fc0
      ShowTimePicker(char const*, ImPlotTime*); //0x11ad320
      ShowUserGuide(); //0x11c3eb0
      StyleColorsAuto(ImPlotStyle*); //0x11a7020
      StyleColorsClassic(ImPlotStyle*); //0x11c2500
      StyleColorsDark(ImPlotStyle*); //0x11c25f0
      StyleColorsLight(ImPlotStyle*); //0x11c26e0
      SubplotNextCell(); //0x11b9f20
      SubplotSetCell(int); //0x11ba290
      SubplotSetCell(int, int); //0x11b9f80
      Tag(int, double, ImVec4 const&, bool); //0x11bd530
      Tag(int, double, ImVec4 const&, char const*, ...); //0x11bd470
      TagV(int, double, ImVec4 const&, char const*, __va_list_tag*); //0x11bd200
      TagX(double, ImVec4 const&, bool); //0x11bd600
      TagX(double, ImVec4 const&, char const*, ...); //0x11bd6d0
      TagXV(double, ImVec4 const&, char const*, __va_list_tag*); //0x11bd7b0
      TagY(double, ImVec4 const&, bool); //0x11bd7e0
      TagY(double, ImVec4 const&, char const*, ...); //0x11bd8b0
      TagYV(double, ImVec4 const&, char const*, __va_list_tag*); //0x11bd990
      UpdateAxisColors(ImPlotAxis&); //0x11afdc0
      UpdateInput(ImPlotPlot&); //0x11b0740
};

class ImPlot::Fitter1<ImPlot::GetterFuncPtr> {
      Fit(ImPlotAxis&, ImPlotAxis&); //0x10d06c0
};

class ImPlot::Fitter2<ImPlot::GetterFuncPtr, ImPlot::GetterFuncPtr> {
      Fit(ImPlotAxis&, ImPlotAxis&); //0x1124600
};

class ImPlot::FitterRect {
      Fit(ImPlotAxis&, ImPlotAxis&); //0x119ccf0
};

class ImPlot::RendererLineStrip<ImPlot::GetterFuncPtr>::RendererLineStrip(ImPlot {
      GetterFuncPtr const&, unsigned int, float); //0x10d3570
};

class ImPlot::RendererLineStripSkip<ImPlot::GetterFuncPtr>::RendererLineStripSkip(ImPlot {
      GetterFuncPtr const&, unsigned int, float); //0x10d2dd0
};

class ImPlot::RendererShaded<ImPlot::GetterFuncPtr, ImPlot::GetterFuncPtr>::RendererShaded(ImPlot::GetterFuncPtr const&, ImPlot {
      GetterFuncPtr const&, unsigned int); //0x1124fc0
};

class ImPlot::RendererStairsPost<ImPlot::GetterFuncPtr>::RendererStairsPost(ImPlot {
      GetterFuncPtr const&, unsigned int, float); //0x1103520
};

class ImPlot::RendererStairsPostShaded<ImPlot::GetterFuncPtr>::RendererStairsPostShaded(ImPlot {
      GetterFuncPtr const&, unsigned int); //0x1102500
};

class ImPlot::RendererStairsPre<ImPlot::GetterFuncPtr>::RendererStairsPre(ImPlot {
      GetterFuncPtr const&, unsigned int, float); //0x1102d40
};

class ImPlot::RendererStairsPreShaded<ImPlot::GetterFuncPtr>::RendererStairsPreShaded(ImPlot {
      GetterFuncPtr const&, unsigned int); //0x1101df0
};

class ImPlotAnnotationCollection {
      AppendV(ImVec2 const&, ImVec2 const&, unsigned int, unsigned int, bool, char const*, __va_list_tag*); //0x11bd0d0
};

class ImPlotAxis {
      ApplyFit(float); //0x11b9cc0
      PullLinks(); //0x11b39d0
      SetRange(double, double); //0x11ad850
};

class ImPlotColormapData {
      Append(char const*, unsigned int const*, int, bool); //0x11a82e0
      RebuildTables(); //0x11c5b70
      _AppendTable(int); //0x11c55f0
      ~ImPlotColormapData(); //0x11c52c0
};

class ImPlotContext {
      ~ImPlotContext(); //0x11c5c70
};

class ImPlotInputMap {
      ImPlotInputMap(); //0x11a6f00
};

class ImPlotPlot {
      ImPlotPlot(); //0x11c62a0
      IsInputLocked(); //0x11b36d0
      ~ImPlotPlot(); //0x11c5ea0
};

class ImPlotStyle {
      ImPlotStyle(); //0x11a6f70
};

class ImPlotSubplot {
      ~ImPlotSubplot(); //0x11c60f0
};

class ImPlotTagCollection {
      AppendV(int, double, unsigned int, unsigned int, char const*, __va_list_tag*); //0x11bd350
};

class ImPlotTicker {
      AddTick(double, bool, int, bool, char const*); //0x11aa300
      AddTick(double, bool, int, bool, int (*); //0x11a9500
};

class ImPool<ImGuiDockContextPruneNodeData> {
      Clear(); //0x100c940
      GetOrAddByKey(unsigned int); //0x100c360
      ~ImPool(); //0x100c410
};

class ImPool<ImGuiTabBar> {
      Add(); //0xfbecb0
      Clear(); //0xfcaf60
      ~ImPool(); //0x1007570
};

class ImPool<ImGuiTable> {
      Add(); //0xf989f0
      Clear(); //0xfcb2c0
      ~ImPool(); //0x10076f0
};

class ImPool<ImPlotAlignmentData> {
      Add(); //0x11c6680
      ~ImPool(); //0x11c5df0
};

class ImPool<ImPlotItem> {
      Add(); //0x106e0a0
      ~ImPool(); //0x11c5fe0
};

class ImPool<ImPlotPlot> {
      Add(); //0x11c61d0
      ~ImPool(); //0x11c54a0
};

class ImPool<ImPlotSubplot> {
      Add(); //0x11c6500
      ~ImPool(); //0x11c53b0
};

class ImTriangulator {
      BuildEars(); //0xf7a720
      BuildNodes(ImVec2 const*, int); //0xf7a610
      BuildReflexes(); //0xf7a690
      FlipNodeList(); //0xf7ac10
      GetNextTriangle(unsigned int*); //0xf7a8c0
      Init(ImVec2 const*, int, void*); //0xf7a3e0
      IsEar(int, int, int, ImVec2 const&, ImVec2 const&, ImVec2 const&); //0xf7a840
      ReclassifyNode(ImTriangulatorNode*); //0xf7ac70
};

class ImVector<ImDrawChannel> {
      ~ImVector(); //0xf989d0
};

class ImVector<ImDrawCmd> {
      reserve(int); //0x1009120
      ~ImVector(); //0x1008b00
};

class ImVector<ImDrawList*> {
      reserve(int); //0x1008cd0
      ~ImVector(); //0x10088f0
};

class ImVector<ImDrawVert> {
      reserve(int); //0xfcd400
      ~ImVector(); //0xf7b9d0
};

class ImVector<ImFont*> {
      reserve(int); //0x100fed0
      ~ImVector(); //0xf7bf20
};

class ImVector<ImFontAtlasCustomRect> {
      ~ImVector(); //0xf7bf00
};

class ImVector<ImFontBuildDstData> {
      ~ImVector(); //0xf89ca0
};

class ImVector<ImFontBuildSrcData> {
      ~ImVector(); //0xf89cc0
};

class ImVector<ImFontConfig> {
      ~ImVector(); //0xf7bee0
};

class ImVector<ImFontGlyph> {
      ~ImVector(); //0xf87400
};

class ImVector<ImGuiColorMod> {
      reserve(int); //0x100d6c0
      ~ImVector(); //0x1007ea0
};

class ImVector<ImGuiContextHook> {
      reserve(int); //0x100f750
      ~ImVector(); //0x1006d50
};

class ImVector<ImGuiDockContextPruneNodeData> {
      reserve(int); //0x100c640
      ~ImVector(); //0x100c590
};

class ImVector<ImGuiDockNode*> {
      reserve(int); //0x1010660
      ~ImVector(); //0xff93b0
};

class ImVector<ImGuiDockNodeSettings> {
      reserve(int); //0x100cab0
};

class ImVector<ImGuiDockRequest> {
      reserve(int); //0x10104e0
};

class ImVector<ImGuiFocusScopeData> {
      reserve(int); //0x1010050
      ~ImVector(); //0x1007a80
};

class ImVector<ImGuiGroupData> {
      reserve(int); //0x100fbd0
      ~ImVector(); //0x1007c90
};

class ImVector<ImGuiInputEvent> {
      reserve(int); //0x100d0c0
      ~ImVector(); //0x1008160
};

class ImVector<ImGuiKeyRoutingData> {
      reserve(int); //0x1009ea0
      ~ImVector(); //0x10084d0
};

class ImVector<ImGuiListClipperData> {
      clear_destruct(); //0xfcb120
      reserve(int); //0x100d540
      ~ImVector(); //0x1007920
};

class ImVector<ImGuiListClipperRange> {
      push_back(ImGuiListClipperRange const&); //0xfc4030
      reserve(int); //0x10069a0
};

class ImVector<ImGuiNavTreeNodeData> {
      resize(int); //0xfb4ff0
      ~ImVector(); //0x1007b30
};

class ImVector<ImGuiOldColumns> {
      ~ImVector(); //0xfcc580
};

class ImVector<ImGuiPopupData> {
      reserve(int); //0x100fa50
      ~ImVector(); //0x1007be0
};

class ImVector<ImGuiPtrOrIndex> {
      ~ImVector(); //0x10074c0
};

class ImVector<ImGuiSettingsHandler> {
      reserve(int); //0x1010360
      ~ImVector(); //0x1006eb0
};

class ImVector<ImGuiShrinkWidthItem> {
      ~ImVector(); //0x1007410
};

class ImVector<ImGuiStackLevelInfo> {
      reserve(int); //0x100cdc0
};

class ImVector<ImGuiStorage::ImGuiStoragePair> {
      reserve(int); //0x100c7c0
};

class ImVector<ImGuiStyleMod> {
      reserve(int); //0x100d840
      ~ImVector(); //0x1007df0
};

class ImVector<ImGuiTabBar> {
      ~ImVector(); //0x1008630
};

class ImVector<ImGuiTable> {
      ~ImVector(); //0x1008580
};

class ImVector<ImGuiTableColumnSortSpecs> {
      ~ImVector(); //0xf98b70
};

class ImVector<ImGuiTableInstanceData> {
      ~ImVector(); //0xf98b90
};

class ImVector<ImGuiTableTempData> {
      clear_destruct(); //0xfcb480
      ~ImVector(); //0x1007870
};

class ImVector<ImGuiTextFilter::ImGuiTextRange> {
      reserve(int); //0x100d240
      ~ImVector(); //0xfc2ed0
};

class ImVector<ImGuiViewport*> {
      reserve(int); //0x100aab0
};

class ImVector<ImGuiViewportP*> {
      clear_delete(); //0xfcadd0
      reserve(int); //0x100f470
      ~ImVector(); //0x10038e0
};

class ImVector<ImGuiWindow*> {
      clear_delete(); //0xfcaab0
      reserve(int); //0xfdee90
      ~ImVector(); //0xff7e60
};

class ImVector<ImGuiWindowStackData> {
      reserve(int); //0x100f8d0
      ~ImVector(); //0x10080b0
};

class ImVector<ImPlotAlignmentData> {
      ~ImVector(); //0x11c55d0
};

class ImVector<ImPlotItem> {
      ~ImVector(); //0x11c60d0
};

class ImVector<ImPlotPlot> {
      ~ImVector(); //0x11c5590
};

class ImVector<ImPlotSubplot> {
      ~ImVector(); //0x11c55b0
};

class ImVector<ImVec2> {
      reserve(int); //0x1009d20
      ~ImVector(); //0x10086e0
};

class ImVector<ImVec4> {
      ~ImVector(); //0x1008a50
};

class ImVector<char> {
      reserve(int); //0xfc3440
      ~ImVector(); //0x1006b40
};

class ImVector<double> {
      ~ImVector(); //0x1247050
};

class ImVector<float> {
      reserve(int); //0x100fd50
      ~ImVector(); //0xf87440
};

class ImVector<int> {
      reserve(int); //0x100d3c0
      ~ImVector(); //0x1007d40
};

class ImVector<stbrp_rect> {
      ~ImVector(); //0xf85190
};

class ImVector<stbtt_packedchar> {
      ~ImVector(); //0xf89c80
};

class ImVector<unsigned char> {
      reserve(int); //0x10101d0
      ~ImVector(); //0x10079d0
};

class ImVector<unsigned int> {
      reserve(int); //0x100cf40
      ~ImVector(); //0xfcc8f0
};

class ImVector<unsigned short> {
      reserve(int); //0xfcd290
      resize(int); //0xfaea20
      ~ImVector(); //0xf87420
};

class ImVector<void*> {
      ~ImVector(); //0x10089a0
};

class IniFile {
      CalcFileSize(); //0x1279e70
      DeleteKey(char const*, char const*); //0x1279c10
      DeleteSection(char const*); //0x1279d50
      GetKey(); //0x1278810
      GetKey(char const*, char const*); //0x1278e30
      GetSection(); //0x1278630
      GetSection(char const*); //0x1278d20
      IniFile(); //0x1277e80
      IniFile(char*, bool); //0x12783c0
      IsWhiteSpace(); //0x1278530
      NextLine(); //0x12784f0
      ReadFloat(char const*, char const*, float); //0x1278f70
      ReadIniFile(); //0x1277f00
      ReadInt(char const*, char const*, int); //0x1278f50
      ReadString(char const*, char const*, char const*); //0x1278fa0
      SetKey(char const*, char const*, char const*); //0x1278fc0
      SetText(char const*); //0x1277ea0
      SkipWhiteSpace(); //0x1278560
      WriteIniFile(bool); //0x1279450
      _sysReadIniFile(char const*); //0x1278cf0
      _sysWriteIniFile(char const*, char const*, int); //0x1279fe0
      ~IniFile(); //0x1277d80
};

class InputDeviceSlot {
      start_capture(); //0x14897e0
};

class InputDeviceSlot::InputDeviceSlot(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >&); //0x148c260
};

class InputQuery {
      Input(char const*, char const*, char const*, char*&); //0x12838c0
      InputAsync(char const*, char const*, char const*); //0x1281d70
      LoginASync(char const*, char const*); //0x1281e00
      Question(char const*, char const*); //0x12839b0
      QuestionAsync(char const*, char const*); //0x1281da0
      SetResult(int, int, char const*); //0x1281e30
      SetUserNamePassword(int, int, char const*); //0x1281f30
      ShowMessageASync(char const*, char const*); //0x1281dd0
};

class InputQueue {
      AddDelayedInputToQueue(GameInput&, int); //0x11e3930
      AddInput(GameInput&); //0x11e3480
      AdjustFrameDelay(int); //0x11e2ed0
      DiscardFrames(int, int); //0x11e3010
      GetConfirmedInput(int, GameInput*); //0x11e3170
      GetFirstIncorrectFrame(); //0x11e2e80
      GetInput(int, int, GameInput*); //0x11e3240
      GetLastConfirmedFrame(); //0x11e2e60
      Init(int, int); //0x11e2a80
      InputQueue(int); //0x11e2a00
      PrepareQueueForFrame(int, int); //0x11e35e0
      ResetPredictionAfter(int); //0x11e2f40
      SetFrameDelay(int); //0x11e2e90
      SetLastAddedFrame(int); //0x11e2b00
      SetLastAddedGenerationForFrame(int, int); //0x11e2c70
      WriteQueueToLog(); //0x11e2ca0
      ~InputQueue(); //0x11e2af0
};

class JobManager {
      AcquireTaskToken(int); //0x1436110
      AddNewJob(void (*); //0x1436780
      CheckTaskTokenExists(int); //0x1436ca0
      CheckTaskTokensExist(int*, int); //0x1435630
      GenTaskToken(); //0x1436b80
      GetNumTasks(); //0x1436a50
      HasJobFinished(long long); //0x1436940
      Init(); //0x14364f0
      JobManager(); //0x1436370
      Process(long long); //0x1436aa0
      ReleaseTaskToken(int); //0x1435d80
      RemoveJob(long long); //0x14368e0
      Start(); //0x1436a90
      Terminate(); //0x1436b40
      ~JobManager(); //0x1436430
};

class JobTask {
      HasUnsatisfiedDependencies(); //0x1435600
      JobTask(); //0x14355b0
      ~JobTask(); //0x14355e0
};

class JobWorker {
      AddNewJob(void (*); //0x1435eb0
      CleanupFinishedThread(); //0x1435cb0
      ExecuteJob(); //0x1435b80
      GetNumTasks(); //0x1435b70
      GetState(); //0x1435d70
      HasJobFinished(long long); //0x14362f0
      JobWorker(int, bool); //0x1435770
      Process(); //0x14354a0
      RemoveJob(long long); //0x1436200
      Start(); //0x14359f0
      Terminate(); //0x14358a0
      ~JobWorker(); //0x1435820
};

class Key {
      ~Key(); //0x1277d50
};

class Keyframe<CAudioEffectTrackKey*> {
      Keyframe(); //0x13d2c20
      Mark4GC(unsigned int*, int); //0x13bf000
      ResolveChannelLinkage(); //0x13bef90
      UpdateDirtiness(); //0x13bfad0
      ~Keyframe(); //0x13d2dd0
      ~Keyframe(); //0x13d2e90
};

class Keyframe<CAudioTrackKey*> {
      Keyframe(); //0x12f1420
      Mark4GC(unsigned int*, int); //0x13bea60
      ResolveChannelLinkage(); //0x13be9f0
      UpdateDirtiness(); //0x13bf590
      ~Keyframe(); //0x12fb3c0
      ~Keyframe(); //0x12fb420
};

class Keyframe<CBoolTrackKey*> {
      Keyframe(); //0x12f17e0
      Mark4GC(unsigned int*, int); //0x13bec40
      ResolveChannelLinkage(); //0x13bebd0
      UpdateDirtiness(); //0x13bf6d0
      ~Keyframe(); //0x12fb630
      ~Keyframe(); //0x12fb690
};

class Keyframe<CColorTrackKey*> {
      Keyframe(); //0x12f1ba0
      Mark4GC(unsigned int*, int); //0x13bee20
      ResolveChannelLinkage(); //0x13bedb0
      UpdateDirtiness(); //0x13bf810
      ~Keyframe(); //0x12fb8a0
      ~Keyframe(); //0x12fb900
};

class Keyframe<CGraphicTrackKey*> {
      Keyframe(); //0x12f0f20
      Mark4GC(unsigned int*, int); //0x13be5b0
      ResolveChannelLinkage(); //0x13be540
      UpdateDirtiness(); //0x13bf270
      ~Keyframe(); //0x12fb080
      ~Keyframe(); //0x12fb0e0
};

class Keyframe<CInstanceTrackKey*> {
      Keyframe(); //0x12f1060
      Mark4GC(unsigned int*, int); //0x13be6a0
      ResolveChannelLinkage(); //0x13be630
      UpdateDirtiness(); //0x13bf310
      ~Keyframe(); //0x12fb150
      ~Keyframe(); //0x12fb1b0
};

class Keyframe<CMessageEventKey*> {
      Keyframe(); //0x12f1ce0
      Mark4GC(unsigned int*, int); //0x13bf0f0
      ResolveChannelLinkage(); //0x13bf080
      UpdateDirtiness(); //0x13bf8b0
      ~Keyframe(); //0x12fb970
      ~Keyframe(); //0x12fb9d0
};

class Keyframe<CMomentEventKey*> {
      Keyframe(); //0x12f1e20
      Mark4GC(unsigned int*, int); //0x13bf1e0
      ResolveChannelLinkage(); //0x13bf170
      UpdateDirtiness(); //0x13bf950
      ~Keyframe(); //0x12fba40
      ~Keyframe(); //0x12fbaa0
};

class Keyframe<CParticleTrackKey*> {
      Keyframe(); //0x12f11a0
      Mark4GC(unsigned int*, int); //0x13be790
      ResolveChannelLinkage(); //0x13be720
      UpdateDirtiness(); //0x13bf3b0
      ~Keyframe(); //0x12fb220
      ~Keyframe(); //0x12fb280
};

class Keyframe<CRealTrackKey*> {
      Keyframe(); //0x12f1a60
      Mark4GC(unsigned int*, int); //0x13bef10
      ResolveChannelLinkage(); //0x13beea0
      UpdateDirtiness(); //0x13bfa00
      ~Keyframe(); //0x12fb7d0
      ~Keyframe(); //0x12fb830
};

class Keyframe<CSequenceTrackKey*> {
      Keyframe(); //0x12f12e0
      Mark4GC(unsigned int*, int); //0x13be970
      ResolveChannelLinkage(); //0x13be900
      UpdateDirtiness(); //0x13bf4f0
      ~Keyframe(); //0x12fb2f0
      ~Keyframe(); //0x12fb350
};

class Keyframe<CSpriteFramesTrackKey*> {
      Keyframe(); //0x12f16a0
      Mark4GC(unsigned int*, int); //0x13beb50
      ResolveChannelLinkage(); //0x13beae0
      UpdateDirtiness(); //0x13bf630
      first(); //0x13346d0
      ~Keyframe(); //0x12fb560
      ~Keyframe(); //0x12fb5c0
};

class Keyframe<CStringTrackKey*> {
      Keyframe(); //0x12f1920
      Mark4GC(unsigned int*, int); //0x13bed30
      ResolveChannelLinkage(); //0x13becc0
      UpdateDirtiness(); //0x13bf770
      ~Keyframe(); //0x12fb700
      ~Keyframe(); //0x12fb760
};

class Keyframe<CTextTrackKey*> {
      Keyframe(); //0x12f1560
      Mark4GC(unsigned int*, int); //0x13be880
      ResolveChannelLinkage(); //0x13be810
      UpdateDirtiness(); //0x13bf450
      ~Keyframe(); //0x12fb490
      ~Keyframe(); //0x12fb4f0
};

class Keyframe<int> {
      Mark4GC(unsigned int*, int); //0x13bf260
      UpdateDirtiness(); //0x13bf9f0
};

class LPF2Effect {
      CalculateCoeffs(); //0x14ace20
      DeviceUpdated(YYAL_DeviceProps const&); //0x14acca0
      LPF2Effect(double*, YYAL_DeviceProps const&); //0x14ac600
      Process(float*, int, int); //0x14ac9d0
      SetCutoff(double); //0x14ac840
      SetFs(int); //0x14acd60
      SetQ(double); //0x14ac900
      UpdateParam(int, double); //0x14acaf0
      ~LPF2Effect(); //0x14acee0
};

class LPF2EffectStruct {
      GetParamDescriptors(); //0x126c380
      LPF2EffectStruct(YYObjectBase*); //0x126bf50
      SetCutoff(double); //0x126c2e0
      SetParam(int, double); //0x126c1a0
      ~LPF2EffectStruct(); //0x126ee40
};

class Layer_GCProxy {
      Detach(); //0x135ada0
      Free(bool); //0x135ae10
      Layer_GCProxy(CLayer*); //0x135ad00
      Mark4GC(unsigned int*, int); //0x135adb0
      ThreadFree(bool, GCContext*); //0x135ae30
      ~Layer_GCProxy(); //0x135ae50
};

class LinkedList<CInstance> {
      ~LinkedList(); //0x132b050
};

class LinkedList<CLayer> {
      Clear(eDeleteType); //0x13301f0
      ~LinkedList(); //0x132b030
};

class LinkedList<CLayerBackgroundElement> {
      ~LinkedList(); //0x1339810
};

class LinkedList<CLayerElementBase> {
      ~LinkedList(); //0x13303b0
};

class LinkedList<CLayerInstanceElement> {
      ~LinkedList(); //0x1339890
};

class LinkedList<CLayerOldTilemapElement> {
      Clear(eDeleteType); //0x135ae70
      ~LinkedList(); //0x1339910
};

class LinkedList<CLayerParticleElement> {
      ~LinkedList(); //0x1339a30
};

class LinkedList<CLayerSequenceElement> {
      ~LinkedList(); //0x1339b30
};

class LinkedList<CLayerSpriteElement> {
      ~LinkedList(); //0x1339930
};

class LinkedList<CLayerTextElement> {
      ~LinkedList(); //0x1339bb0
};

class LinkedList<CLayerTileElement> {
      ~LinkedList(); //0x1339ab0
};

class LinkedList<CLayerTilemapElement> {
      ~LinkedList(); //0x13399b0
};

class LinkedList<CTileSlab> {
      ~LinkedList(); //0x1339c30
};

class LinkedList<SSpriteLoadRequest> {
      Clear(eDeleteType); //0x1398cd0
};

class LinkedList<STextureLoadRequest> {
      Clear(eDeleteType); //0x1398c30
};

class List<CInstance*> {
      ~List(); //0x121b1a0
};

class List<unsigned int> {
      ~List(); //0x121b1c0
};

class LoShelfEffect {
      CalculateCoeffs(); //0x14ac4d0
      DeviceUpdated(YYAL_DeviceProps const&); //0x14ac290
      LoShelfEffect(double*, YYAL_DeviceProps const&); //0x14ab720
      Process(float*, int, int); //0x14abef0
      SetFreq(double); //0x14abb40
      SetFs(int); //0x14ac3b0
      SetGain(double); //0x14abdb0
      SetQ(double); //0x14abc70
      UpdateParam(int, double); //0x14ac010
      ~LoShelfEffect(); //0x14ac5f0
};

class LoShelfEffectStruct {
      GetParamDescriptors(); //0x126def0
      LoShelfEffectStruct(YYObjectBase*); //0x126da40
      SetFreq(double); //0x126de50
      SetParam(int, double); //0x126dd10
      ~LoShelfEffectStruct(); //0x126eee0
};

class LoadSave {
      BundleFileExists(char const*); //0x13decb0
      GetBundleFileSize(char const*); //0x13dedf0
      GetSaveFileSize(char const*, void*); //0x13dee50
      HTTP_Get(char const*, int (*); //0x13def10
      HTTP_Post(char const*, char const*, int (*); //0x13defd0
      HTTP_Request(char const*, char const*, char const*, char const*, int (*); //0x13df0c0
      LoadData(int*); //0x13debf0
      ReadBundleFile(char const*, unsigned int*); //0x13de890
      ReadBundleFileAsync(char const*, void (*); //0x13db690
      ReadSaveFile(char const*, unsigned int*, void*); //0x13de830
      RemoveSaveFile(char const*, void*); //0x13df4a0
      SaveData(char const*, int); //0x13debe0
      SaveFileExists(char const*, void*); //0x13ded00
      SetUp(IniFile*); //0x13dec00
      WriteFile(char const*, char const*, int, ASYNC_SAVE_LOAD_REQ_CONTEXT*, void*); //0x13de5a0
      _ExpandCompressedFile(char const*, char const*, char*, int, int); //0x13deef0
      _FileExists(char*); //0x13dec10
      _GetBundleFileName(char*, int, char const*); //0x13de8f0
      _GetSaveFileName(char*, int, char const*); //0x13de660
      _GetSize(char const*); //0x13ded70
      _ReadFile(char const*, unsigned int*); //0x13de9b0
      _WriteFile(char const*, char const*, int); //0x13db3b0
      fclose(_YYFILE*); //0x13db130
      fgetc(_YYFILE*); //0x13db270
      fopen(char const*, char const*); //0x13daed0
      fputs(_YYFILE*, char const*); //0x13db430
      fread(void const*, unsigned long, unsigned long, _YYFILE*); //0x13db390
      freadreal(_YYFILE*, double*); //0x13db2b0
      fseek(_YYFILE*, long, int); //0x13db1a0
      ftell(_YYFILE*); //0x13db190
      fwrite(void const*, unsigned long, unsigned long, _YYFILE*); //0x13db670
      yyfeof(_YYFILE*); //0x13db1f0
      yyfeoln(_YYFILE*); //0x13db200
};

class LogText {
      CopyFromClipboard(char const*, json_object*); //0x1245bc0
      CopyToClipboard(json_object*); //0x1245bb0
      Render(); //0x1245ba0
      ~LogText(); //0x1245b10
      ~LogText(); //0x1245b60
};

class LowPassFeedbackCombFilter {
      LowPassFeedbackCombFilter(int); //0x14adb20
      Process(float); //0x14adb90
      SetDamp(double); //0x14adc10
      SetFeedback(double); //0x14adbf0
      ~LowPassFeedbackCombFilter(); //0x14adb60
};

class MM_AutoMutex {
      ~MM_AutoMutex(); //0x143a3d0
};

class MM_RA_AutoMutex {
      ~MM_RA_AutoMutex(); //0x143a600
};

class MemoryManager {
      Alloc(unsigned long, char const*, int, bool); //0x1439960
      AllocAligned(unsigned long, int, char const*, int, bool); //0x143a5b0
      CheckMemory(); //0x143a930
      DumpMemory(void*, void*, bool); //0x1439fb0
      Free(void const*, bool); //0x1439a90
      GetStackTrace(); //0x143a950
      Init(); //0x1439870
      IsAllocated(void const*); //0x143a630
      Memory_Tick(); //0x143a940
      Quit(); //0x14398b0
      ReAlloc(void*, unsigned long, char const*, int, bool); //0x1439d20
      SetLength(void**, unsigned long, char const*, int); //0x143a6d0
      _Alloc(unsigned long, char const*, int, bool); //0x143a3f0
};

class Mutex {
      Init(char const*); //0x143b180
      Lock(); //0x143b200
      Mutex(char const*); //0x143b120
      Unlock(); //0x143b220
      ~Mutex(); //0x143b1e0
};

class NeuQuant {
      NeuQuant(int); //0x12d37a0
      alterneigh(double, int, int, double, double, double); //0x12dbd60
      init(); //0x12d3ae0
      inxbuild(); //0x12dbaa0
      inxsearch(int, int, int); //0x12dbea0
      learn(); //0x12db630
      setPixels(unsigned int*, int, int); //0x12d3820
};

class NurseryLocker {
      ~NurseryLocker(); //0x130a600
};

class ObjectPool<CLayer> {
      GetFromPool(); //0x133b860
};

class ObjectPool<CLayerBackgroundElement> {
      GetFromPool(); //0x133baa0
};

class ObjectPool<CLayerInstanceElement> {
      GetFromPool(); //0x133bc10
};

class ObjectPool<CLayerOldTilemapElement> {
      CleanPool(); //0x133a880
      GetFromPool(); //0x133eaa0
      ReturnToPool(CLayerOldTilemapElement*); //0x133f630
};

class ObjectPool<CLayerParticleElement> {
      GetFromPool(); //0x133c090
};

class ObjectPool<CLayerSequenceElement> {
      GetFromPool(); //0x133bf70
};

class ObjectPool<CLayerSpriteElement> {
      GetFromPool(); //0x133be30
};

class ObjectPool<CLayerTextElement> {
      GetFromPool(); //0x133c1b0
};

class ObjectPool<CLayerTileElement> {
      GetFromPool(); //0x133bd10
};

class ObjectPool<CLayerTilemapElement> {
      GetFromPool(); //0x133c2d0
};

class ObjectPool<CTileSlab> {
      GetFromPool(); //0x133ebb0
};

class PeakEQEffect {
      CalculateCoeffs(); //0x14ada30
      DeviceUpdated(YYAL_DeviceProps const&); //0x14ad870
      PeakEQEffect(double*, YYAL_DeviceProps const&); //0x14acef0
      Process(float*, int, int); //0x14ad4d0
      SetFreq(double); //0x14ad200
      SetFs(int); //0x14ad950
      SetGain(double); //0x14ad3e0
      SetQ(double); //0x14ad2f0
      UpdateParam(int, double); //0x14ad5f0
      ~PeakEQEffect(); //0x14adb10
};

class PeakEQEffectStruct {
      GetParamDescriptors(); //0x126d2d0
      PeakEQEffectStruct(YYObjectBase*); //0x126ce20
      SetFreq(double); //0x126d230
      SetParam(int, double); //0x126d0f0
      ~PeakEQEffectStruct(); //0x126eea0
};

class Peer2PeerBackend {
      AddLocalInput(int, void*, int); //0x11f4b80
      AddPlayer(Player&, int&); //0x11f49c0
      AddRemotePlayer(unsigned int, unsigned short, int); //0x11f3450
      AddSpectator(unsigned int, unsigned short); //0x11f34f0
      CalculateAdaptiveFrameDelay(); //0x11f40d0
      CheckInitialSync(); //0x11f3ed0
      DelayedInit(unsigned int, unsigned int, unsigned int); //0x11f2b10
      DisconnectPlayer(int); //0x11f5af0
      DisconnectPlayerQueue(int, int); //0x11f48c0
      DoPoll(); //0x11f36b0
      GetActivePlayers(int); //0x11f4d90
      GetConnectedPeers(); //0x11f5f10
      GetLastConfirmedFrame(); //0x11f6070
      GetNetworkStats(NetworkStats&, int); //0x11f5be0
      IncrementFrame(); //0x11f5030
      JoinPlayer(int, int); //0x11f5970
      OnMsg(sockaddr_in&, UdpMsg*, int); //0x11f6390
      OnMsg(sockaddr_in&, UdpMsg*, int); //0x11f6470
      OnRelayMsg(sockaddr_in&, UdpRelayMsg*, int); //0x11f6310
      OnRelayMsg(sockaddr_in&, UdpRelayMsg*, int); //0x11f6350
      Peer2PeerBackend(SessionListener*, char const*, int, unsigned int, char const*, unsigned short, long long, bool, bool); //0x11f23f0
      Poll2Players(int); //0x11f44c0
      PollNPlayers(int); //0x11f4600
      PollUdpProtocolEvents(); //0x11f3db0
      PollUdpRelayProtocolEvents(); //0x11f3d30
      PurgeUnconnectedPeers(unsigned int); //0x11f2ee0
      ReportChecksum(int); //0x11f47e0
      ResetRemotePlayer(int); //0x11f3310
      SendChatMsg(char const*, int); //0x11f5fb0
      SendGameState(); //0x11f4250
      SendInputsToSpectators(int); //0x11f35b0
      SetDisconnectNotifyStart(int); //0x11f5cb0
      SetDisconnectTimeout(int); //0x11f5c40
      SetExtraNetworkLatency(int); //0x11f6010
      SetFrameDelay(int); //0x11f5c10
      SetPlayerPrefs(char*, unsigned int); //0x11f5fc0
      SetPlayerToken(char const*); //0x11f6000
      SetReportChecksum(bool); //0x11f5d20
      StartGame(); //0x11f5e60
      SyncInput(void*, int, int&); //0x11f4ee0
      SyncOnFrame(bool); //0x11f5d30
      UpdateStats(Stats&); //0x11f6080
      ~Peer2PeerBackend(); //0x11f2ff0
      ~Peer2PeerBackend(); //0x11f32c0
      ~Peer2PeerBackend(); //0x11f32d0
      ~Peer2PeerBackend(); //0x11f32f0
};

class Peer2PeerBackend::FrameRateCalculator {
      Add(int, unsigned int); //0x11f4400
      FrameRateCalculator(); //0x11f6550
      GetAverage(); //0x11f4470
};

class Peer2PeerBackend::OnUdpProtocolEvent(UdpProtocol {
      Event&, int); //0x11f5a10
};

class Peer2PeerBackend::OnUdpProtocolPeerEvent(UdpProtocol {
      Event&, int); //0x11f5290
};

class Peer2PeerBackend::OnUdpProtocolSpectatorEvent(UdpProtocol {
      Event&, int); //0x11f53c0
};

class Peer2PeerBackend::OnUdpRelayProtocolEvent(UdpRelayProtocol {
      Event&); //0x11f5460
};

class Poll {
      Pump(); //0x11e44c0
      RegisterLoop(IPollSink*); //0x11e43b0
};

class RTree<CInstance*, float, float, 6, 2> {
      RTree(int); //0x12082c0
      Remove(float const*, float const*, CInstance* const&, bool); //0x120efd0
      ~RTree(); //0x120cb40
      ~RTree(); //0x120cbc0
};

class RTree<CInstance*, float, float, 6, 2>::AddBranch(RTree<CInstance*, float, float, 6, 2>::Branch const*, RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      Node**); //0x120d180
};

class RTree<CInstance*, float, float, 6, 2>::ChoosePartition(RTree<CInstance*, float, float, 6, 2> {
      PartitionVars*, int); //0x120d3e0
};

class RTree<CInstance*, float, float, 6, 2>::Draw(RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      Rect*, void*); //0x121fb00
};

class RTree<CInstance*, float, float, 6, 2>::InsertRect(RTree<CInstance*, float, float, 6, 2>::Branch const&, RTree<CInstance*, float, float, 6, 2> {
      Node**, int); //0x120cc90
};

class RTree<CInstance*, float, float, 6, 2>::InsertRectRec(RTree<CInstance*, float, float, 6, 2>::Branch const&, RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      Node**, int); //0x120ce80
};

class RTree<CInstance*, float, float, 6, 2>::LoadNodes(RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      PartitionVars*); //0x120d710
};

class RTree<CInstance*, float, float, 6, 2>::PickSeeds(RTree<CInstance*, float, float, 6, 2> {
      PartitionVars*); //0x120d960
};

class RTree<CInstance*, float, float, 6, 2>::RemoveRect(RTree<CInstance*, float, float, 6, 2>::Rect*, CInstance* const&, RTree<CInstance*, float, float, 6, 2> {
      Node**); //0x120fe70
};

class RTree<CInstance*, float, float, 6, 2>::RemoveRectRec(RTree<CInstance*, float, float, 6, 2>::Rect*, CInstance* const&, RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      ListNode**); //0x120ff80
};

class RTree<CInstance*, float, float, 6, 2>::Search(RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      Rect*, int&, bool (*); //0x120c9e0
};

class RTree<CInstance*, float, float, 6, 2>::SearchLine(RTree<CInstance*, float, float, 6, 2>::Node*, RTree<CInstance*, float, float, 6, 2> {
      Line*, int&, bool (*); //0x120dc70
};

class RValue {
      DeSerialise(IBuffer*); //0x130dee0
      Serialise(IBuffer*); //0x130dd70
      asBool(); //0xb264d0
      asReal(); //0xb26340
};

class RawWebSocketClient {
      BlockUntilConnectionCompletes(int); //0x1266da0
      ConnectionClosed(); //0x12675b0
      ProcessConnection(); //0x1265d60
      ReceiveMessage(void**, unsigned long*, bool*); //0x1266e20
      SendWSPacket(void const*, unsigned long, bool); //0x1266c80
      UnpackMessage(void**, unsigned long*, bool*); //0x1266f90
      ~RawWebSocketClient(); //0x1265ca0
      ~RawWebSocketClient(); //0x1265d40
};

class RawWebSocketClient::RawWebSocketClient(int, WebSocketURL const&, std::__ndk1::unique_ptr<RawWebSocketClient::Stream, std::__ndk1::default_delete<RawWebSocketClient {
      Stream> >&, char const*); //0x1265bc0
};

class RawWebSocketClient::Stream {
      ~Stream(); //0x12675c0
      ~Stream(); //0x12675d0
};

class RawWebSocketClientPlaintextStream {
      ProcessConnection(); //0x1267650
      RawWebSocketClientPlaintextStream(yySocket*); //0x12675e0
      Read(void*, int); //0x1267610
      ReadWaiting(); //0x1267620
      Write(void const*, int); //0x1267640
      ~RawWebSocketClientPlaintextStream(); //0x12675c0
      ~RawWebSocketClientPlaintextStream(); //0x1267600
};

class RawWebSocketClientSSLStream {
      FlushSSLReads(); //0x1267b20
      FlushSSLWrites(); //0x1267bd0
      InitiateConnection(); //0x1267940
      LogSSLErrors(); //0x1267bc0
      LogSSLErrorsCallback(char const*, unsigned long, void*); //0x1267d90
      ProcessConnection(); //0x1267820
      Read(void*, int); //0x1267c80
      ReadWaiting(); //0x1267cd0
      Write(void const*, int); //0x1267d50
      createSSLContext(); //0x12653b0
      initSSLContext(); //0x12676f0
      releaseSSLContext(); //0x12677d0
      ~RawWebSocketClientSSLStream(); //0x1267720
      ~RawWebSocketClientSSLStream(); //0x1267800
};

class RawWebSocketClientSSLStream::RawWebSocketClientSSLStream(yySocket*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x1267660
};

class RenderStateManager {
      ClearTexture(void*); //0x137f4f0
      Flush(); //0x137fa10
      Force(); //0x137fb10
      GetCurrentSamplerState(int, eSamplerState); //0x137f5e0
      GetRenderState(eRenderState); //0x137f580
      GetSamplerState(int, eSamplerState); //0x137f5a0
      GetTexture(int); //0x137f5c0
      PeekPrevSamplerState(int, eSamplerState); //0x137f9b0
      PeekPrevState(eRenderState); //0x137f960
      RenderStateManager(); //0x137f3f0
      Reset(); //0x137f0e0
      RestoreStates(bool); //0x137f6e0
      SaveStates(); //0x137f600
      SetRenderState(eRenderState, unsigned int); //0x137f410
      SetSamplerState(int, eSamplerState, unsigned int); //0x137f460
      SetTexture(int, void*); //0x137f4e0
      WriteStatesToBuffer(Buffer_Standard*); //0x137fb30
};

class Reverb1Effect {
      DeviceUpdated(YYAL_DeviceProps const&); //0x14b04e0
      Process(float*, int, int); //0x14b01b0
      Reverb1Effect(double*); //0x14add10
      SetDamp(double); //0x14afe90
      SetMix(double); //0x14b0010
      SetSize(double); //0x14afd70
      UpdateParam(int, double); //0x14b0480
      ~Reverb1Effect(); //0x14b0050
      ~Reverb1Effect(); //0x14b0190
};

class Reverb1EffectStruct {
      GetParamDescriptors(); //0x126c7b0
      Reverb1EffectStruct(YYObjectBase*); //0x126c4e0
      ~Reverb1EffectStruct(); //0x126ee60
};

class Rollback {
      AllocateGenericObject(); //0x11d09f0
      BitsNeeded(unsigned int); //0x11d3000
      Check_Dead_Refs(); //0x11dbda0
      CommitInputBuffer(); //0x11d2f40
      CreateInfoStruct(int); //0x11d1ce0
      CreateInputStruct(int, bool); //0x11d4800
      Create_Player(CLayer*, int); //0x11db710
      Create_Player(int); //0x11dbbe0
      Create_Players(); //0x11dbc50
      GetInputBits(int); //0x11d3020
      GetInputBuffer(); //0x11d2f20
      GetInputSize(); //0x11d2f10
      GetInputState(); //0x11d2f30
      GetPlayerLayer(); //0x11db640
      InitInputBuffers(int); //0x11d2c50
      InitMultiplayerFunctions(); //0x11d2380
      InitMultiplayerVariables(); //0x11d2590
      Is_Player_Config_Valid(); //0x11db6a0
      LoadManagedInstances(IBuffer*, unsigned char*, int); //0x11da340
      MakeDefaultInputDefinition(); //0x11d3b00
      Multiplayer_Call_Event(unsigned long long, YYObjectBase*); //0x11db460
      Multiplayer_Call_Started(YYObjectBase*); //0x11db490
      Multiplayer_Step(DefaultSteps&); //0x11dc530
      Multiplayer_Step_Advance(); //0x11dc0f0
      Multiplayer_Step_Update(); //0x11dc320
      Multiplayer_UpdateStats(); //0x11db4c0
      OverrideRndState(RndState&, RndState&); //0x11dc4c0
      PollInput(); //0x11d40e0
      ResetInputBuffers(); //0x11d2ad0
      RestoreInstanceLayer(CInstance*); //0x11da2e0
      RestoreRndState(RndState&, RndState&); //0x11dc500
      SaveManagedInstances(IBuffer*, unsigned char*&, int&, int&); //0x11d9f80
      SetInputDefinition(CInstance*); //0x11d3080
      SetMockInputDefinition(int, CInstance*); //0x11d37e0
      SortInputDefinitions(); //0x11d3790
      StartManagedInstances(); //0x11db3b0
      WriteLocalBits(int, int, int); //0x11d4070
      ascii_to_nibble(char); //0x11e4510
      get_rollback_api_server(CInstance*, int, RValue*); //0x11d2210
      get_rollback_confirmed_frame(CInstance*, int, RValue*); //0x11d2170
      get_rollback_current_frame(CInstance*, int, RValue*); //0x11d2150
      get_rollback_event_id(CInstance*, int, RValue*); //0x11d21a0
      get_rollback_event_param(CInstance*, int, RValue*); //0x11d21c0
      get_rollback_game_running(CInstance*, int, RValue*); //0x11d21e0
      log_game_state_summary(unsigned char*, int); //0x11dc8c0
      log_instance_info(CInstance*); //0x11dd0a0
      multiplayerGetSessionListener(); //0x11db3a0
      report_status(char const*); //0x11dd2d0
      reset_game_state(); //0x11db4e0
      rollback_chat(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d0c50
      rollback_create_game(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1560
      rollback_define_extra_network_latency(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d20a0
      rollback_define_input(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d12c0
      rollback_define_input_frame_delay(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d2070
      rollback_define_mock_input(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1300
      rollback_define_player(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1240
      rollback_display_events(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d20d0
      rollback_get_info(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1f90
      rollback_get_input(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1c30
      rollback_get_player_prefs(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d0fd0
      rollback_join_game(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1b90
      rollback_leave_game(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1c10
      rollback_set_player_prefs(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d0ee0
      rollback_start_game(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d1be0
      rollback_sync_on_frame(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d2100
      rollback_use_late_join(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d0ce0
      rollback_use_manual_start(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d0cb0
      rollback_use_player_prefs(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d0d10
      rollback_use_random_input(RValue&, CInstance*, CInstance*, int, RValue*); //0x11d2030
      set_player_info(unsigned int, bool); //0x11d1360
      should_leave_game(); //0x11db630
      show_message_in_runner(char const*, ...); //0x11db4d0
};

class Rollback::DeadRefsCheckContext {
      CheckHashMap(YYObjectBase*, StructVarsMap*); //0x11c83c0
      CheckInstance(CInstance*); //0x11c8330
      CheckRValue(YYObjectBase*, int, RValue*); //0x11c8720
      CheckVariable(YYObjectBase*, int, RValue*); //0x11c8b90
      CheckYYArray(YYObjectBase*, int, RefDynamicArrayOfRValue*); //0x11c8560
      CheckYYObject(YYObjectBase*, RValue*); //0x11c8bb0
      IsChecked(YYObjectBase*, YYObjectBase*); //0x11c8450
      ~DeadRefsCheckContext(); //0x11dc080
};

class Rollback::DeadRefsCheckContext::DeadRefsCheckContext(std::__ndk1::vector<CInstance*, std::__ndk1 {
      allocator<CInstance*> > const&); //0x11c8220
};

class Rollback::DeserializeInstances(IBuffer*, std::__ndk1::vector<CInstance*, std::__ndk1 {
      allocator<CInstance*> >&); //0x11dab00
};

class Rollback::DumpDiff {
      CheckAndPrintDiff(int, char const*, char const*, CAnimCurve*, CAnimCurve*); //0x11cec30
      CheckAndPrintDiff(int, char const*, char const*, CAnimCurveChannel*, CAnimCurveChannel*); //0x11cf080
      CheckAndPrintDiff(int, char const*, char const*, CCurvePoint*, CCurvePoint*); //0x11cf520
      CheckAndPrintDiff(int, char const*, char const*, char const*, char const*); //0x11ce3a0
      CheckAndPrintDiff(int, char const*, char const*, float, float); //0x11cd7f0
      CheckAndPrintDiff(int, char const*, char const*, int, int); //0x11cd7b0
      CheckAndPrintDiff(int, char const*, char const*, long long, long long); //0x11cf740
      CheckAndPrintDiff(int, char const*, char const*, unsigned int, unsigned int); //0x11cd770
      CheckAndPrintDiff(int, char const*, char const*, unsigned long long, unsigned long long); //0x11ce360
      CheckAndPrintDiffInArray(int, char const*, char const*, RefDynamicArrayOfRValue*, RefDynamicArrayOfRValue*); //0x11ce410
      CheckAndPrintDiffInHashMap(int, char const*, char const*, StructVarsMap*, StructVarsMap*); //0x11cd8b0
      CheckAndPrintDiffInObj(int, char const*, char const*, RValue*, RValue*); //0x11ce7f0
      CheckAndPrintDiffInRVar(int, char const*, char const*, RValue*, RValue*); //0x11cde60
      CheckAndPrintDiffInVariable(int, char const*, char const*, int, RValue*, int, RValue*); //0x11cdd90
      CheckAndPrintDiffInVariables(int, char const*, CInstance*, CInstance*); //0x11cd830
      Show(unsigned char*, int, unsigned char*, int); //0x11cc160
      ShowAllValues(unsigned char*, int); //0x11cd890
      ~DumpDiff(); //0x11dd260
};

class Rollback::GMSessionListener {
      advance_frame(); //0x11dd2c0
      allocate_buffer(unsigned int); //0x11dd2a0
      compress_game_state(unsigned char*, unsigned int, unsigned char*&, unsigned int&); //0x11dcdb0
      decompress_game_state(unsigned char*, unsigned int, unsigned char*&, unsigned int&); //0x11dcfe0
      free_buffer(unsigned char*); //0x11dd2b0
      is_ready_to_start(); //0x11dde90
      load_game_state(unsigned char*, int, unsigned char*, int); //0x11dce80
      log_game_state(char const*, unsigned char*, int); //0x11dd0f0
      log_game_state_diff(unsigned char*, int, unsigned char*, int); //0x11dd1c0
      on_event(Event const&); //0x11dd2e0
      save_game_state(unsigned char*&, int&, unsigned char*&, int&); //0x11dc6d0
      ~GMSessionListener(); //0x11ddfb0
};

class Rollback::GetParameterByKey(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x11d0a60
};

class Rollback::HashMapComparator(std::__ndk1::pair<int, RValue*> const&, std::__ndk1 {
      pair<int, RValue*> const&); //0x11e05b0
};

class Rollback::InputBuffer {
      Clear(); //0x11d2bd0
      GetBit(unsigned int); //0x11d2c30
      GetBuffer(); //0x11d2bb0
      GetSize(); //0x11d2bc0
      SetBit(unsigned int, bool); //0x11d2bf0
      SetSize(int); //0x11d2b50
      ~InputBuffer(); //0x11d2ba0
};

class Rollback::InstanceDeserializingContext {
      CreateObjectBase(RValue*, int, YYObjectBase*); //0x11ca070
      Deserialize(IBuffer*, YYObjectBase*, YYObjectBase*, CAnimCurve*); //0x11cb820
      Deserialize(IBuffer*, YYObjectBase*, YYObjectBase*, CAnimCurveChannel*); //0x11cb970
      Deserialize(IBuffer*, YYObjectBase*, YYObjectBase*, CCurvePoint*); //0x11cbae0
      DeserializeInstance(IBuffer*, CInstance*, bool); //0x11ca170
      DeserializeRValue(IBuffer*, YYObjectBase*, YYObjectBase*, RValue*); //0x11cb200
      DeserializeRef(IBuffer*, YYObjectBase*, YYObjectBase*, RValue*, int); //0x11caeb0
      DeserializeVariable(IBuffer*, YYObjectBase*, YYObjectBase*); //0x11cae10
      DeserializeVariables(IBuffer*, YYObjectBase*); //0x11cad40
      DeserializeYYArray(IBuffer*, YYObjectBase*, YYObjectBase*, RValue*); //0x11cb430
      DeserializeYYObject(IBuffer*, YYObjectBase*, YYObjectBase*, RValue*); //0x11cb4f0
      PerformPostfix(); //0x11c9fb0
      findInstance(int); //0x11c9f60
      ~InstanceDeserializingContext(); //0x11d26c0
};

class Rollback::InstanceDeserializingContext::InstanceDeserializingContext(std::__ndk1::vector<int, std::__ndk1 {
      allocator<int> > const&); //0x11c9bb0
};

class Rollback::InstanceSerializingContext {
      Serialize(IBuffer*, YYObjectBase*, CAnimCurve*); //0x11e01d0
      Serialize(IBuffer*, YYObjectBase*, CAnimCurveChannel*); //0x11e02b0
      Serialize(IBuffer*, YYObjectBase*, CCurvePoint*); //0x11e0490
      SerializeHashMap(IBuffer*, YYObjectBase*, StructVarsMap*, int&); //0x11df380
      SerializeInstance(IBuffer*, CInstance*); //0x11de820
      SerializeRValue(IBuffer*, YYObjectBase*, RValue*); //0x11dfa80
      SerializeRef(IBuffer*, YYObjectBase*, YYObjectBase*); //0x11df730
      SerializeVariable(IBuffer*, YYObjectBase*, int, RValue*); //0x11dfd10
      SerializeVariables(IBuffer*, YYObjectBase*); //0x11df2d0
      SerializeYYArray(IBuffer*, YYObjectBase*, RefDynamicArrayOfRValue*); //0x11df980
      SerializeYYObject(IBuffer*, YYObjectBase*, RValue*); //0x11dfd80
      ~InstanceSerializingContext(); //0x11d2620
};

class Rollback::InstanceSerializingContext::InstanceSerializingContext(std::__ndk1::vector<CInstance*, std::__ndk1 {
      allocator<CInstance*> > const&); //0x11de650
};

class Rollback::MultiplayerVars {
      ~MultiplayerVars(); //0x11db330
};

class Rollback::PlayerPref {
      PlayerPref(RValue*); //0x11d0da0
      ToRValue(); //0x11d10c0
};

class Rollback::ReadBits(Rollback {
      InputBuffer&, int, int&); //0x11d4660
};

class Rollback::ResurrectManagedInstance(IBuffer*, Rollback {
      InstanceDeserializingContext&); //0x11d9f30
};

class Rollback::SetIfZeroOrUnset(YYObjectBase*, std::__ndk1::unordered_map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, float, std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, float> > >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >, float); //0x11d4740
};

class Rollback::Set_Player_Status(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >&); //0x11dbd40
};

class Rollback::compareInput(std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >, int>); //0x11d5bc0
};

class Rollback::string_to_uuid_bytes(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x11e4540
};

class RollbackPlatform {
      AssertFailed(char*); //0x11e4280
      CreateDirectory(char const*); //0x11e4340
      DebugBreak(); //0x11e43a0
      GetConfigBool(char const*); //0x11e4370
      GetConfigInt(char const*); //0x11e4350
      GetCurrentTimeMS(); //0x11e41d0
      GetProcessID(); //0x11e4270
};

class RomDisk {
      Init(unsigned char*); //0x142d740
      Load(int); //0x142d7c0
      LoadTexture(int); //0x142d810
      MemoryInRomDisk(void*); //0x142d880
      Size(int); //0x142d7f0
};

class SGamepadEntry {
      FromString(char const*); //0x12ad720
};

class SGamepadMapping {
      CreateFromFile(char const*); //0x12ae120
      CreateFromFileAsString(unsigned char*, int); //0x12adfd0
      CreateFromString(char const*); //0x12adb80
      FindFromGUID(unsigned char const*); //0x12ae1c0
      GetMappedAxes(bool*, unsigned long); //0x12ae650
      GetMappedButtons(bool*, unsigned long); //0x12ae6c0
      GetMappedPadValue(eGPUserId, float const*, unsigned long, float const*, unsigned long, unsigned int const*, unsigned long); //0x12ae350
      SGamepadMapping(char const*, char const*); //0x12ad7f0
      ToString(); //0x12ad940
};

class SLinkedList<CGesture> {
      AddLast(CGesture*); //0x1212400
      ~SLinkedList(); //0x1211420
};

class SLinkedList<CGestureEvent> {
      Clear(eDeleteType); //0x1211560
      ~SLinkedList(); //0x1211480
};

class SLinkedList<CInstance> {
      ~SLinkedList(); //0x13664b0
};

class SLinkedList<CTouchAction> {
      ~SLinkedList(); //0x12114a0
};

class SLock {
      Init(); //0x143b230
      Lock(); //0x143b240
      Unlock(); //0x143b250
};

class SMemoryArray {
      Alloc(int); //0x143b090
      Free(void*); //0x143b0c0
      Init(int, int, int); //0x143af30
      Quit(); //0x143b050
};

class SOCKET_AutoMutex {
      SOCKET_AutoMutex(); //0x125beb0
      ~SOCKET_AutoMutex(); //0x125bef0
};

class SOggChannel {
      GetLoopSectionLength(); //0x1494b60
      GetTrueLoopEnd(); //0x1494ad0
      Init(unsigned int); //0x14948c0
      IsInLoopSection(long); //0x1494b80
      IsStreaming(); //0x1494ba0
      SOggChannel(); //0x1494700
      SetLoopEnd(double); //0x1494af0
      SetLoopStart(double); //0x1494a60
      SetLoopState(bool); //0x1494a30
      ~SOggChannel(); //0x1494930
};

class SScriptCacheInfo {
      SScriptCacheInfo(char const*); //0x130f130
};

class SSpriteLoadRequest {
      SSpriteLoadRequest(char const*, int, int, int, int, bool); //0x1391c30
      ~SSpriteLoadRequest(); //0x1391d20
};

class STagList {
      AddTags(char const**, int); //0x13d58c0
};

class STextureGroupLoadRequest {
      STextureGroupLoadRequest(int, bool); //0x1391f60
};

class STextureLoadRequest {
      STextureLoadRequest(int, bool); //0x1391bc0
      ~STextureLoadRequest(); //0x1391c10
};

class SWithIterator {
      ~SWithIterator(); //0x8821d0
};

class SYYCaseEntry {
      ~SYYCaseEntry(); //0x88aab0
};

class SYYStackTrace {
      SYYStackTrace(char const*, int); //0xb262b0
      ~SYYStackTrace(); //0xb26500
};

class ScrollingBuffer {
      AddPoint(float, float); //0x12468e0
      ~ScrollingBuffer(); //0x12468c0
};

class Section {
      ~Section(); //0x1277c30
};

class Session {
      Session(); //0x11f0030
      add_local_input(int, void*, int); //0x11f02b0
      add_player(Player&, int&); //0x11f01a0
      advance_frame(); //0x11f0310
      close(); //0x11f0350
      disconnect_player(int); //0x11f02f0
      get_last_confirmed_frame(); //0x11f04b0
      get_network_stats(int, NetworkStats&); //0x11f0330
      idle(); //0x11f0270
      send_chat_message(char const*, int); //0x11f04f0
      set_disconnect_notify_start(int); //0x11f03a0
      set_disconnect_timeout(int); //0x11f0380
      set_extra_network_latency(int); //0x11f0550
      set_frame_delay(int); //0x11f0250
      set_player_prefs(char*, unsigned int); //0x11f0510
      set_player_prefs(char*, unsigned int, unsigned int); //0x11f0530
      set_report_checksum(bool); //0x11f03c0
      start_game(); //0x11f04d0
      start_relay(SessionListener*, char const*, int, unsigned int, char const*, unsigned short, long long, char const*, bool, bool); //0x11f00c0
      start_singleplayer(SessionListener*, bool, bool); //0x11f0050
      start_spectating(SessionListener*, char const*, int, int, unsigned short, char*, unsigned short); //0x11f03e0
      start_synctest(SessionListener*, char const*, int, int, bool, bool); //0x11f01c0
      sync_on_frame(bool); //0x11f0490
      synchronize_input(void*, int, int&); //0x11f02d0
      use_random_input(bool); //0x11f0470
};

class SessionListener {
      ~SessionListener(); //0x11db390
};

class SinglePlayerBackend {
      AddLocalInput(int, void*, int); //0x11f7060
      AddPlayer(Player&, int&); //0x11f6f00
      DoPoll(); //0x11f6e90
      GetLastConfirmedFrame(); //0x11f7320
      IncrementFrame(); //0x11f7250
      SendChatMsg(char const*, int); //0x11f6f20
      SetPlayerPrefs(char*, unsigned int); //0x11f6fa0
      SinglePlayerBackend(SessionListener*, bool, bool); //0x11f6e50
      StartGame(); //0x11f7040
      SyncInput(void*, int, int&); //0x11f7230
      SyncOnFrame(bool); //0x11f72f0
      ~SinglePlayerBackend(); //0x11f7280
};

class SpectatorBackend {
      AddLocalInput(int, void*, int); //0x11f7c60
      AddPlayer(Player&, int&); //0x11f7c50
      DisconnectPlayer(int); //0x11f7c70
      DoPoll(); //0x11f7700
      GetNetworkStats(NetworkStats&, int); //0x11f7c80
      IncrementFrame(); //0x11f79e0
      OnMsg(sockaddr_in&, UdpMsg*, int); //0x11f7bd0
      OnMsg(sockaddr_in&, UdpMsg*, int); //0x11f7c10
      PollUdpProtocolEvents(); //0x11f7790
      SetDisconnectNotifyStart(int); //0x11f7cb0
      SetDisconnectTimeout(int); //0x11f7ca0
      SetFrameDelay(int); //0x11f7c90
      SpectatorBackend(SessionListener*, char const*, unsigned short, int, int, char*, unsigned short); //0x11f7340
      SyncInput(void*, int, int&); //0x11f7810
      ~SpectatorBackend(); //0x11f75b0
      ~SpectatorBackend(); //0x11f7600
      ~SpectatorBackend(); //0x11f7650
      ~SpectatorBackend(); //0x11f76a0
};

class SpectatorBackend::OnUdpProtocolEvent(UdpProtocol {
      Event&); //0x11f7a80
};

class Sprite_GCProxy {
      Detach(); //0x13df5e0
      Free(bool); //0x13df630
      Mark4GC(unsigned int*, int); //0x13df5f0
      Sprite_GCProxy(CSprite*); //0x13df540
      ThreadFree(bool, GCContext*); //0x13df650
      ~Sprite_GCProxy(); //0x13f7780
};

class StructVarsMap {
      DeleteCheckKey(int); //0x12d5170
      Insert(int, RValue*); //0x122f4c0
};

class Sync {
      AddRemoteInput(int, GameInput&); //0x11f13f0
      AdjustFrameDelay(int, int); //0x11f20d0
      AdjustSimulation(int); //0x11f18d0
      CheckSimulation(); //0x11f1770
      CheckSimulationConsistency(int*); //0x11f17c0
      GetConfirmedInputs(void*, int, int); //0x11f1480
      GetFrameDelay(int); //0x11f20f0
      GetLastConfirmedFrame(); //0x11f0db0
      GetLastSavedFrame(); //0x11f1dc0
      GetLastSavedFrameNumber(); //0x11f2150
      GetSavedState(int); //0x11f1e00
      IncrementFrame(); //0x11f1ac0
      LoadFrame(int); //0x11f1c10
      ResetPredictionAfter(int); //0x11f1d60
      ResetQueue(int); //0x11f0d20
      SaveCurrentFrame(); //0x11f11e0
      SetFrameDelay(int, int); //0x11f20b0
      SetLastAddedFrame(int, int); //0x11f0d40
      SetLastAddedGenerationForFrame(int, int, int); //0x11f0d60
      SetLastConfirmedFrame(int); //0x11f0da0
      SetSavedState(int, int, char const*, int); //0x11f1ec0
      SetStartFrame(int); //0x11f0d80
      SetStartGeneration(int); //0x11f0d90
      SynchronizeInputs(void*, int); //0x11f1600
      TryGetChecksum(int, int&); //0x11f2110
      ~Sync(); //0x11f0a40
      ~Sync(); //0x11f0b00
};

class Sync::AddLocalInput(int, GameInput&, std::__ndk1::vector<bool, std::__ndk1 {
      allocator<bool> > const&); //0x11f0dc0
};

class Sync::CreateQueues(Sync {
      Config&); //0x11f0b70
};

class Sync::GetMinFrameWithAllInputs(std::__ndk1::vector<bool, std::__ndk1 {
      allocator<bool> > const&); //0x11f10a0
};

class Sync::Init(Sync {
      Config&); //0x11f0b20
};

class Sync::Sync(UdpMsg {
      connect_status*); //0x11f0680
};

class Sync::SyncOnFrame(bool, std::__ndk1::vector<bool, std::__ndk1 {
      allocator<bool> > const&); //0x11f1ad0
};

class SyncTestBackend {
      AddLocalInput(int, void*, int); //0x11f8150
      AddPlayer(Player&, int&); //0x11f8130
      DoPoll(); //0x11f80b0
      GenerateRandomInput(); //0x11f8340
      GetLastConfirmedFrame(); //0x11f89b0
      IncrementFrame(); //0x11f83d0
      SendChatMsg(char const*, int); //0x11f87b0
      SetPlayerPrefs(char*, unsigned int); //0x11f8830
      SetPlayerPrefs(char*, unsigned int, unsigned int); //0x11f88d0
      StartGame(); //0x11f8980
      SyncInput(void*, int, int&); //0x11f81e0
      SyncOnFrame(bool); //0x11f87a0
      SyncTestBackend(SessionListener*, char const*, int, int, bool, bool); //0x11f7d20
      UseRandomInput(bool); //0x11f8790
      ~SyncTestBackend(); //0x11f89d0
      ~SyncTestBackend(); //0x11f8a40
};

class TBitmap {
      Clear(); //0x142dbf0
      Create(); //0x142da90
      FromBitmap(IBitmap*); //0x142dcd0
      GetHeight(); //0x142dbe0
      GetNative(); //0x142e2c0
      GetPixelFormat(); //0x142da10
      GetWidth(); //0x142dbd0
      LockBits(int, void**, int*); //0x142de20
      SetDIB(SDIB*, int); //0x142e2d0
      SetHeight(int); //0x142db00
      SetPixelFormat(TPixelFormat); //0x142da20
      SetWidth(int); //0x142db70
      Setup(); //0x142dc20
      TBitmap(); //0x142d900
      UnlockBits(void*); //0x142deb0
      ~TBitmap(); //0x142d960
      ~TBitmap(); //0x142d9c0
};

class TBitmap::TBitmap(Gdiplus {
      Bitmap*); //0x142d930
};

class TConsole {
      Create(wchar_t const*, bool); //0x127bf20
      Output(char const*, ...); //0x127bf30
      ~TConsole(); //0x127c150
};

class TErrStreamConsole {
      Create(wchar_t const*, bool); //0x1329840
      Output(char const*, ...); //0x1310990
      TErrStreamConsole(); //0x1310940
      ~TErrStreamConsole(); //0x1308cc0
      ~TErrStreamConsole(); //0x1329800
};

class TSCallback_GCProxy {
      Detach(); //0x1275780
      Free(bool); //0x12757c0
      Mark4GC(unsigned int*, int); //0x1275790
      TSCallback_GCProxy(CScriptRef*); //0x12756d0
      ThreadFree(bool, GCContext*); //0x12757e0
      ~TSCallback_GCProxy(); //0x1277220
};

class TStringList {
      ~TStringList(); //0x1336f20
};

class TagDisable {
      ~TagDisable(); //0x13d0f50
};

class TagInvisible {
      ~TagInvisible(); //0x13d0f40
};

class TagLink {
      ~TagLink(); //0x13d0f00
      ~TagLink(); //0x13d0f20
};

class TextureLoadManager {
      AbortAllRequests(); //0x1392110
      AbortSpriteLoadRequest(SSpriteLoadRequest*); //0x1392980
      AbortSpriteLoadRequests(int); //0x1392910
      AbortTextureGroupLoadRequest(STextureGroupLoadRequest*, bool); //0x1392630
      AbortTextureGroupLoadRequests(int, bool); //0x1392850
      AbortTextureLoadRequest(STextureLoadRequest*, bool); //0x13925b0
      AbortTextureLoadRequests(int, bool); //0x1392730
      CancelSpriteLoadRequest(SSpriteLoadRequest*); //0x1392a00
      CancelSpriteLoadRequests(int); //0x1392990
      GetSpriteLoadRequest(int); //0x1392ad0
      GetSpriteLoadRequestInProgress(int); //0x1392c30
      GetTextureGroupLoadRequest(int); //0x1392a70
      GetTextureGroupLoadRequestInProgress(int, bool); //0x1392bb0
      GetTextureLoadRequest(int); //0x1392a10
      GetTextureLoadRequestInProgress(int, bool); //0x1392b30
      Init(); //0x13920a0
      LoadGroup(char*, bool, bool); //0x13949b0
      LoadGroup(int, bool, bool); //0x13947f0
      Process(); //0x1392240
      ProcessSpriteLoadRequest(SSpriteLoadRequest*, bool); //0x1394020
      ProcessSpriteLoadRequests(); //0x1392380
      ProcessTextureGroupLoadRequest(STextureGroupLoadRequest*, bool); //0x1393d90
      ProcessTextureGroupLoadRequests(); //0x13924b0
      ProcessTextureLoadRequest(STextureLoadRequest*, bool); //0x1392ea0
      ProcessTextureLoadRequests(); //0x1392260
      Shutdown(); //0x1392100
      TextureLoadManager(); //0x1391fa0
      UnloadGroup(char*); //0x1394db0
      UnloadGroup(int); //0x1394af0
      ~TextureLoadManager(); //0x1391ff0
};

class TextureLoadManager::LockHelper {
      ~LockHelper(); //0x1392710
};

class TimeRampedParamLinear {
      Get(); //0x149c570
      TimeRampedParamLinear(float); //0x149c550
      Update(); //0x149c6d0
};

class TimeRampedParamLinear::Set(float, std::__ndk1::chrono::duration<long long, std::__ndk1 {
      ratio<1l, 1000l> >); //0x149c580
};

class TimeSync {
      TimeSync(); //0x11f2160
      add_local_frames_ahead(GameInput&, int); //0x11f2170
      recommend_frame_wait_duration(bool); //0x11f21e0
};

class TrackEval {
      TrackEval(); //0x13b5160
      ~TrackEval(); //0x13b5260
};

class TrackEvalNode {
      Mark4GC(unsigned int*, int); //0x13b5280
      TrackEvalNode(); //0x13b9940
      TrackEvalNode(TrackEvalNode*); //0x13b9b40
      ~TrackEvalNode(); //0x13cf5f0
      ~TrackEvalNode(); //0x13cf680
};

class TrackTag {
      ~TrackTag(); //0x13d0f30
};

class TremoloEffect {
      DeviceUpdated(YYAL_DeviceProps const&); //0x14b0c50
      Process(float*, int, int); //0x14b0940
      SetIntensity(double); //0x14b0920
      SetOffset(double); //0x14b0820
      SetRate(double); //0x14b0760
      SetShape(double); //0x14b0890
      Sync(); //0x14b0ce0
      TremoloEffect(double*, YYAL_DeviceProps const&); //0x14b04f0
      UpdateParam(int, double); //0x14b0a70
      ~TremoloEffect(); //0x14b0db0
};

class TremoloEffectStruct {
      GetParamDescriptors(); //0x126ccc0
      TremoloEffectStruct(YYObjectBase*); //0x126c980
      ~TremoloEffectStruct(); //0x126ee80
};

class Udp {
      OnLoopPoll(); //0x1206d30
      SendTo(char*, int, int, sockaddr*, int); //0x1206d10
      Udp(); //0x1206c20
      ~Udp(); //0x1206c40
      ~Udp(); //0x1206c60
};

class Udp::Callbacks {
      OnRelayMsg(sockaddr_in&, UdpRelayMsg*, int); //0x11f7d10
};

class Udp::Init(Poll*, Udp {
      Callbacks*); //0x1206cf0
};

class Udp::InitSocket(unsigned short, Poll*, Udp {
      Callbacks*); //0x1206c90
};

class UdpMsg {
      PayloadSize(); //0x11fd7b0
};

class UdpProtocol {
      ClearReceiveQueue(); //0x11fac50
      ClearSendQueue(); //0x11faba0
      Disconnect(); //0x11fc030
      DropAckedInputs(int, int); //0x11fb480
      GetJitter(); //0x11fc290
      GetNetworkStats(NetworkStats&); //0x11fcf40
      GetPeerConnectStatus(int, int*); //0x11fcf20
      HandleMsg(UdpMsg*, int); //0x11fc2d0
      HandlesMsg(sockaddr_in&, UdpMsg*); //0x11fc100
      LogMsg(char const*, UdpMsg*); //0x11fc060
      OnInput(UdpMsg*, int); //0x11fc7f0
      OnInputAck(UdpMsg*, int); //0x11fce70
      OnInvalid(UdpMsg*, int); //0x11fc450
      OnKeepAlive(UdpMsg*, int); //0x11fce60
      OnLoopPoll(); //0x11fb6d0
      OnMsg(UdpMsg*, int); //0x11fc140
      OnNewGeneration(int); //0x11fd000
      OnQualityReply(UdpMsg*, int); //0x11fce30
      OnQualityReport(UdpMsg*, int); //0x11fcde0
      OnSyncReply(UdpMsg*, int); //0x11fc500
      OnSyncRequest(UdpMsg*, int); //0x11fc460
      PumpReceiveQueue(); //0x11fba50
      PumpSendQueue(); //0x11fbb30
      RecommendFrameDelay(); //0x11fcff0
      Reset(); //0x11fa6c0
      ResetPeerConnectStatus(int); //0x11fada0
      SendInput(GameInput&); //0x11fade0
      SendInputAck(); //0x11fb440
      SendMsg(UdpMsg*); //0x11fb310
      SendPendingOutput(); //0x11faee0
      SendSyncRequest(); //0x11fbe40
      SetDisconnectNotifyStart(int); //0x11fd600
      SetDisconnectTimeout(int); //0x11fd5f0
      SetLocalFrameDelay(int, int); //0x11fcf70
      SetStartState(int); //0x11fadc0
      Synchronize(); //0x11fceb0
      UdpProtocol(); //0x11fa580
      UpdateNetworkStats(); //0x11fbe90
      ~UdpProtocol(); //0x11fa9f0
      ~UdpProtocol(); //0x11fad10
};

class UdpProtocol::GetEvent(UdpProtocol {
      Event&); //0x11fb610
};

class UdpProtocol::Init(Udp*, Poll&, int, unsigned int, unsigned short, UdpMsg {
      connect_status*, int*, unsigned int); //0x11fad30
};

class UdpProtocol::LogEvent(char const*, UdpProtocol {
      Event const&); //0x11fce90
};

class UdpProtocol::QueueEvent(UdpProtocol {
      Event const&); //0x11fbf50
};

class UdpRelayMsg {
      Read(Buffer&); //0x1206e50
      Write(Buffer&); //0x1202550
};

class UdpRelayProtocol {
      ClearReceiveQueue(); //0x1201090
      ClearSendQueue(); //0x1201160
      GetNetworkStats(NetworkStats&); //0x1201c90
      HandleMsg(UdpRelayMsg*); //0x1201bc0
      HandleReliableMsg(UdpRelayMsg*); //0x1202fe0
      HandleUnreliableMsg(UdpRelayMsg*); //0x1202ea0
      HandlesMsg(sockaddr_in&); //0x12018f0
      LogMsg(char const*, UdpRelayMsg*); //0x1201a40
      OnLoopPoll(); //0x1201360
      OnMsg(UdpRelayMsg*); //0x1201920
      OnMsgAck(unsigned int); //0x1202c90
      OnPong(unsigned int); //0x1203540
      ProcessOrderingBuffer(); //0x12029f0
      ProcessReceiveQueue(); //0x1201500
      ProcessSendQueue(); //0x1201600
      SendChatMsg(char const*, int); //0x1202360
      SendChecksumReport(int, int); //0x1201f70
      SendFrameReport(int); //0x1201ff0
      SendGameState(int, int, unsigned char*, int, bool); //0x12020f0
      SendMsgAck(unsigned int&); //0x12024f0
      SendPing(); //0x1201880
      SendPlayerDropped(int); //0x1201fb0
      SendReliableMsg(UdpRelayMsg*); //0x1201d50
      SendRoomInfoRequest(); //0x1201810
      SendStartGameRequest(unsigned int); //0x1201cb0
      SendUnreliableMsg(UdpRelayMsg*); //0x1202030
      SetPlayerPrefs(char const*, unsigned int); //0x1202420
      SetPlayerToken(char const*); //0x1201240
      UdpRelayProtocol(Udp*, unsigned int, unsigned int, unsigned short, long long, bool); //0x1200ac0
      UpdateNetworkStats(); //0x1203730
      ~UdpRelayProtocol(); //0x1200e00
      ~UdpRelayProtocol(); //0x1201220
};

class UdpRelayProtocol::GetEvent(UdpRelayProtocol {
      Event&); //0x1201bf0
};

class UdpRelayProtocol::LogEvent(char const*, UdpRelayProtocol {
      Event const&); //0x1202e50
};

class UdpRelayProtocol::QueueEvent(UdpRelayProtocol {
      Event const&); //0x1202d10
};

class UdpSocket {
      Receive(unsigned char*, sockaddr_in&, int); //0x1206b50
      Send(char*, int, int, sockaddr*, int); //0x1206a90
      UdpSocket(unsigned short); //0x1206a10
      ~UdpSocket(); //0x1206a30
      ~UdpSocket(); //0x1206a60
};

class UnzipAsyncPayload {
      ~UnzipAsyncPayload(); //0x120be80
};

class VM {
      ClearBreakpoint(unsigned int*); //0x1324150
      ClearBreakpointsFromMemory(); //0x1322e90
      DebugInfo(VMBuffer*, int); //0x130ede0
      DebugLine(VMDebugInfo*, char const*); //0x130ee20
      DebugLineNumber(VMDebugInfo*, char const*, char**); //0x130ef20
      Exec(CCode*, YYObjectBase*, YYObjectBase*, RValue*, YYObjectBase*, int, RValue*, int, YYObjectBase*); //0x1322f30
      ExecDebug(VMExec&, RValue*, bool); //0x1323960
      ExecRelease(VMExec&, RValue*); //0x1323530
      GetAllInstanceIDs(Buffer_Standard*, bool); //0x1325f90
      GetBreakpoint(unsigned int*); //0x1322e20
      GetDSGrid(Buffer_Standard*, int, int); //0x13281f0
      GetDSList(Buffer_Standard*, int, int); //0x1326f50
      GetDSMap(Buffer_Standard*, int, int); //0x1327bb0
      GetDSPriority(Buffer_Standard*, int, int); //0x1327860
      GetDSQueue(Buffer_Standard*, int, int); //0x1327540
      GetDSStack(Buffer_Standard*, int, int); //0x1327210
      GetGlobalVariables(Buffer_Standard*, bool); //0x1324840
      GetInstanceVariables(Buffer_Standard*, YYObjectBase*, bool); //0x1324470
      GetLocalVariables(Buffer_Standard*, YYObjectBase*, bool, int); //0x1324200
      GetObjectBaseVariables(Buffer_Standard*, YYObjectBase*, bool); //0x1324630
      GetRuntimeState(Buffer_Standard*, int); //0x1326190
      GetRuntimeStateRealtime(Buffer_Standard*, int); //0x1325e00
      GetStructureCounts(Buffer_Standard*); //0x1325e30
      Init(); //0x1323fc0
      PokeDSGrid(int, int, int, RValue&); //0x1328390
      PokeDSList(int, int, RValue&); //0x1327070
      PokeDSMap(int, int, RValue&); //0x1327f00
      PokeDSPriority(int, int, RValue&); //0x13279d0
      PokeDSQueue(int, int, RValue&); //0x1327690
      PokeDSStack(int, int, RValue&); //0x1327360
      Quit(); //0x1323fb0
      ResetBreakpoints(); //0x1324010
      SetBreakpoint(unsigned int*, unsigned int, unsigned char*); //0x1324050
      WriteBreakpointsToMemory(); //0x1322ee0
      WriteCallStack(Buffer_Standard*, VMExec*, bool); //0x1326500
      WriteDSSizeCount(Buffer_Standard*, int, int&); //0x1326ec0
      WriteInstanceBuiltInVariables(Buffer_Standard*, CInstance*); //0x1324a70
      WriteInstanceID(Buffer_Standard*, YYObjectBase*); //0x13260e0
      WriteRValueToBuffer(RValue*, Buffer_Standard*); //0x1324350
      WriteRenderStates(Buffer_Standard*, bool); //0x1326b00
};

class VMBuffer {
      convertBuffer(); //0x1329f70
      freeBuffer(); //0x1329eb0
      ~VMBuffer(); //0x127ead0
      ~VMBuffer(); //0x12814f0
};

class VMWriteBuffer {
      Add(int, ...); //0x1329c40
      AddVal(bool); //0x1329e50
      AddVal(double); //0x1329df0
      AddVal(float); //0x1329e10
      AddVal(int); //0x1329e20
      AddVal(long long); //0x1329e30
      Reserve(int); //0x1329ba0
      VMWriteBuffer(int); //0x1329b30
      ~VMWriteBuffer(); //0x132a4b0
};

class VertexBuffer {
      Init(int, int, int); //0x1259f20
      IsValid(); //0x125a0a0
      Lock(); //0x1259f00
      Unlock(); //0x1259f10
      UpdateFromBuffer(void*, int); //0x125a010
      ~VertexBuffer(); //0x1259eb0
};

class VertexFormat {
      Add(yyVertexType, yyVertexUsage, unsigned int); //0x139a7c0
      EndianSwapBuffer(unsigned char*, int, int, int, bool); //0x139a920
      Equals(VertexFormat const*); //0x139ab40
      GetElementSizeInType(yyVertexType); //0x139a7b0
      GetNumElementsInType(yyVertexType); //0x139a790
      GetTypeSize(yyVertexType); //0x139a770
};

class WakeEventData {
      WakeEventData(); //0x143b340
};

class Wallpaper {
      AddInitialValueArray(YYObjectBase*, RefDynamicArrayOfRValue*); //0x11c6cf0
      AddInitialValueObject(YYObjectBase*, YYObjectBase*); //0x11c6960
      AllocateGenericObject(); //0x11c6750
      AllocateLocalGenericObject(); //0x11c67c0
      GetNetworkManager(); //0x11c7400
      InitNetworkManager(); //0x11c7340
      InitWallpaperFunctions(); //0x11c68f0
      InitWallpaperVariables(); //0x11c6930
      WallpaperResetConfig(); //0x11c6fe0
      WallpaperSendCurrentConfig(); //0x11c7040
      WallpaperSendCurrentConfigDefinition(); //0x11c7220
      WallpaperSendCurrentSubscriptions(); //0x11c7270
      WallpaperUpdateConfig(RValue const*); //0x11c6d80
      WallpaperUpdateConfig(char const*); //0x11c6e50
      WallpaperUpdateSubscriptionData(RValue const*); //0x11c6f10
      WallpaperUpdateSubscriptionData(char const*); //0x11c6eb0
      get_wallpaper_config(CInstance*, int, RValue*); //0x11c6850
      get_wallpaper_subscription_data(CInstance*, int, RValue*); //0x11c6870
      wallpaper_disable_mouse_input(); //0x11c68c0
      wallpaper_enable_mouse_input(); //0x11c68b0
      wallpaper_set_config(RValue&, CInstance*, CInstance*, int, RValue*); //0x11c6890
      wallpaper_set_subscriptions(RValue&, CInstance*, CInstance*, int, RValue*); //0x11c68d0
};

class Wallpaper::NetworkManager {
      Create(); //0x11c73b0
      HandleMessage(char const*); //0x11c7cb0
      InitSocket(); //0x11c7410
      NetworkManager(); //0x11c7560
      Process(); //0x11c76f0
      Send(unsigned char*, int); //0x11c75d0
      SendPing(); //0x11c7c40
      ~NetworkManager(); //0x11c75a0
};

class Wavetable {
      DeInit(); //0x14b0df0
      Init(double (*); //0x14b0e10
      IsInitialised(); //0x14b0e90
      Read(double); //0x14b0ea0
      Wavetable(); //0x14b0dc0
      ~Wavetable(); //0x14b0dd0
};

class WavetableLFO {
      GetPhase(); //0x14b13e0
      Read(); //0x14b1570
      SetFreq(double); //0x14b14b0
      SetFs(int); //0x14b1470
      SetPhase(double, bool); //0x14b13f0
      SetPhaseOffset(double); //0x14b14e0
      UpdatePhaseInc(); //0x14b1490
      WavetableLFO(); //0x14b0fe0
};

class WavetableLFO::SetShape(LFO {
      Shape); //0x14b1550
};

class WebSocketClient {
      ~WebSocketClient(); //0x1268c30
      ~WebSocketClient(); //0x1268c40
};

class WebSocketURL {
      to_string(); //0x1268a60
};

class WebSocketURL::WebSocketURL(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, WebSocketURL {
      Protocol); //0x1267fa0
};

class WebSocketUtil {
      EncodeWSPacket(void*, unsigned long*, void const*, unsigned long, bool, bool); //0x1268c50
};

class WithObjIterator {
      Next(); //0x13660b0
      WithObjIterator(int, CInstance*, CInstance*, bool); //0x1365d30
};

class YYFTGlyphCache {
      BuildGlyphSlotList(); //0x137a5a0
      GetLRUSlot(YYGlyph2*, int, bool); //0x1374a90
      Init(int, int, FT_FaceRec_*, int, int); //0x137a4e0
      ~YYFTGlyphCache(); //0x1375360
};

class YYGMLException {
      GetExceptionObject(); //0x1323f20
      YYGMLException(CInstance*, CInstance*, char const*, char const*, char const*, int, char const**, int); //0x1328b50
      YYGMLException(YYRValue const&); //0x1328f00
};

class YYLocalArgs {
      ~YYLocalArgs(); //0x683650
};

class YYObjectBase {
      Add(char const*, RValue&, int); //0x1230b30
      Add(char const*, YYObjectBase*, int); //0x12307d0
      Add(char const*, bool, int); //0x1230850
      Add(char const*, char const*, int); //0x1230a30
      Add(char const*, double, int); //0x1230940
      Add(char const*, int, int); //0x12308d0
      Add(char const*, long long, int); //0x12309c0
      Add(char const*, void*, int); //0x1230ac0
      AddNull(char const*, int); //0x1230bd0
      AddWeakReference(CWeakRef*); //0x1230750
      Alloc(unsigned int, int, int, bool); //0x122e4e0
      AllocVars(); //0x122f270
      AssignVars(YYObjectBase*); //0x122f780
      DetachWeakReference(CWeakRef*); //0x12307a0
      FindOrAllocValue(char const*); //0x1230640
      FindValue(char const*); //0x1230600
      Free(YYObjectBase*, bool); //0x122ea80
      Free(bool); //0x12303c0
      FreeAll(); //0x122f210
      FreeVars(YYObjectBase*, bool, GCContext*); //0x122ece0
      GetDispose(); //0x1230470
      GetDispose(YYObjectBase*); //0x122f200
      HasValue(char const*); //0x1230550
      InternalGetYYVar(int); //0x122f330
      InternalGetYYVarRef(int); //0x122f940
      InternalGetYYVarRefL(int); //0x122fbb0
      InternalReadYYVar(int); //0x122f6f0
      IsExtensible(); //0x1230540
      Mark4GC(unsigned int*, int); //0x122fef0
      MarkOnlyChildren4GC(unsigned int*, int); //0x12302a0
      MarkThisOnly4GC(unsigned int*, int); //0x1230260
      PreFree(); //0x12303f0
      PreFree(YYObjectBase*); //0x122ecd0
      SetProperty(char const*, bool, RValue& (*); //0x1230670
      ThreadFree(YYObjectBase*, bool, GCContext*); //0x122ec60
      ThreadFree(bool, GCContext*); //0x12303e0
      YYObjectBase(int, int); //0x122fd40
      ~YYObjectBase(); //0x122fde0
      ~YYObjectBase(); //0x123b8f0
};

class YYRValue {
      YYRValue(); //0xb262d0
      YYRValue(YYObjectBase*); //0xb26360
      YYRValue(YYRValue const&); //0x68b680
      YYRValue(bool); //0xb26390
      YYRValue(int, bool); //0xb26430
      operator(); //0xb870a0
      ~YYRValue(); //0x624550
};

class YYRingBuffer {
      LengthFree(); //0x149c2c0
      LengthUsed(); //0x149c250
      Read(void*, unsigned long); //0x149c420
      Write(void*, unsigned long); //0x149c320
      YYRingBuffer(unsigned long); //0x149c1c0
      ~YYRingBuffer(); //0x149c210
};

class YYSlot<YYObjectBase> {
      allocSlot(YYObjectBase*); //0x122e7d0
      ~YYSlot(); //0x122d3d0
};

class YYStrBuilder {
      ~YYStrBuilder(); //0x6251c0
};

class YYStrBuilderYY {
      Add(char const*); //0x1307b10
      AddFormat(char const*, ...); //0x121ddc0
      AddVarArgs(char const*, __va_list_tag*); //0x121f7f0
};

class YYZipFile {
      AddFile(char const*, char const*, int); //0x12a0980
      Free(bool); //0x12a2310
      ThreadFree(bool, GCContext*); //0x12a2340
      YYZipFile(int); //0x12a0790
      ~YYZipFile(); //0x12a2160
      ~YYZipFile(); //0x12a22f0
};

class _JNIEnv {
      CallBooleanMethod(_jobject*, _jmethodID*, ...); //0xf6dab0
      CallDoubleMethod(_jobject*, _jmethodID*, ...); //0x140d540
      CallNonvirtualIntMethod(_jobject*, _jclass*, _jmethodID*, ...); //0x14a6ad0
      CallNonvirtualVoidMethod(_jobject*, _jclass*, _jmethodID*, ...); //0x14a6b90
      CallObjectMethod(_jobject*, _jmethodID*, ...); //0xf6d9f0
      CallStaticBooleanMethod(_jclass*, _jmethodID*, ...); //0x1306370
      CallStaticDoubleMethod(_jclass*, _jmethodID*, ...); //0x1306ae0
      CallStaticIntMethod(_jclass*, _jmethodID*, ...); //0xf6ea90
      CallStaticObjectMethod(_jclass*, _jmethodID*, ...); //0x1263c50
      CallStaticVoidMethod(_jclass*, _jmethodID*, ...); //0xf6d810
      NewObject(_jclass*, _jmethodID*, ...); //0x14a6a10
};

class _RefFactory<YYObjectBase*> {
      Alloc(YYObjectBase*, int); //0x142e390
      Create(YYObjectBase*, int&); //0x142e3d0
      Destroy(YYObjectBase*); //0x142e430
};

class _RefFactory<void*> {
      Alloc(void*, int); //0x142e450
      Create(void*, int&); //0x142e460
      Destroy(void*); //0x142e480
};

class _RefThing<char const*> {
      _RefThing(char const*); //0x1315d50
      dec(); //0x624dc0
      ~_RefThing(); //0x1222440
};

class b2AABB {
      RayCast(b2RayCastOutput*, b2RayCastInput const&); //0xf1f840
};

class b2BlockAllocator {
      Allocate(int); //0xf125b0
      Clear(); //0xf127d0
      Free(void*, int); //0xf127a0
      b2BlockAllocator(); //0xf12490
      ~b2BlockAllocator(); //0xf12560
};

class b2Body {
      CreateFixture(b2FixtureDef const*); //0xf25bf0
      CreateFixture(b2Shape const*, float); //0xf25cb0
      DestroyFixture(b2Fixture*); //0xf25d30
      Dump(); //0xf26200
      ResetMassData(); //0xf258c0
      SetActive(bool); //0xf260e0
      SetFixedRotation(bool); //0xf261d0
      SetMassData(b2MassData const*); //0xf25e30
      SetTransform(b2Vec2 const&, float); //0xf25fb0
      SetType(b2BodyType); //0xf256c0
      ShouldCollide(b2Body const*); //0xf25f70
      SynchronizeFixtures(); //0xf25b00
      b2Body(b2BodyDef const*, b2World*); //0xf25510
      ~b2Body(); //0xf256b0
};

class b2BroadPhase {
      BufferMove(int); //0xf1c8b0
      CreateProxy(b2AABB const&, void*); //0xf1c840
      DestroyProxy(int); //0xf1c910
      MoveProxy(int, b2AABB const&, b2Vec2 const&); //0xf1c990
      QueryCallback(int); //0xf1ca60
      TouchProxy(int); //0xf1ca00
      UnBufferMove(int); //0xf1c950
      b2BroadPhase(); //0xf1c7e0
      ~b2BroadPhase(); //0xf1c820
};

class b2ChainAndCircleContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2c590
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2c5f0
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2c640
      b2ChainAndCircleContact(b2Fixture*, int, b2Fixture*, int); //0xf2c620
      ~b2ChainAndCircleContact(); //0xf2c700
};

class b2ChainAndPolygonContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2c710
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2c770
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2c7c0
      b2ChainAndPolygonContact(b2Fixture*, int, b2Fixture*, int); //0xf2c7a0
      ~b2ChainAndPolygonContact(); //0xf2c870
};

class b2ChainShape {
      Clone(b2BlockAllocator*); //0xf239e0
      ComputeAABB(b2AABB*, b2Transform const&, int); //0xf23c80
      ComputeDistance(b2Transform const&, b2Vec2 const&, float*, b2Vec2*, int); //0xf23b10
      ComputeMass(b2MassData*, float); //0xf23d10
      CreateChain(b2Vec2 const*, int); //0xf23980
      CreateLoop(b2Vec2 const*, int); //0xf23910
      GetChildCount(); //0xf23a80
      GetChildEdge(b2EdgeShape*, int); //0xf23a90
      RayCast(b2RayCastOutput*, b2RayCastInput const&, b2Transform const&, int); //0xf23bf0
      SetNextVertex(b2Vec2 const&); //0xf239d0
      SetPrevVertex(b2Vec2 const&); //0xf239c0
      TestPoint(b2Transform const&, b2Vec2 const&); //0xf23be0
      ~b2ChainShape(); //0xf238b0
      ~b2ChainShape(); //0xf238e0
};

class b2CircleContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2c880
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2c8d0
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2c930
      b2CircleContact(b2Fixture*, b2Fixture*); //0xf2c900
      ~b2CircleContact(); //0xf2c950
};

class b2CircleShape {
      Clone(b2BlockAllocator*); //0xf23d20
      ComputeAABB(b2AABB*, b2Transform const&, int); //0xf23fa0
      ComputeDistance(b2Transform const&, b2Vec2 const&, float*, b2Vec2*, int); //0xf23de0
      ComputeMass(b2MassData*, float); //0xf24010
      GetChildCount(); //0xf23d60
      RayCast(b2RayCastOutput*, b2RayCastInput const&, b2Transform const&, int); //0xf23e60
      TestPoint(b2Transform const&, b2Vec2 const&); //0xf23d70
      ~b2CircleShape(); //0xf24080
};

class b2Contact {
      AddType(b2Contact* (*); //0xf2caa0
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2caf0
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2cc90
      InitializeRegisters(); //0xf2c960
      Update(b2ContactListener*); //0xf2cda0
      b2Contact(b2Fixture*, int, b2Fixture*, int); //0xf2cd20
      ~b2Contact(); //0xf2c6f0
      ~b2Contact(); //0xf2cfe0
};

class b2ContactFilter {
      ShouldCollide(b2Fixture*, b2Fixture*); //0xf2c540
      ~b2ContactFilter(); //0xf2c570
      ~b2ContactFilter(); //0xf2c580
};

class b2ContactListener {
      BeginContact(b2Contact*); //0xf26a20
      EndContact(b2Contact*); //0xf26a30
      PostSolve(b2Contact*, b2ContactImpulse const*); //0xf26a50
      PreSolve(b2Contact*, b2Manifold const*); //0xf26a40
      ~b2ContactListener(); //0xf263f0
      ~b2ContactListener(); //0xf26a10
};

class b2ContactManager {
      AddPair(void*, void*); //0xf26830
      Collide(); //0xf26540
      Destroy(b2Contact*); //0xf26440
      FindNewContacts(); //0xf266e0
      b2ContactManager(); //0xf26400
};

class b2ContactSolver {
      InitializeVelocityConstraints(); //0xf2d290
      SolvePositionConstraints(); //0xf2e370
      SolveTOIPositionConstraints(int, int); //0xf2eb70
      SolveVelocityConstraints(); //0xf2da60
      StoreImpulses(); //0xf2e2e0
      WarmStart(); //0xf2d8b0
      b2ContactSolver(b2ContactSolverDef*); //0xf2cff0
      ~b2ContactSolver(); //0xf2d270
};

class b2DistanceJoint {
      Dump(); //0xf30000
      GetAnchorA(); //0xf2ff30
      GetAnchorB(); //0xf2ff80
      GetReactionForce(float); //0xf2ffd0
      GetReactionTorque(float); //0xf2fff0
      InitVelocityConstraints(b2SolverData const&); //0xf2f570
      SolvePositionConstraints(b2SolverData const&); //0xf2fc20
      SolveVelocityConstraints(b2SolverData const&); //0xf2fa40
      b2DistanceJoint(b2DistanceJointDef const*); //0xf2f4f0
      ~b2DistanceJoint(); //0xf30130
};

class b2DistanceJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&, b2Vec2 const&); //0xf2f440
};

class b2DistanceProxy {
      Set(b2Shape const*, int); //0xf1fb80
};

class b2Draw {
      AppendFlags(unsigned int); //0xf128a0
      ClearFlags(unsigned int); //0xf128b0
      GetFlags(); //0xf12890
      SetFlags(unsigned int); //0xf12880
      b2Draw(); //0xf12860
      ~b2Draw(); //0xf128c0
      ~b2Draw(); //0xf128d0
};

class b2DynamicTree {
      AllocateNode(); //0xf20d30
      Balance(int); //0xf21550
      ComputeHeight(); //0xf21a80
      ComputeHeight(int); //0xf21a30
      CreateProxy(b2AABB const&, void*); //0xf20e90
      DestroyProxy(int); //0xf212c0
      FreeNode(int); //0xf20e60
      GetAreaRatio(); //0xf219a0
      GetHeight(); //0xf21980
      GetMaxBalance(); //0xf21b00
      InsertLeaf(int); //0xf20f10
      MoveProxy(int, b2AABB const&, b2Vec2 const&); //0xf21460
      RebuildBottomUp(); //0xf21b60
      RemoveLeaf(int); //0xf21310
      ShiftOrigin(b2Vec2 const&); //0xf21de0
      Validate(); //0xf21af0
      ValidateMetrics(int); //0xf21aa0
      ValidateStructure(int); //0xf21a90
      b2DynamicTree(); //0xf20c60
      ~b2DynamicTree(); //0xf20d20
};

class b2EPCollider {
      Collide(b2Manifold*, b2EdgeShape const*, b2Transform const&, b2PolygonShape const*, b2Transform const&); //0xf1d1f0
      ComputeEdgeSeparation(); //0xf1e0b0
      ComputePolygonSeparation(); //0xf1e1a0
};

class b2EdgeAndCircleContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2f0c0
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2f110
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2f170
      b2EdgeAndCircleContact(b2Fixture*, b2Fixture*); //0xf2f140
      ~b2EdgeAndCircleContact(); //0xf2f190
};

class b2EdgeAndPolygonContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2f1a0
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2f1f0
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2f250
      b2EdgeAndPolygonContact(b2Fixture*, b2Fixture*); //0xf2f220
      ~b2EdgeAndPolygonContact(); //0xf2f270
};

class b2EdgeShape {
      Clone(b2BlockAllocator*); //0xf240b0
      ComputeAABB(b2AABB*, b2Transform const&, int); //0xf24420
      ComputeDistance(b2Transform const&, b2Vec2 const&, float*, b2Vec2*, int); //0xf24130
      ComputeMass(b2MassData*, float); //0xf244a0
      GetChildCount(); //0xf24110
      RayCast(b2RayCastOutput*, b2RayCastInput const&, b2Transform const&, int); //0xf24230
      Set(b2Vec2 const&, b2Vec2 const&); //0xf24090
      TestPoint(b2Transform const&, b2Vec2 const&); //0xf24120
      ~b2EdgeShape(); //0xf244d0
};

class b2Fixture {
      Create(b2BlockAllocator*, b2Body*, b2FixtureDef const*); //0xf27900
      CreateProxies(b2BroadPhase*, b2Transform const&); //0xf27af0
      Destroy(b2BlockAllocator*); //0xf27a50
      DestroyProxies(b2BroadPhase*); //0xf27b80
      Dump(int); //0xf27eb0
      Refilter(); //0xf27dd0
      SetFilterData(b2Filter const&); //0xf27d10
      SetSensor(bool); //0xf27e80
      Synchronize(b2BroadPhase*, b2Transform const&, b2Transform const&); //0xf27be0
      b2Fixture(); //0xf278b0
};

class b2FrictionJoint {
      Dump(); //0xf30b20
      GetAnchorA(); //0xf30960
      GetAnchorB(); //0xf309b0
      GetMaxForce(); //0xf30a90
      GetMaxTorque(); //0xf30b10
      GetReactionForce(float); //0xf30a00
      GetReactionTorque(float); //0xf30a10
      InitVelocityConstraints(b2SolverData const&); //0xf30230
      SetMaxForce(float); //0xf30a20
      SetMaxTorque(float); //0xf30aa0
      SolvePositionConstraints(b2SolverData const&); //0xf30950
      SolveVelocityConstraints(b2SolverData const&); //0xf30650
      b2FrictionJoint(b2FrictionJointDef const*); //0xf301c0
      ~b2FrictionJoint(); //0xf30c10
};

class b2FrictionJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&); //0xf30140
};

class b2GearJoint {
      Dump(); //0xf324a0
      GetAnchorA(); //0xf32350
      GetAnchorB(); //0xf323a0
      GetRatio(); //0xf32490
      GetReactionForce(float); //0xf323f0
      GetReactionTorque(float); //0xf32410
      InitVelocityConstraints(b2SolverData const&); //0xf30f80
      SetRatio(float); //0xf32430
      SolvePositionConstraints(b2SolverData const&); //0xf31b00
      SolveVelocityConstraints(b2SolverData const&); //0xf317c0
      b2GearJoint(b2GearJointDef const*); //0xf30c20
      ~b2GearJoint(); //0xf32570
};

class b2Island {
      Report(b2ContactVelocityConstraint const*); //0xf28c40
      Solve(b2Profile*, b2TimeStep const&, b2Vec2 const&, bool); //0xf28310
      SolveTOI(b2TimeStep const&, int, int); //0xf28d90
      b2Island(int, int, int, b2StackAllocator*, b2ContactListener*); //0xf28230
      ~b2Island(); //0xf282c0
};

class b2Joint {
      Create(b2JointDef const*, b2BlockAllocator*); //0xf32580
      Destroy(b2Joint*, b2BlockAllocator*); //0xf32720
      Dump(); //0xf32880
      IsActive(); //0xf32860
      ShiftOrigin(b2Vec2 const&); //0xf30110
      b2Joint(b2JointDef const*); //0xf327d0
      ~b2Joint(); //0xf30120
      ~b2Joint(); //0xf32890
};

class b2Mat33 {
      GetInverse22(b2Mat33*); //0xf12b00
      GetSymInverse33(b2Mat33*); //0xf12b80
      Solve22(b2Vec2 const&); //0xf12a90
      Solve33(b2Vec3 const&); //0xf128e0
};

class b2MotorJoint {
      Dump(); //0xf33410
      GetAnchorA(); //0xf331e0
      GetAnchorB(); //0xf331f0
      GetAngularOffset(); //0xf33400
      GetLinearOffset(); //0xf33390
      GetMaxForce(); //0xf33290
      GetMaxTorque(); //0xf33310
      GetReactionForce(float); //0xf33200
      GetReactionTorque(float); //0xf33210
      InitVelocityConstraints(b2SolverData const&); //0xf32980
      SetAngularOffset(float); //0xf333a0
      SetLinearOffset(b2Vec2 const&); //0xf33320
      SetMaxForce(float); //0xf33220
      SetMaxTorque(float); //0xf332a0
      SolvePositionConstraints(b2SolverData const&); //0xf331d0
      SolveVelocityConstraints(b2SolverData const&); //0xf32e50
      b2MotorJoint(b2MotorJointDef const*); //0xf32900
      ~b2MotorJoint(); //0xf33510
};

class b2MotorJointDef {
      Initialize(b2Body*, b2Body*); //0xf328a0
};

class b2MouseJoint {
      Dump(); //0xf33d30
      GetAnchorA(); //0xf33c80
      GetAnchorB(); //0xf33c90
      GetDampingRatio(); //0xf337c0
      GetFrequency(); //0xf337a0
      GetMaxForce(); //0xf33780
      GetReactionForce(float); //0xf33ce0
      GetReactionTorque(float); //0xf33cf0
      GetTarget(); //0xf33760
      InitVelocityConstraints(b2SolverData const&); //0xf337d0
      SetDampingRatio(float); //0xf337b0
      SetFrequency(float); //0xf33790
      SetMaxForce(float); //0xf33770
      SetTarget(b2Vec2 const&); //0xf33730
      ShiftOrigin(b2Vec2 const&); //0xf33d00
      SolvePositionConstraints(b2SolverData const&); //0xf33c70
      SolveVelocityConstraints(b2SolverData const&); //0xf33b00
      b2MouseJoint(b2MouseJointDef const*); //0xf33520
      ~b2MouseJoint(); //0xf33d40
};

class b2ParticleColor {
      GetColor(); //0xf12fc0
      Set(b2Color const&); //0xf12ff0
      b2ParticleColor(b2Color const&); //0xf12f80
};

class b2ParticleGroup {
      GetAngle(); //0xf13300
      GetAngularVelocity(); //0xf132d0
      GetBufferIndex(); //0xf130a0
      GetCenter(); //0xf132b0
      GetGroupFlags(); //0xf130b0
      GetInertia(); //0xf132a0
      GetLinearVelocity(); //0xf132c0
      GetMass(); //0xf130d0
      GetPosition(); //0xf132f0
      GetTransform(); //0xf132e0
      GetUserData(); //0xf13320
      SetGroupFlags(int); //0xf130c0
      SetUserData(void*); //0xf13330
      UpdateStatistics(); //0xf130e0
      b2ParticleGroup(); //0xf13030
      ~b2ParticleGroup(); //0xf13090
};

class b2ParticleSystem {
      AddContact(int, int); //0xf16cf0
      ComputeDepthForGroup(b2ParticleGroup*); //0xf146f0
      ComputeParticleCollisionEnergy(); //0xf19c00
      CreateParticle(b2ParticleDef const&); //0xf13550
      CreateParticleGroup(b2ParticleGroupDef const&); //0xf13b70
      DestroyParticle(int, bool); //0xf13a90
      DestroyParticleGroup(b2ParticleGroup*); //0xf16900
      DestroyParticlesInGroup(b2ParticleGroup*, bool); //0xf13b40
      DestroyParticlesInShape(b2Shape const&, b2Transform const&, bool); //0xf13ab0
      GetCriticalPressure(b2TimeStep const&); //0xf19270
      GetCriticalVelocity(b2TimeStep const&); //0xf192b0
      GetCriticalVelocitySquared(b2TimeStep const&); //0xf17bf0
      GetParticleColorBuffer(); //0xf193c0
      GetParticleColorBuffer(); //0xf194b0
      GetParticleDamping(); //0xf19350
      GetParticleDensity(); //0xf19310
      GetParticleFlagsBuffer(); //0xf19390
      GetParticleFlagsBuffer(); //0xf19480
      GetParticleGravityScale(); //0xf19330
      GetParticleGroupBuffer(); //0xf19500
      GetParticleGroupBuffer(); //0xf19660
      GetParticleInvMass(); //0xf19290
      GetParticleMass(); //0xf19370
      GetParticleMaxCount(); //0xf19460
      GetParticlePositionBuffer(); //0xf193a0
      GetParticlePositionBuffer(); //0xf19490
      GetParticleRadius(); //0xf19360
      GetParticleStride(); //0xf14320
      GetParticleUserDataBuffer(); //0xf19410
      GetParticleUserDataBuffer(); //0xf19510
      GetParticleVelocityBuffer(); //0xf193b0
      GetParticleVelocityBuffer(); //0xf194a0
      JoinParticleGroups(b2ParticleGroup*, b2ParticleGroup*); //0xf14d10
      QueryAABB(b2QueryCallback*, b2AABB const&); //0xf196c0
      RayCast(b2RayCastCallback*, b2Vec2 const&, b2Vec2 const&); //0xf19860
      RotateBuffer(int, int, int); //0xf151f0
      SetParticleColorBuffer(b2ParticleColor*, int); //0xf19620
      SetParticleDamping(float); //0xf19340
      SetParticleDensity(float); //0xf192f0
      SetParticleFlagsBuffer(unsigned int*, int); //0xf19560
      SetParticleGravityScale(float); //0xf19320
      SetParticleMaxCount(int); //0xf19470
      SetParticlePositionBuffer(b2Vec2*, int); //0xf195a0
      SetParticleRadius(float); //0xf192c0
      SetParticleUserDataBuffer(void**, int); //0xf19670
      SetParticleVelocityBuffer(b2Vec2*, int); //0xf195e0
      Solve(b2TimeStep const&); //0xf170c0
      SolveCollision(b2TimeStep const&); //0xf16fb0
      SolveColorMixing(b2TimeStep const&); //0xf18ab0
      SolveDamping(b2TimeStep const&); //0xf18fd0
      SolveElastic(b2TimeStep const&); //0xf18560
      SolvePowder(b2TimeStep const&); //0xf18060
      SolvePressure(b2TimeStep const&); //0xf18c10
      SolveRigid(b2TimeStep const&); //0xf17c00
      SolveSolid(b2TimeStep const&); //0xf18970
      SolveSpring(b2TimeStep const&); //0xf18860
      SolveTensile(b2TimeStep const&); //0xf182c0
      SolveViscous(b2TimeStep const&); //0xf17de0
      SolveWall(b2TimeStep const&); //0xf17da0
      SolveZombie(); //0xf17500
      UpdateBodyContacts(); //0xf16e80
      UpdateContacts(bool); //0xf14330
      b2ParticleSystem(); //0xf13340
      ~b2ParticleSystem(); //0xf13430
};

class b2ParticleSystem::CreateParticleGroupCallback {
      operator(); //0xf149a0
};

class b2ParticleSystem::JoinParticleGroupsCallback {
      operator(); //0xf169b0
};

class b2PolygonAndCircleContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2f280
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2f2d0
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2f330
      b2PolygonAndCircleContact(b2Fixture*, b2Fixture*); //0xf2f300
      ~b2PolygonAndCircleContact(); //0xf2f350
};

class b2PolygonContact {
      Create(b2Fixture*, int, b2Fixture*, int, b2BlockAllocator*); //0xf2f360
      Destroy(b2Contact*, b2BlockAllocator*); //0xf2f3b0
      Evaluate(b2Manifold*, b2Transform const&, b2Transform const&); //0xf2f410
      b2PolygonContact(b2Fixture*, b2Fixture*); //0xf2f3e0
      ~b2PolygonContact(); //0xf2f430
};

class b2PolygonShape {
      Clone(b2BlockAllocator*); //0xf244e0
      ComputeAABB(b2AABB*, b2Transform const&, int); //0xf25090
      ComputeDistance(b2Transform const&, b2Vec2 const&, float*, b2Vec2*, int); //0xf24d00
      ComputeMass(b2MassData*, float); //0xf251b0
      GetChildCount(); //0xf24710
      RayCast(b2RayCastOutput*, b2RayCastInput const&, b2Transform const&, int); //0xf24ee0
      Set(b2Vec2 const*, int); //0xf24720
      SetAsBox(float, float); //0xf24550
      SetAsBox(float, float, b2Vec2 const&, float); //0xf245c0
      TestPoint(b2Transform const&, b2Vec2 const&); //0xf24c40
      Validate(); //0xf25440
      ~b2PolygonShape(); //0xf25500
};

class b2PositionSolverManifold {
      Initialize(b2ContactPositionConstraint*, b2Transform const&, b2Transform const&, int); //0xf2e880
};

class b2PrismaticJoint {
      Dump(); //0xf35930
      EnableLimit(bool); //0xf356e0
      EnableMotor(bool); //0xf35830
      GetAnchorA(); //0xf353b0
      GetAnchorB(); //0xf35400
      GetJointSpeed(); //0xf35580
      GetJointTranslation(); //0xf354b0
      GetLowerLimit(); //0xf35740
      GetMotorForce(float); //0xf35920
      GetReactionForce(float); //0xf35450
      GetReactionTorque(float); //0xf354a0
      GetUpperLimit(); //0xf35750
      InitVelocityConstraints(b2SolverData const&); //0xf33f50
      IsLimitEnabled(); //0xf356d0
      IsMotorEnabled(); //0xf35820
      SetLimits(float, float); //0xf35760
      SetMaxMotorForce(float); //0xf358d0
      SetMotorSpeed(float); //0xf35880
      SolvePositionConstraints(b2SolverData const&); //0xf34bd0
      SolveVelocityConstraints(b2SolverData const&); //0xf34640
      b2PrismaticJoint(b2PrismaticJointDef const*); //0xf33e10
      ~b2PrismaticJoint(); //0xf35ac0
};

class b2PrismaticJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&, b2Vec2 const&); //0xf33d50
};

class b2PulleyJoint {
      Dump(); //0xf36950
      GetAnchorA(); //0xf36750
      GetAnchorB(); //0xf367a0
      GetCurrentLengthA(); //0xf36870
      GetCurrentLengthB(); //0xf368e0
      GetGroundAnchorA(); //0xf36820
      GetGroundAnchorB(); //0xf36830
      GetLengthA(); //0xf36840
      GetLengthB(); //0xf36850
      GetRatio(); //0xf36860
      GetReactionForce(float); //0xf367f0
      GetReactionTorque(float); //0xf36810
      InitVelocityConstraints(b2SolverData const&); //0xf35ca0
      ShiftOrigin(b2Vec2 const&); //0xf36ab0
      SolvePositionConstraints(b2SolverData const&); //0xf36370
      SolveVelocityConstraints(b2SolverData const&); //0xf36160
      b2PulleyJoint(b2PulleyJointDef const*); //0xf35be0
      ~b2PulleyJoint(); //0xf36b10
};

class b2PulleyJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&, b2Vec2 const&, b2Vec2 const&, b2Vec2 const&, float); //0xf35ad0
};

class b2QueryCallback {
      ReportParticle(int); //0xf19d40
      ~b2QueryCallback(); //0xf170b0
};

class b2RevoluteJoint {
      Dump(); //0xf37fa0
      EnableLimit(bool); //0xf37e60
      EnableMotor(bool); //0xf37d50
      GetAnchorA(); //0xf37c40
      GetAnchorB(); //0xf37c90
      GetJointAngle(); //0xf37d00
      GetJointSpeed(); //0xf37d20
      GetLowerLimit(); //0xf37ec0
      GetMotorTorque(float); //0xf37da0
      GetReactionForce(float); //0xf37ce0
      GetReactionTorque(float); //0xf37cf0
      GetUpperLimit(); //0xf37ed0
      InitVelocityConstraints(b2SolverData const&); //0xf36c60
      IsLimitEnabled(); //0xf37e50
      IsMotorEnabled(); //0xf37d40
      SetLimits(float, float); //0xf37ee0
      SetMaxMotorTorque(float); //0xf37e00
      SetMotorSpeed(float); //0xf37db0
      SolvePositionConstraints(b2SolverData const&); //0xf37750
      SolveVelocityConstraints(b2SolverData const&); //0xf371f0
      b2RevoluteJoint(b2RevoluteJointDef const*); //0xf36bb0
      ~b2RevoluteJoint(); //0xf38110
};

class b2RevoluteJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&); //0xf36b20
};

class b2Rope {
      Draw(b2Draw*); //0xf1c730
      Initialize(b2RopeDef const*); //0xf1be40
      SetAngle(float); //0xf1c6a0
      SolveC2(); //0xf1c1c0
      SolveC3(); //0xf1c300
      Step(float, int); //0xf1c030
      b2Rope(); //0xf1bdd0
      ~b2Rope(); //0xf1be00
};

class b2RopeJoint {
      Dump(); //0xf38bb0
      GetAnchorA(); //0xf38ac0
      GetAnchorB(); //0xf38b10
      GetLimitState(); //0xf38ba0
      GetMaxLength(); //0xf38b90
      GetReactionForce(float); //0xf38b60
      GetReactionTorque(float); //0xf38b80
      InitVelocityConstraints(b2SolverData const&); //0xf38180
      SolvePositionConstraints(b2SolverData const&); //0xf387d0
      SolveVelocityConstraints(b2SolverData const&); //0xf385d0
      b2RopeJoint(b2RopeJointDef const*); //0xf38120
      ~b2RopeJoint(); //0xf38c90
};

class b2SeparationFunction {
      Evaluate(int, int, float); //0xf23470
      FindMinSeparation(int*, int*, float); //0xf22bd0
      Initialize(b2SimplexCache const*, b2DistanceProxy const*, b2Sweep const&, b2DistanceProxy const*, b2Sweep const&, float); //0xf22630
};

class b2Shape {
      ~b2Shape(); //0xf24070
};

class b2Simplex {
      ReadCache(b2SimplexCache const*, b2DistanceProxy const*, b2Transform const&, b2DistanceProxy const*, b2Transform const&); //0xf20a00
      Solve2(); //0xf1fc10
      Solve3(); //0xf1fcd0
};

class b2StackAllocator {
      Allocate(int); //0xf12d20
      Free(void*); //0xf12dc0
      GetMaxAllocation(); //0xf12e20
      b2StackAllocator(); //0xf12cf0
      ~b2StackAllocator(); //0xf12d10
};

class b2Timer {
      GetMilliseconds(); //0xf12ed0
      Reset(); //0xf12e80
      b2Timer(); //0xf12e30
};

class b2VoronoiDiagram {
      AddGenerator(b2Vec2 const&, int); //0xf1b1d0
      Generate(float); //0xf1b1f0
      b2VoronoiDiagram(b2StackAllocator*, int); //0xf1b160
      ~b2VoronoiDiagram(); //0xf1b1a0
};

class b2WeldJoint {
      Dump(); //0xf39c90
      GetAnchorA(); //0xf39bd0
      GetAnchorB(); //0xf39c20
      GetReactionForce(float); //0xf39c70
      GetReactionTorque(float); //0xf39c80
      InitVelocityConstraints(b2SolverData const&); //0xf38db0
      SolvePositionConstraints(b2SolverData const&); //0xf396c0
      SolveVelocityConstraints(b2SolverData const&); //0xf39320
      b2WeldJoint(b2WeldJointDef const*); //0xf38d30
      ~b2WeldJoint(); //0xf39da0
};

class b2WeldJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&); //0xf38ca0
};

class b2WheelJoint {
      Dump(); //0xf3af30
      EnableMotor(bool); //0xf3ae30
      GetAnchorA(); //0xf3ac40
      GetAnchorB(); //0xf3ac90
      GetJointSpeed(); //0xf3ae00
      GetJointTranslation(); //0xf3ad30
      GetMotorTorque(float); //0xf3af20
      GetReactionForce(float); //0xf3ace0
      GetReactionTorque(float); //0xf3ad20
      InitVelocityConstraints(b2SolverData const&); //0xf39f50
      IsMotorEnabled(); //0xf3ae20
      SetMaxMotorTorque(float); //0xf3aed0
      SetMotorSpeed(float); //0xf3ae80
      SolvePositionConstraints(b2SolverData const&); //0xf3a8e0
      SolveVelocityConstraints(b2SolverData const&); //0xf3a600
      b2WheelJoint(b2WheelJointDef const*); //0xf39e60
      ~b2WheelJoint(); //0xf3b090
};

class b2WheelJointDef {
      Initialize(b2Body*, b2Body*, b2Vec2 const&, b2Vec2 const&); //0xf39db0
};

class b2World {
      ClearForces(); //0xf2add0
      ComputeParticleCollisionEnergy(); //0xf2bd90
      CreateBody(b2BodyDef const*); //0xf294b0
      CreateJoint(b2JointDef const*); //0xf298e0
      CreateParticle(b2ParticleDef const&); //0xf2bb90
      CreateParticleGroup(b2ParticleGroupDef const&); //0xf2bbe0
      DestroyBody(b2Body*); //0xf29540
      DestroyJoint(b2Joint*); //0xf29730
      DestroyParticle(int, bool); //0xf2bbb0
      DestroyParticlesInGroup(b2ParticleGroup*, bool); //0xf2bc20
      DestroyParticlesInShape(b2Shape const&, b2Transform const&, bool); //0xf2bbc0
      DrawDebugData(); //0xf2b4a0
      DrawJoint(b2Joint*); //0xf2b280
      DrawParticleSystem(b2ParticleSystem const&); //0xf2b400
      DrawShape(b2Fixture*, b2Transform const&, b2Color const&); //0xf2af10
      Dump(); //0xf2b930
      GetParticleBodyContactCount(); //0xf2bd80
      GetParticleBodyContacts(); //0xf2bd70
      GetParticleColorBuffer(); //0xf2bc70
      GetParticleColorBuffer(); //0xf2bcc0
      GetParticleContactCount(); //0xf2bd60
      GetParticleContacts(); //0xf2bd50
      GetParticleDamping(); //0xf2bb60
      GetParticleDensity(); //0xf2bb20
      GetParticleFlagsBuffer(); //0xf2bc40
      GetParticleFlagsBuffer(); //0xf2bc90
      GetParticleGravityScale(); //0xf2bb40
      GetParticleGroupBuffer(); //0xf2bcd0
      GetParticleGroupBuffer(); //0xf2bd30
      GetParticleMaxCount(); //0xf2baf0
      GetParticlePositionBuffer(); //0xf2bc50
      GetParticlePositionBuffer(); //0xf2bca0
      GetParticleRadius(); //0xf2bb80
      GetParticleUserDataBuffer(); //0xf2bc80
      GetParticleUserDataBuffer(); //0xf2bce0
      GetParticleVelocityBuffer(); //0xf2bc60
      GetParticleVelocityBuffer(); //0xf2bcb0
      GetProxyCount(); //0xf2b800
      GetTreeBalance(); //0xf2b820
      GetTreeHeight(); //0xf2b810
      GetTreeQuality(); //0xf2b830
      JoinParticleGroups(b2ParticleGroup*, b2ParticleGroup*); //0xf2bc00
      QueryAABB(b2QueryCallback*, b2AABB const&); //0xf2ae00
      RayCast(b2RayCastCallback*, b2Vec2 const&, b2Vec2 const&); //0xf2ae70
      SetAllowSleeping(bool); //0xf29a30
      SetContactFilter(b2ContactFilter*); //0xf29480
      SetContactListener(b2ContactListener*); //0xf29490
      SetDebugDraw(b2Draw*); //0xf294a0
      SetDestructionListener(b2DestructionListener*); //0xf29470
      SetParticleColorBuffer(b2ParticleColor*, int); //0xf2bd20
      SetParticleDamping(float); //0xf2bb50
      SetParticleDensity(float); //0xf2bb10
      SetParticleFlagsBuffer(unsigned int*, int); //0xf2bcf0
      SetParticleGravityScale(float); //0xf2bb30
      SetParticleMaxCount(int); //0xf2bb00
      SetParticlePositionBuffer(b2Vec2*, int); //0xf2bd00
      SetParticleRadius(float); //0xf2bb70
      SetParticleUserDataBuffer(void**, int); //0xf2bd40
      SetParticleVelocityBuffer(b2Vec2*, int); //0xf2bd10
      ShiftOrigin(b2Vec2 const&); //0xf2b840
      Solve(b2TimeStep const&); //0xf29a80
      SolveTOI(b2TimeStep const&); //0xf29e90
      Step(float, int, int); //0xf2abc0
      b2World(b2Vec2 const&); //0xf29320
      ~b2World(); //0xf293f0
};

class b2WorldManifold {
      Initialize(b2Manifold const*, b2Transform const&, float, b2Transform const&, float); //0xf1f380
};

class cARRAY_MEMORY<char const*> {
      setLength(int); //0x135baa0
      ~cARRAY_MEMORY(); //0x135b4a0
};

class cARRAY_OF_POINTERS {
      AddPointer(void*); //0x130e8f0
      ~cARRAY_OF_POINTERS(); //0x130e450
};

class cARRAY_STRUCTURE<bool> {
      ~cARRAY_STRUCTURE(); //0x12290e0
};

class cARRAY_STRUCTURE<int> {
      Insert(int, int); //0x1428f20
      Remove(int); //0x1429420
      ~cARRAY_STRUCTURE(); //0x135b530
};

class cArray<CEvent*> {
      ClearElement(unsigned long); //0x1429830
      Insert(unsigned long, CEvent*); //0x1429060
      ~cArray(); //0x1429730
      ~cArray(); //0x14297b0
};

class cArray<CInstance*> {
      ClearElement(unsigned long); //0x121fa40
      ~cArray(); //0x121b1e0
      ~cArray(); //0x121f9c0
};

class cArray<CRoom*> {
      ClearElement(unsigned long); //0x120e570
      Insert(unsigned long, CRoom*); //0x135c200
      ~cArray(); //0x120e470
      ~cArray(); //0x120e4f0
};

class cArray<CTimeLine*> {
      ClearElement(unsigned long); //0x142a940
      Insert(unsigned long, CTimeLine*); //0x142a370
      ~cArray(); //0x142a840
      ~cArray(); //0x142a8c0
};

class cArray<DLL_RFunction*> {
      ClearElement(unsigned long); //0x1409980
      ~cArray(); //0x1409880
      ~cArray(); //0x1409900
};

class cArray<char*> {
      ClearElement(unsigned long); //0x121fae0
      ~cArray(); //0x121b260
      ~cArray(); //0x121fa60
};

class cAudio_Sound {
      FreeALBuffer(); //0x14887c0
      GetLoopEnd(); //0x1487870
      GetLoopStart(); //0x1487610
      GetNumChannels(); //0x1488870
      GetSampleRate(); //0x1488820
      GetTrueLoopEnd(); //0x14887f0
      LoadFromChunk(YYAL_Asset const*); //0x14882e0
      Prepare(); //0x1482820
      SetLoopEnd(double); //0x1487a00
      SetLoopStart(double); //0x14877a0
      cAudio_Sound(); //0x14885e0
      ~cAudio_Sound(); //0x1488690
};

class cInputSink {
      LoadPlaybackBuffer(char const*); //0x13d93b0
      PlaybackFrame(); //0x13d9660
      RecordFrame(); //0x13d9db0
      SaveRecording(char const*); //0x13d9c80
      StartPlayback(); //0x13da270
      StartRecording(int); //0x13d9a60
      StopPlayback(); //0x13d9630
      StopRecording(); //0x13d9da0
};

class cOwningArrayDelete<CEvent*> {
      ClearElement(unsigned long); //0x14296e0
      ~cOwningArrayDelete(); //0x14295b0
      ~cOwningArrayDelete(); //0x1429660
};

class cOwningArrayDelete<CRoom*> {
      ClearElement(unsigned long); //0x120e420
      ~cOwningArrayDelete(); //0x120df40
      ~cOwningArrayDelete(); //0x120e3a0
};

class cOwningArrayDelete<CTimeLine*> {
      ClearElement(unsigned long); //0x142a7f0
      ~cOwningArrayDelete(); //0x142a6e0
      ~cOwningArrayDelete(); //0x142a770
};

class cOwningArrayDelete<DLL_RFunction*> {
      ClearElement(unsigned long); //0x1409800
      ~cOwningArrayDelete(); //0x1406910
      ~cOwningArrayDelete(); //0x1409780
};

class cOwningArrayFree<char*> {
      ClearElement(unsigned long); //0x1365c60
      ~cOwningArrayFree(); //0x135f660
      ~cOwningArrayFree(); //0x1365be0
};

class default_thread {
      sleep(unsigned long); //0x149cc10
};

class std {
      __throw_bad_alloc(); //0x14d7060
      current_exception(); //0x14e15e0
      get_new_handler(); //0x1523490
      get_terminate(); //0x1523450
      get_unexpected(); //0x15233d0
      set_new_handler(void (*); //0x1523630
      set_terminate(void (*); //0x1523610
      set_unexpected(void (*); //0x15235f0
      terminate(); //0x15233e0
      uncaught_exception(); //0x14e1550
      uncaught_exceptions(); //0x14e1560
      unexpected(); //0x1523440
};

class std::__ndk1 {
      __call_once(unsigned long volatile&, void*, void (*); //0x14d6db0
      __cloc(); //0x14f2ce0
      __do_nothing(void*); //0x1500f00
      __get_classname(char const*, bool); //0x1523040
      __get_collation_name(char const*); //0x1522f90
      __get_sp_mut(void const*); //0x14d67d0
      __next_prime(unsigned long); //0x14d5820
      __thread_local_data(); //0x14e0360
      __throw_runtime_error(char const*); //0x1502530
      __throw_system_error(int, char const*); //0x14e0190
      align(unsigned long, unsigned long, void*&, unsigned long&); //0x14d6820
      future_category(); //0x14e09f0
      generic_category(); //0x14df7f0
      iostream_category(); //0x14e1740
      system_category(); //0x14df950
      to_string(__float128); //0x14de810
      to_string(double); //0x14de650
      to_string(float); //0x14de480
      to_string(int); //0x14dd030
      to_string(long long); //0x14dd320
      to_string(long); //0x14dd130
      to_string(unsigned int); //0x14dd510
      to_string(unsigned long long); //0x14dd740
      to_string(unsigned long); //0x14dd5b0
      to_wstring(__float128); //0x14dede0
      to_wstring(double); //0x14debe0
      to_wstring(float); //0x14de9d0
      to_wstring(int); //0x14dd8d0
      to_wstring(long long); //0x14ddcd0
      to_wstring(long); //0x14dda60
      to_wstring(unsigned int); //0x14ddf40
      to_wstring(unsigned long long); //0x14de270
      to_wstring(unsigned long); //0x14de060
};

class std::__ndk1::__alternate<char> {
      ~__alternate(); //0x11ec250
};

class std::__ndk1::__alternate<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ec2a0
};

class std::__ndk1::__alternate<char>::__exec_split(bool, std::__ndk1 {
      __state<char>&); //0x11ec2b0
};

class std::__ndk1::__assoc_sub_state {
      __execute(); //0x14e1000
      __make_ready(); //0x14e0dd0
      __on_zero_shared(); //0x14e0b00
      copy(); //0x14e0e10
      set_value(); //0x14e0b10
      set_value_at_thread_exit(); //0x14e0c20
      wait(); //0x14e0f70
};

class std::__ndk1::__assoc_sub_state::__sub_wait(std::__ndk1::unique_lock<std::__ndk1 {
      mutex>&); //0x14e0f00
};

class std::__ndk1::__assoc_sub_state::set_exception(std {
      exception_ptr); //0x14e0cb0
};

class std::__ndk1::__assoc_sub_state::set_exception_at_thread_exit(std {
      exception_ptr); //0x14e0d40
};

class std::__ndk1::__back_ref<char> {
      ~__back_ref(); //0x11e8550
};

class std::__ndk1::__back_ref<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11e8580
};

class std::__ndk1::__basic_string_common<true> {
      __throw_length_error(); //0x14dc2a0
      __throw_out_of_range(); //0x14dc300
};

class std::__ndk1::__begin_marked_subexpression<char> {
      ~__begin_marked_subexpression(); //0x11ebc80
};

class std::__ndk1::__begin_marked_subexpression<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ebcb0
};

class std::__ndk1::__check_grouping(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned int*, unsigned int*, unsigned int&); //0x1502d70
};

class std::__ndk1::__codecvt_utf16<char16_t, false> {
      do_always_noconv(); //0x1515350
      do_encoding(); //0x1515340
      do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&); //0x1515290
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1515360
      do_max_length(); //0x1515400
      do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&); //0x15151f0
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1515330
};

class std::__ndk1::__codecvt_utf16<char16_t, true> {
      do_always_noconv(); //0x1515590
      do_encoding(); //0x1515580
      do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&); //0x15154c0
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x15155a0
      do_max_length(); //0x1515640
      do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&); //0x1515420
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1515570
};

class std::__ndk1::__codecvt_utf16<char32_t, false> {
      do_always_noconv(); //0x15158a0
      do_encoding(); //0x1515890
      do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&); //0x1515760
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x15158b0
      do_max_length(); //0x15159b0
      do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&); //0x1515660
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1515880
};

class std::__ndk1::__codecvt_utf16<char32_t, true> {
      do_always_noconv(); //0x1515c30
      do_encoding(); //0x1515c20
      do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&); //0x1515ad0
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1515c40
      do_max_length(); //0x1515d40
      do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&); //0x15159d0
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1515c10
};

class std::__ndk1::__codecvt_utf16<wchar_t, false> {
      do_always_noconv(); //0x1514d30
      do_encoding(); //0x1514d20
      do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&); //0x1514bf0
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1514d40
      do_max_length(); //0x1514e40
      do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&); //0x1514af0
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1514d10
};

class std::__ndk1::__codecvt_utf16<wchar_t, true> {
      do_always_noconv(); //0x15150c0
      do_encoding(); //0x15150b0
      do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&); //0x1514f60
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x15150d0
      do_max_length(); //0x15151d0
      do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&); //0x1514e60
      do_unshift(mbstate_t&, char*, char*, char*&); //0x15150a0
};

class std::__ndk1::__codecvt_utf8<char16_t> {
      do_always_noconv(); //0x15147f0
      do_encoding(); //0x15147e0
      do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&); //0x1514630
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1514800
      do_max_length(); //0x1514980
      do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&); //0x1514510
      do_unshift(mbstate_t&, char*, char*, char*&); //0x15147d0
};

class std::__ndk1::__codecvt_utf8<char32_t> {
      do_always_noconv(); //0x1514aa0
      do_encoding(); //0x1514a90
      do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&); //0x1514a10
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1514ab0
      do_max_length(); //0x1514ad0
      do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&); //0x15149a0
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1514a80
};

class std::__ndk1::__codecvt_utf8<wchar_t> {
      do_always_noconv(); //0x15144c0
      do_encoding(); //0x15144b0
      do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&); //0x1514430
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x15144d0
      do_max_length(); //0x15144f0
      do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&); //0x15143c0
      do_unshift(mbstate_t&, char*, char*, char*&); //0x15144a0
};

class std::__ndk1::__codecvt_utf8_utf16<char16_t> {
      do_always_noconv(); //0x1516500
      do_encoding(); //0x15164f0
      do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&); //0x1516470
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1516510
      do_max_length(); //0x1516530
      do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&); //0x1516400
      do_unshift(mbstate_t&, char*, char*, char*&); //0x15164e0
};

class std::__ndk1::__codecvt_utf8_utf16<char32_t> {
      do_always_noconv(); //0x1516650
      do_encoding(); //0x1516640
      do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&); //0x15165c0
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1516660
      do_max_length(); //0x1516680
      do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&); //0x1516550
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1516630
};

class std::__ndk1::__codecvt_utf8_utf16<wchar_t> {
      do_always_noconv(); //0x15163b0
      do_encoding(); //0x15163a0
      do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&); //0x1516030
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x15163c0
      do_max_length(); //0x15163e0
      do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&); //0x1515d60
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1516390
};

class std::__ndk1::__deque_base_common<true> {
      __throw_out_of_range(); //0x148db90
};

class std::__ndk1::__empty_non_own_state<char> {
      ~__empty_non_own_state(); //0x11ec2d0
};

class std::__ndk1::__empty_non_own_state<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ec2e0
};

class std::__ndk1::__empty_state<char> {
      ~__empty_state(); //0x11e5680
};

class std::__ndk1::__empty_state<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11e56b0
};

class std::__ndk1::__end_marked_subexpression<char> {
      ~__end_marked_subexpression(); //0x11ebce0
};

class std::__ndk1::__end_marked_subexpression<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ebd10
};

class std::__ndk1::__end_state<char> {
      ~__end_state(); //0x11e5600
};

class std::__ndk1::__end_state<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11e5610
};

class std::__ndk1::__l_anchor<char> {
      ~__l_anchor(); //0x11e6220
};

class std::__ndk1::__l_anchor<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11e6250
};

class std::__ndk1::__loop<char> {
      ~__loop(); //0x11ebf60
};

class std::__ndk1::__loop<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ebfb0
};

class std::__ndk1::__loop<char>::__exec_split(bool, std::__ndk1 {
      __state<char>&); //0x11ec150
};

class std::__ndk1::__match_any<char> {
      ~__match_any(); //0x11ec820
};

class std::__ndk1::__match_any<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ec850
};

class std::__ndk1::__match_any_but_newline<char> {
      ~__match_any_but_newline(); //0x11e78c0
};

class std::__ndk1::__match_any_but_newline<char>::__exec(std::__ndk1 {
      __state<char>&); //0x15230f0
};

class std::__ndk1::__match_any_but_newline<wchar_t>::__exec(std::__ndk1 {
      __state<wchar_t>&); //0x1523130
};

class std::__ndk1::__match_char<char> {
      ~__match_char(); //0x11e8260
};

class std::__ndk1::__match_char<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11e8290
};

class std::__ndk1::__money_get<char>::__gather_info(bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >&, int&); //0x1502b70
};

class std::__ndk1::__money_get<wchar_t>::__gather_info(bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> >&, int&); //0x1504e50
};

class std::__ndk1::__money_put<char>::__format(char*, char*&, char*&, unsigned int, char const*, char const*, std::__ndk1::ctype<char> const&, bool, std::__ndk1::money_base::pattern const&, char, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, int); //0x15058f0
};

class std::__ndk1::__money_put<char>::__gather_info(bool, bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, char&, char&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >&, int&); //0x15056f0
};

class std::__ndk1::__money_put<wchar_t>::__format(wchar_t*, wchar_t*&, wchar_t*&, unsigned int, wchar_t const*, wchar_t const*, std::__ndk1::ctype<wchar_t> const&, bool, std::__ndk1::money_base::pattern const&, wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, int); //0x1506a10
};

class std::__ndk1::__money_put<wchar_t>::__gather_info(bool, bool, std::__ndk1::locale const&, std::__ndk1::money_base::pattern&, wchar_t&, wchar_t&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> >&, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> >&, int&); //0x1506810
};

class std::__ndk1::__murmur2_or_cityhash<unsigned long, 64ul> {
      __hash_len_0_to_16(char const*, unsigned long); //0x11d6fa0
      operator(); //0x11d6b80
};

class std::__ndk1::__narrow_to_utf8<16ul> {
      ~__narrow_to_utf8(); //0x15166a0
      ~__narrow_to_utf8(); //0x151ffd0
};

class std::__ndk1::__narrow_to_utf8<32ul> {
      ~__narrow_to_utf8(); //0x15166c0
      ~__narrow_to_utf8(); //0x151ffd0
};

class std::__ndk1::__num_get<char>::__stage2_float_loop(char, bool&, char&, char*, char*&, char, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, char*); //0x14f6d60
};

class std::__ndk1::__num_get<char>::__stage2_float_prep(std::__ndk1 {
      ios_base&, char*, char&, char&); //0x14f6bc0
};

class std::__ndk1::__num_get<char>::__stage2_int_loop(char, int, char*, char*&, unsigned int&, char, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned int*, unsigned int*&, char*); //0x14f2990
};

class std::__ndk1::__num_get<char>::__stage2_int_prep(std::__ndk1 {
      ios_base&, char*, char&); //0x14f7130
};

class std::__ndk1::__num_get<wchar_t>::__stage2_float_loop(wchar_t, bool&, char&, char*, char*&, wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, wchar_t*); //0x14f7460
};

class std::__ndk1::__num_get<wchar_t>::__stage2_float_prep(std::__ndk1 {
      ios_base&, wchar_t*, wchar_t&, wchar_t&); //0x14f72c0
};

class std::__ndk1::__num_get<wchar_t>::__stage2_int_loop(wchar_t, int, char*, char*&, unsigned int&, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned int*, unsigned int*&, wchar_t*); //0x14f6930
};

class std::__ndk1::__num_get<wchar_t>::__stage2_int_prep(std::__ndk1 {
      ios_base&, wchar_t*, wchar_t&); //0x14f7840
};

class std::__ndk1::__num_get_base::__get_base(std::__ndk1 {
      ios_base&); //0x1517150
};

class std::__ndk1::__num_put<char>::__widen_and_group_float(char*, char*, char*, char*, char*&, char*&, std::__ndk1 {
      locale const&); //0x14fadc0
};

class std::__ndk1::__num_put<char>::__widen_and_group_int(char*, char*, char*, char*, char*&, char*&, std::__ndk1 {
      locale const&); //0x14fa9b0
};

class std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(char*, char*, char*, wchar_t*, wchar_t*&, wchar_t*&, std::__ndk1 {
      locale const&); //0x14fb7f0
};

class std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(char*, char*, char*, wchar_t*, wchar_t*&, wchar_t*&, std::__ndk1 {
      locale const&); //0x14fb3d0
};

class std::__ndk1::__num_put_base {
      __format_float(char*, char const*, unsigned int); //0x1517210
      __format_int(char*, char const*, bool, unsigned int); //0x1517180
};

class std::__ndk1::__num_put_base::__identify_padding(char*, char*, std::__ndk1 {
      ios_base const&); //0x14f9070
};

class std::__ndk1::__owns_one_state<char> {
      ~__owns_one_state(); //0x11e56c0
      ~__owns_one_state(); //0x11e56e0
};

class std::__ndk1::__owns_two_states<char> {
      ~__owns_two_states(); //0x11ebf10
      ~__owns_two_states(); //0x11ec1e0
};

class std::__ndk1::__r_anchor<char> {
      ~__r_anchor(); //0x11e6290
};

class std::__ndk1::__r_anchor<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11e62c0
};

class std::__ndk1::__repeat_one_loop<char> {
      ~__repeat_one_loop(); //0x11ec230
};

class std::__ndk1::__repeat_one_loop<char>::__exec(std::__ndk1 {
      __state<char>&); //0x11ec240
};

class std::__ndk1::__shared_count {
      __add_shared(); //0x14d6670
      __release_shared(); //0x14d6680
      ~__shared_count(); //0x14d6640
      ~__shared_count(); //0x14d6650
};

class std::__ndk1::__shared_weak_count {
      __add_shared(); //0x14d66b0
      __add_weak(); //0x14d66c0
      __release_shared(); //0x14d66d0
      __release_weak(); //0x14d6720
      lock(); //0x14d6750
      ~__shared_weak_count(); //0x14d6640
      ~__shared_weak_count(); //0x14d6660
};

class std::__ndk1::__shared_weak_count::__get_deleter(std {
      type_info const&); //0x14d6780
};

class std::__ndk1::__sp_mut {
      lock(); //0x14d6790
      unlock(); //0x14d67b0
};

class std::__ndk1::__state<char> {
      ~__state(); //0x11e6ee0
};

class std::__ndk1::__thread_struct {
      __thread_struct(); //0x14e05f0
      ~__thread_struct(); //0x14e0620
};

class std::__ndk1::__thread_struct::__make_ready_at_thread_exit(std::__ndk1 {
      __assoc_sub_state*); //0x14e0650
};

class std::__ndk1::__thread_struct::notify_all_at_thread_exit(std::__ndk1::condition_variable*, std::__ndk1 {
      mutex*); //0x14e0640
};

class std::__ndk1::__time_get {
      __time_get(char const*); //0x1519610
      ~__time_get(); //0x1519720
};

class std::__ndk1::__time_get::__time_get(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x15196b0
};

class std::__ndk1::__time_get_c_storage<char> {
      __X(); //0x1519310
      __am_pm(); //0x1518fa0
      __c(); //0x1519410
      __months(); //0x1517e20
      __r(); //0x1519510
      __weeks(); //0x1517300
      __x(); //0x1519210
};

class std::__ndk1::__time_get_c_storage<wchar_t> {
      __X(); //0x1519390
      __am_pm(); //0x15190e0
      __c(); //0x1519490
      __months(); //0x1518560
      __r(); //0x1519590
      __weeks(); //0x1517740
      __x(); //0x1519290
};

class std::__ndk1::__time_get_storage<char> {
      __do_date_order(); //0x151d870
      __time_get_storage(char const*); //0x151b9a0
};

class std::__ndk1::__time_get_storage<char>::__analyze(char, std::__ndk1 {
      ctype<char> const&); //0x1519740
};

class std::__ndk1::__time_get_storage<char>::__time_get_storage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x151c110
};

class std::__ndk1::__time_get_storage<char>::init(std::__ndk1 {
      ctype<char> const&); //0x151ab50
};

class std::__ndk1::__time_get_storage<wchar_t> {
      __do_date_order(); //0x151dad0
      __time_get_storage(char const*); //0x151c880
};

class std::__ndk1::__time_get_storage<wchar_t>::__analyze(char, std::__ndk1 {
      ctype<wchar_t> const&); //0x151a0b0
};

class std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x151cfb0
};

class std::__ndk1::__time_get_storage<wchar_t>::init(std::__ndk1 {
      ctype<wchar_t> const&); //0x151b0a0
};

class std::__ndk1::__time_put {
      __do_put(char*, char*&, tm const*, char, char); //0x14ff8b0
      __do_put(wchar_t*, wchar_t*&, tm const*, char, char); //0x14ffc40
      __time_put(char const*); //0x151dd30
      ~__time_put(); //0x151de40
};

class std::__ndk1::__time_put::__time_put(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x151ddd0
};

class std::__ndk1::__vector_base_common<true> {
      __throw_length_error(); //0x14e16b0
      __throw_out_of_range(); //0x14e16c0
};

class std::__ndk1::__widen_from_utf8<16ul> {
      ~__widen_from_utf8(); //0x15166e0
      ~__widen_from_utf8(); //0x151ffd0
};

class std::__ndk1::__widen_from_utf8<32ul> {
      ~__widen_from_utf8(); //0x1516700
      ~__widen_from_utf8(); //0x151ffd0
};

class std::__ndk1::bad_weak_ptr {
      what(); //0x14d6630
      ~bad_weak_ptr(); //0x14d6600
      ~bad_weak_ptr(); //0x14d6610
};

class std::__ndk1::chrono::steady_clock {
      now(); //0x14d57d0
};

class std::__ndk1::chrono::system_clock {
      from_time_t(long); //0x14d57c0
      now(); //0x14d5740
};

class std::__ndk1::chrono::system_clock::to_time_t(std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1 {
      ratio<1l, 1000000l> > > const&); //0x14d57a0
};

class std::__ndk1::codecvt<char, char, mbstate_t> {
      do_always_noconv(); //0x1512260
      do_encoding(); //0x1512250
      do_in(mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&); //0x1512220
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1512270
      do_max_length(); //0x1512280
      do_out(mbstate_t&, char const*, char const*, char const*&, char*, char*, char*&); //0x1512200
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1512240
      ~codecvt(); //0x15121e0
      ~codecvt(); //0x151ffd0
};

class std::__ndk1::codecvt<char16_t, char, mbstate_t> {
      do_always_noconv(); //0x1513500
      do_encoding(); //0x15134f0
      do_in(mbstate_t&, char const*, char const*, char const*&, char16_t*, char16_t*, char16_t*&); //0x1513190
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1513510
      do_max_length(); //0x1513790
      do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char*, char*, char*&); //0x1512ed0
      do_unshift(mbstate_t&, char*, char*, char*&); //0x15134e0
      ~codecvt(); //0x1512eb0
      ~codecvt(); //0x151ffd0
};

class std::__ndk1::codecvt<char16_t, char8_t, mbstate_t> {
      do_always_noconv(); //0x15138a0
      do_encoding(); //0x1513890
      do_in(mbstate_t&, char8_t const*, char8_t const*, char8_t const*&, char16_t*, char16_t*, char16_t*&); //0x1513820
      do_length(mbstate_t&, char8_t const*, char8_t const*, unsigned long); //0x15138b0
      do_max_length(); //0x15138d0
      do_out(mbstate_t&, char16_t const*, char16_t const*, char16_t const*&, char8_t*, char8_t*, char8_t*&); //0x15137c0
      do_unshift(mbstate_t&, char8_t*, char8_t*, char8_t*&); //0x1513880
      ~codecvt(); //0x15137a0
      ~codecvt(); //0x151ffd0
};

class std::__ndk1::codecvt<char32_t, char, mbstate_t> {
      do_always_noconv(); //0x1513ee0
      do_encoding(); //0x1513ed0
      do_in(mbstate_t&, char const*, char const*, char const*&, char32_t*, char32_t*, char32_t*&); //0x1513c10
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1513ef0
      do_max_length(); //0x1514140
      do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char*, char*, char*&); //0x1513900
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1513ec0
      ~codecvt(); //0x15138e0
      ~codecvt(); //0x151ffd0
};

class std::__ndk1::codecvt<char32_t, char8_t, mbstate_t> {
      do_always_noconv(); //0x1514380
      do_encoding(); //0x1514370
      do_in(mbstate_t&, char8_t const*, char8_t const*, char8_t const*&, char32_t*, char32_t*, char32_t*&); //0x1514300
      do_length(mbstate_t&, char8_t const*, char8_t const*, unsigned long); //0x1514390
      do_max_length(); //0x15143b0
      do_out(mbstate_t&, char32_t const*, char32_t const*, char32_t const*&, char8_t*, char8_t*, char8_t*&); //0x1514170
      do_unshift(mbstate_t&, char8_t*, char8_t*, char8_t*&); //0x1514360
      ~codecvt(); //0x1514150
      ~codecvt(); //0x151ffd0
};

class std::__ndk1::codecvt<wchar_t, char, mbstate_t> {
      codecvt(char const*, unsigned long); //0x1512330
      codecvt(unsigned long); //0x1512290
      do_always_noconv(); //0x1512d30
      do_encoding(); //0x1512c70
      do_in(mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&); //0x15127f0
      do_length(mbstate_t&, char const*, char const*, unsigned long); //0x1512d40
      do_max_length(); //0x1512e40
      do_out(mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&); //0x1512430
      do_unshift(mbstate_t&, char*, char*, char*&); //0x1512b20
      ~codecvt(); //0x1512410
      ~codecvt(); //0x151f9f0
};

class std::__ndk1::codecvt_byname<char, char, mbstate_t> {
      ~codecvt_byname(); //0x1507500
      ~codecvt_byname(); //0x1507510
};

class std::__ndk1::codecvt_byname<char16_t, char, mbstate_t> {
      ~codecvt_byname(); //0x1507560
      ~codecvt_byname(); //0x1507570
};

class std::__ndk1::codecvt_byname<char16_t, char8_t, mbstate_t> {
      ~codecvt_byname(); //0x15075c0
      ~codecvt_byname(); //0x15075d0
};

class std::__ndk1::codecvt_byname<char32_t, char, mbstate_t> {
      ~codecvt_byname(); //0x1507590
      ~codecvt_byname(); //0x15075a0
};

class std::__ndk1::codecvt_byname<char32_t, char8_t, mbstate_t> {
      ~codecvt_byname(); //0x15075f0
      ~codecvt_byname(); //0x1507600
};

class std::__ndk1::codecvt_byname<wchar_t, char, mbstate_t> {
      ~codecvt_byname(); //0x1507530
      ~codecvt_byname(); //0x1507540
};

class std::__ndk1::collate<char> {
      do_compare(char const*, char const*, char const*, char const*); //0x14ee990
      do_hash(char const*, char const*); //0x14eea80
      do_transform(char const*, char const*); //0x14ee9f0
      ~collate(); //0x14ee960
      ~collate(); //0x14ee970
};

class std::__ndk1::collate<wchar_t> {
      do_compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*); //0x14eeb60
      do_hash(wchar_t const*, wchar_t const*); //0x14eec50
      do_transform(wchar_t const*, wchar_t const*); //0x14eeba0
      ~collate(); //0x14eeb30
      ~collate(); //0x14eeb40
};

class std::__ndk1::collate_byname<char> {
      collate_byname(char const*, unsigned long); //0x150fd80
      do_compare(char const*, char const*, char const*, char const*); //0x150fff0
      do_transform(char const*, char const*); //0x15101b0
      ~collate_byname(); //0x150ffa0
      ~collate_byname(); //0x150ffd0
};

class std::__ndk1::collate_byname<char>::collate_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long); //0x150ff00
};

class std::__ndk1::collate_byname<wchar_t> {
      collate_byname(char const*, unsigned long); //0x1510380
      do_compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*); //0x1510550
      do_transform(wchar_t const*, wchar_t const*); //0x1510740
      ~collate_byname(); //0x1510500
      ~collate_byname(); //0x1510530
};

class std::__ndk1::collate_byname<wchar_t>::collate_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long); //0x1510460
};

class std::__ndk1::condition_variable {
      notify_all(); //0x14d6ee0
      notify_one(); //0x14d6ed0
      ~condition_variable(); //0x14d6ec0
};

class std::__ndk1::condition_variable::__do_timed_wait(std::__ndk1::unique_lock<std::__ndk1::mutex>&, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1 {
      ratio<1l, 1000000000l> > >); //0x14d6f30
};

class std::__ndk1::condition_variable::wait(std::__ndk1::unique_lock<std::__ndk1 {
      mutex>&); //0x14d6ef0
};

class std::__ndk1::ctype<char> {
      classic_table(); //0x1510990
      ctype(unsigned long const*, bool, unsigned long); //0x1510f40
      do_narrow(char const*, char const*, char, char*); //0x15113c0
      do_narrow(char, char); //0x15113b0
      do_tolower(char); //0x1511110
      do_tolower(char*, char const*); //0x15111a0
      do_toupper(char); //0x1510fc0
      do_toupper(char*, char const*); //0x1511050
      do_widen(char const*, char const*, char*); //0x1511270
      do_widen(char); //0x1511260
      ~ctype(); //0x1510f70
      ~ctype(); //0x1510fa0
};

class std::__ndk1::ctype<wchar_t> {
      do_is(unsigned long, wchar_t); //0x1510970
      do_is(wchar_t const*, wchar_t const*, unsigned long*); //0x15109a0
      do_narrow(wchar_t const*, wchar_t const*, char, char*); //0x1510e20
      do_narrow(wchar_t, char); //0x1510e10
      do_scan_is(unsigned long, wchar_t const*, wchar_t const*); //0x15109f0
      do_scan_not(unsigned long, wchar_t const*, wchar_t const*); //0x1510a30
      do_tolower(wchar_t); //0x1510ba0
      do_tolower(wchar_t*, wchar_t const*); //0x1510c20
      do_toupper(wchar_t); //0x1510a60
      do_toupper(wchar_t*, wchar_t const*); //0x1510ae0
      do_widen(char const*, char const*, wchar_t*); //0x1510cf0
      do_widen(char); //0x1510ce0
      ~ctype(); //0x1510950
      ~ctype(); //0x151ffd0
};

class std::__ndk1::ctype_byname<char> {
      ctype_byname(char const*, unsigned long); //0x1511560
      do_tolower(char); //0x1511790
      do_tolower(char*, char const*); //0x15117b0
      do_toupper(char); //0x1511720
      do_toupper(char*, char const*); //0x1511740
      ~ctype_byname(); //0x1511700
      ~ctype_byname(); //0x151c0c0
};

class std::__ndk1::ctype_byname<char>::ctype_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long); //0x1511650
};

class std::__ndk1::ctype_byname<wchar_t> {
      ctype_byname(char const*, unsigned long); //0x1511800
      do_is(unsigned long, wchar_t); //0x15119a0
      do_is(wchar_t const*, wchar_t const*, unsigned long*); //0x1511b30
      do_narrow(wchar_t const*, wchar_t const*, char, char*); //0x1512130
      do_narrow(wchar_t, char); //0x15120d0
      do_scan_is(unsigned long, wchar_t const*, wchar_t const*); //0x1511c90
      do_scan_not(unsigned long, wchar_t const*, wchar_t const*); //0x1511dd0
      do_tolower(wchar_t); //0x1511f70
      do_tolower(wchar_t*, wchar_t const*); //0x1511f80
      do_toupper(wchar_t); //0x1511f10
      do_toupper(wchar_t*, wchar_t const*); //0x1511f20
      do_widen(char const*, char const*, wchar_t*); //0x1512030
      do_widen(char); //0x1511fd0
      ~ctype_byname(); //0x1511980
      ~ctype_byname(); //0x151cf80
};

class std::__ndk1::ctype_byname<wchar_t>::ctype_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long); //0x15118e0
};

class std::__ndk1::error_category {
      default_error_condition(int); //0x14df650
      error_category(); //0x14df630
      ~error_category(); //0x14df640
      ~error_category(); //0x14e0220
};

class std::__ndk1::error_category::equivalent(int, std::__ndk1 {
      error_condition const&); //0x14df660
};

class std::__ndk1::error_category::equivalent(std::__ndk1 {
      error_code const&, int); //0x14df680
};

class std::__ndk1::error_code {
      message(); //0x14df9c0
};

class std::__ndk1::error_condition {
      message(); //0x14df9a0
};

class std::__ndk1::future<void> {
      get(); //0x14e10a0
      ~future(); //0x14e1070
};

class std::__ndk1::future<void>::future(std::__ndk1 {
      __assoc_sub_state*); //0x14e1010
};

class std::__ndk1::future_error {
      ~future_error(); //0x14e0ad0
      ~future_error(); //0x14e0ae0
};

class std::__ndk1::future_error::future_error(std::__ndk1 {
      error_code); //0x14e0a50
};

class std::__ndk1::ios_base {
      __set_badbit_and_consider_rethrow(); //0x14e22f0
      __set_failbit_and_consider_rethrow(); //0x14e2310
      clear(unsigned int); //0x14e1d00
      getloc(); //0x14e1910
      init(void*); //0x14e1de0
      iword(int); //0x14e1950
      pword(int); //0x14e1a60
      register_callback(void (*); //0x14e1b80
      sync_with_stdio(bool); //0x14e2330
      xalloc(); //0x14e1930
      ~ios_base(); //0x14e1c60
      ~ios_base(); //0x14e1ce0
};

class std::__ndk1::ios_base::Init {
      Init(); //0x14eddf0
      ~Init(); //0x14ede60
};

class std::__ndk1::ios_base::__call_callbacks(std::__ndk1::ios_base {
      event); //0x14e1830
};

class std::__ndk1::ios_base::copyfmt(std::__ndk1 {
      ios_base const&); //0x14e1e30
};

class std::__ndk1::ios_base::failure {
      ~failure(); //0x14e1800
      ~failure(); //0x14e1810
};

class std::__ndk1::ios_base::failure::failure(char const*, std::__ndk1 {
      error_code const&); //0x14e17d0
};

class std::__ndk1::ios_base::failure::failure(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1 {
      error_code const&); //0x14e17a0
};

class std::__ndk1::ios_base::imbue(std::__ndk1 {
      locale const&); //0x14e1880
};

class std::__ndk1::ios_base::move(std::__ndk1 {
      ios_base&); //0x14e2100
};

class std::__ndk1::ios_base::swap(std::__ndk1 {
      ios_base&); //0x14e21a0
};

class std::__ndk1::locale {
      __global(); //0x150f2a0
      classic(); //0x150a520
      locale(); //0x150f310
      locale(char const*); //0x150f3f0
      name(); //0x150f720
      ~locale(); //0x150f390
};

class std::__ndk1::locale::__install_ctor(std::__ndk1::locale const&, std::__ndk1::locale {
      facet*, long); //0x150f7c0
};

class std::__ndk1::locale::facet {
      __on_zero_shared(); //0x150fd50
      ~facet(); //0x150fd30
      ~facet(); //0x151ffd0
};

class std::__ndk1::locale::global(std::__ndk1 {
      locale const&); //0x150f830
};

class std::__ndk1::locale::has_facet(std::__ndk1::locale {
      id&); //0x150fad0
};

class std::__ndk1::locale::id {
      __get(); //0x150fb60
      __init(); //0x150fd60
};

class std::__ndk1::locale::locale(std::__ndk1 {
      locale const&); //0x150f380
      locale const&, char const*, int); //0x150f540
};

class std::__ndk1::locale::locale(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x150f4f0
};

class std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1 {
      locale const&, int); //0x150f6c0
};

class std::__ndk1::locale::locale(std::__ndk1::locale const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, int); //0x150f660
};

class std::__ndk1::locale::use_facet(std::__ndk1::locale {
      id&); //0x150fbc0
};

class std::__ndk1::messages<char> {
      do_close(long); //0x1507420
};

class std::__ndk1::messages<char>::do_get(long, int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x1507390
};

class std::__ndk1::messages<char>::do_open(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1 {
      locale const&); //0x1507380
};

class std::__ndk1::messages<wchar_t> {
      do_close(long); //0x15074f0
};

class std::__ndk1::messages<wchar_t>::do_get(long, int, int, std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&); //0x1507440
};

class std::__ndk1::messages<wchar_t>::do_open(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1 {
      locale const&); //0x1507430
};

class std::__ndk1::moneypunct<char, false> {
      do_curr_symbol(); //0x14ffd70
      do_decimal_point(); //0x14ffd30
      do_frac_digits(); //0x14ffdc0
      do_grouping(); //0x14ffd50
      do_neg_format(); //0x14ffde0
      do_negative_sign(); //0x14ffdb0
      do_pos_format(); //0x14ffdd0
      do_positive_sign(); //0x14ffd90
      do_thousands_sep(); //0x14ffd40
};

class std::__ndk1::moneypunct<char, true> {
      do_curr_symbol(); //0x14ffe30
      do_decimal_point(); //0x14ffdf0
      do_frac_digits(); //0x14ffe80
      do_grouping(); //0x14ffe10
      do_neg_format(); //0x14ffea0
      do_negative_sign(); //0x14ffe70
      do_pos_format(); //0x14ffe90
      do_positive_sign(); //0x14ffe50
      do_thousands_sep(); //0x14ffe00
};

class std::__ndk1::moneypunct<wchar_t, false> {
      do_curr_symbol(); //0x14ffef0
      do_decimal_point(); //0x14ffeb0
      do_frac_digits(); //0x14fff40
      do_grouping(); //0x14ffed0
      do_neg_format(); //0x14fff60
      do_negative_sign(); //0x14fff30
      do_pos_format(); //0x14fff50
      do_positive_sign(); //0x14fff10
      do_thousands_sep(); //0x14ffec0
};

class std::__ndk1::moneypunct<wchar_t, true> {
      do_curr_symbol(); //0x14fffb0
      do_decimal_point(); //0x14fff70
      do_frac_digits(); //0x1500000
      do_grouping(); //0x14fff90
      do_neg_format(); //0x1500020
      do_negative_sign(); //0x14ffff0
      do_pos_format(); //0x1500010
      do_positive_sign(); //0x14fffd0
      do_thousands_sep(); //0x14fff80
};

class std::__ndk1::moneypunct_byname<char, false> {
      do_curr_symbol(); //0x15000e0
      do_decimal_point(); //0x1500030
      do_frac_digits(); //0x1500290
      do_grouping(); //0x1500050
      do_neg_format(); //0x15002b0
      do_negative_sign(); //0x1500200
      do_pos_format(); //0x15002a0
      do_positive_sign(); //0x1500170
      do_thousands_sep(); //0x1500040
      init(char const*); //0x151ded0
};

class std::__ndk1::moneypunct_byname<char, true> {
      do_curr_symbol(); //0x1500370
      do_decimal_point(); //0x15002c0
      do_frac_digits(); //0x1500520
      do_grouping(); //0x15002e0
      do_neg_format(); //0x1500540
      do_negative_sign(); //0x1500490
      do_pos_format(); //0x1500530
      do_positive_sign(); //0x1500400
      do_thousands_sep(); //0x15002d0
      init(char const*); //0x151e790
};

class std::__ndk1::moneypunct_byname<wchar_t, false> {
      do_curr_symbol(); //0x1500600
      do_decimal_point(); //0x1500550
      do_frac_digits(); //0x1500810
      do_grouping(); //0x1500570
      do_neg_format(); //0x1500830
      do_negative_sign(); //0x1500760
      do_pos_format(); //0x1500820
      do_positive_sign(); //0x15006b0
      do_thousands_sep(); //0x1500560
      init(char const*); //0x151eac0
};

class std::__ndk1::moneypunct_byname<wchar_t, true> {
      do_curr_symbol(); //0x15008f0
      do_decimal_point(); //0x1500840
      do_frac_digits(); //0x1500b00
      do_grouping(); //0x1500860
      do_neg_format(); //0x1500b20
      do_negative_sign(); //0x1500a50
      do_pos_format(); //0x1500b10
      do_positive_sign(); //0x15009a0
      do_thousands_sep(); //0x1500850
      init(char const*); //0x151f4b0
};

class std::__ndk1::mutex {
      lock(); //0x14d6860
      try_lock(); //0x14d6880
      unlock(); //0x14d68a0
      ~mutex(); //0x14d7050
};

class std::__ndk1::notify_all_at_thread_exit(std::__ndk1::condition_variable&, std::__ndk1::unique_lock<std::__ndk1 {
      mutex>); //0x14d6fc0
};

class std::__ndk1::numpunct<char> {
      do_decimal_point(); //0x1516830
      do_falsename(); //0x1516a70
      do_grouping(); //0x1516870
      do_thousands_sep(); //0x1516850
      do_truename(); //0x1516990
      numpunct(unsigned long); //0x1516720
      ~numpunct(); //0x1516790
      ~numpunct(); //0x15167c0
};

class std::__ndk1::numpunct<wchar_t> {
      do_decimal_point(); //0x1516840
      do_falsename(); //0x1516a90
      do_grouping(); //0x1516900
      do_thousands_sep(); //0x1516860
      do_truename(); //0x15169b0
      numpunct(unsigned long); //0x1516750
      ~numpunct(); //0x15167e0
      ~numpunct(); //0x1516810
};

class std::__ndk1::numpunct_byname<char> {
      __init(char const*); //0x1516b30
      numpunct_byname(char const*, unsigned long); //0x1516ad0
      ~numpunct_byname(); //0x1516790
      ~numpunct_byname(); //0x1516d30
};

class std::__ndk1::numpunct_byname<char>::numpunct_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long); //0x1516cc0
};

class std::__ndk1::numpunct_byname<wchar_t> {
      __init(char const*); //0x1516e80
      numpunct_byname(char const*, unsigned long); //0x1516e20
      ~numpunct_byname(); //0x15167e0
      ~numpunct_byname(); //0x1517080
};

class std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long); //0x1517010
};

class std::__ndk1::promise<void> {
      get_future(); //0x14e12c0
      promise(); //0x14e1110
      set_value(); //0x14e12e0
      set_value_at_thread_exit(); //0x14e13c0
      ~promise(); //0x14e1160
};

class std::__ndk1::promise<void>::set_exception(std {
      exception_ptr); //0x14e1370
};

class std::__ndk1::promise<void>::set_exception_at_thread_exit(std {
      exception_ptr); //0x14e13e0
};

class std::__ndk1::recursive_mutex {
      lock(); //0x14d6950
      recursive_mutex(); //0x14d68b0
      try_lock(); //0x14d6980
      unlock(); //0x14d6970
      ~recursive_mutex(); //0x14d6940
};

class std::__ndk1::recursive_timed_mutex {
      lock(); //0x14d6bd0
      recursive_timed_mutex(); //0x14d6b50
      try_lock(); //0x14d6cd0
      unlock(); //0x14d6d50
      ~recursive_timed_mutex(); //0x14d6b80
};

class std::__ndk1::regex_error {
      ~regex_error(); //0x1522f60
      ~regex_error(); //0x1522f70
};

class std::__ndk1::regex_error::regex_error(std::__ndk1::regex_constants {
      error_type); //0x1522f10
};

class std::__ndk1::shared_future<void> {
      ~shared_future(); //0x14e1430
};

class std::__ndk1::shared_ptr<AudioEffect> {
      ~shared_ptr(); //0x147b080
};

class std::__ndk1::stod(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*); //0x14dc830
};

class std::__ndk1::stod(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*); //0x14dceb0
};

class std::__ndk1::stof(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*); //0x14dc770
};

class std::__ndk1::stof(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*); //0x14dcde0
};

class std::__ndk1::stoi(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*, int); //0x14dc360
};

class std::__ndk1::stoi(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*, int); //0x14dc9b0
};

class std::__ndk1::stol(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*, int); //0x14dc430
};

class std::__ndk1::stol(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*, int); //0x14dca90
};

class std::__ndk1::stold(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*); //0x14dc8f0
};

class std::__ndk1::stold(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*); //0x14dcf70
};

class std::__ndk1::stoll(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*, int); //0x14dc5d0
};

class std::__ndk1::stoll(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*, int); //0x14dcc30
};

class std::__ndk1::stoul(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*, int); //0x14dc500
};

class std::__ndk1::stoul(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*, int); //0x14dcb60
};

class std::__ndk1::stoull(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&, unsigned long*, int); //0x14dc6a0
};

class std::__ndk1::stoull(std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>, std::__ndk1 {
      allocator<wchar_t> > const&, unsigned long*, int); //0x14dcd00
};

class std::__ndk1::system_error {
      ~system_error(); //0x14e0160
      ~system_error(); //0x14e0170
};

class std::__ndk1::system_error::__init(std::__ndk1::error_code const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> >); //0x14df9e0
};

class std::__ndk1::system_error::system_error(int, std::__ndk1 {
      error_category const&); //0x14e0090
      error_category const&, char const*); //0x14dff40
};

class std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x14dfdf0
};

class std::__ndk1::system_error::system_error(std::__ndk1 {
      error_code); //0x14dfd30
      error_code, char const*); //0x14dfc00
};

class std::__ndk1::system_error::system_error(std::__ndk1::error_code, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x14dfac0
};

class std::__ndk1::this_thread::sleep_for(std::__ndk1::chrono::duration<long long, std::__ndk1 {
      ratio<1l, 1000000000l> > const&); //0x14e0300
};

class std::__ndk1::thread {
      detach(); //0x14e02a0
      hardware_concurrency(); //0x14e02e0
      join(); //0x14e0260
      ~thread(); //0x14e0250
};

class std::__ndk1::timed_mutex {
      lock(); //0x14d6a10
      timed_mutex(); //0x14d69a0
      try_lock(); //0x14d6ab0
      unlock(); //0x14d6b00
      ~timed_mutex(); //0x14d69c0
};

class std::bad_alloc {
      bad_alloc(); //0x1523710
      what(); //0x1523740
      ~bad_alloc(); //0x15236a0
      ~bad_alloc(); //0x1523720
};

class std::bad_array_new_length {
      bad_array_new_length(); //0x1523750
      what(); //0x1523780
      ~bad_array_new_length(); //0x15236a0
      ~bad_array_new_length(); //0x1523760
};

class std::bad_cast {
      bad_cast(); //0x1523960
      what(); //0x15239a0
      ~bad_cast(); //0x1523970
      ~bad_cast(); //0x1523980
};

class std::bad_exception {
      what(); //0x1523700
      ~bad_exception(); //0x15236a0
      ~bad_exception(); //0x15236e0
};

class std::bad_typeid {
      bad_typeid(); //0x15239b0
      what(); //0x15239f0
      ~bad_typeid(); //0x15239c0
      ~bad_typeid(); //0x15239d0
};

class std::domain_error {
      ~domain_error(); //0x1523790
      ~domain_error(); //0x1523850
};

class std::exception {
      what(); //0x15236d0
      ~exception(); //0x15236a0
      ~exception(); //0x15236b0
};

class std::exception_ptr {
      ~exception_ptr(); //0x14e1570
};

class std::exception_ptr::exception_ptr(std {
      exception_ptr const&); //0x14e1580
};

class std::invalid_argument {
      ~invalid_argument(); //0x1523790
      ~invalid_argument(); //0x1523870
};

class std::length_error {
      ~length_error(); //0x1523790
      ~length_error(); //0x1523890
};

class std::logic_error {
      logic_error(char const*); //0x14d7120
      what(); //0x15237e0
      ~logic_error(); //0x1523790
      ~logic_error(); //0x15237c0
};

class std::logic_error::logic_error(std {
      logic_error const&); //0x14d71a0
};

class std::logic_error::logic_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x14d7090
};

class std::nested_exception {
      nested_exception(); //0x14e15c0
      rethrow_nested(); //0x14e1640
      ~nested_exception(); //0x14e1600
      ~nested_exception(); //0x14e1620
};

class std::out_of_range {
      ~out_of_range(); //0x1523790
      ~out_of_range(); //0x15238b0
};

class std::overflow_error {
      ~overflow_error(); //0x15237f0
      ~overflow_error(); //0x15238f0
};

class std::range_error {
      ~range_error(); //0x15237f0
      ~range_error(); //0x15238d0
};

class std::rethrow_exception(std {
      exception_ptr); //0x14e16a0
};

class std::runtime_error {
      runtime_error(char const*); //0x14d7280
      what(); //0x1523840
      ~runtime_error(); //0x15237f0
      ~runtime_error(); //0x1523820
};

class std::runtime_error::runtime_error(std {
      runtime_error const&); //0x14d7300
};

class std::runtime_error::runtime_error(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1 {
      allocator<char> > const&); //0x14d71f0
};

class std::type_info {
      ~type_info(); //0x1523930
      ~type_info(); //0x1523940
};

class std::underflow_error {
      ~underflow_error(); //0x15237f0
      ~underflow_error(); //0x1523910
};

class tagIConsole {
      ~tagIConsole(); //0x12774b0
      ~tagIConsole(); //0x1277bb0
};

class yyFindData {
      AddFile(char const*); //0x129a920
      Reset(); //0x129a8d0
      yyFindData(); //0x129a8c0
};

class yyFrustum {
      FromViewProjMat(yyMatrix const&); //0x1381320
      IntersectsSphere(yyVector3 const&, float); //0x13f77a0
};

class yyMatrix {
      CreateRotationAxis(yyMatrix*, yyVector3*, float); //0x1436e50
      Invert(); //0x1381660
      LookAtLH(yyMatrix*, yyVector3*, yyVector3*, yyVector3*); //0x1437560
      Multiply(yyMatrix*, yyMatrix*); //0x1437020
      Multiply(yyMatrix*, yyMatrix*, yyMatrix*); //0x1437130
      OrthoLH(yyMatrix*, float, float, float, float); //0x1437ab0
      PerspectiveFovLH(yyMatrix*, float, float, float, float); //0x1437910
      PerspectiveLH(yyMatrix*, float, float, float, float); //0x1437a00
      SetXRotation(yyMatrix*, float); //0x14378a0
      SetYRotation(yyMatrix*, float); //0x1437830
      SetZRotation(yyMatrix*, float); //0x14377c0
      Transpose(yyMatrix*, yyMatrix*); //0x14374c0
};

class yyServer {
      DeleteSocket(yySocket*); //0x125fb40
      Init(eSocketType, int, int, bool); //0x125f910
      Process(); //0x12604b0
      ProcessDataPacket(yySocket*, unsigned char*, int, int const*); //0x125fbd0
      ProcessTCP(); //0x12604e0
      ProcessUDP(); //0x1260a60
      ProcessWSLogin(yySocket*, unsigned char*, int); //0x125fe10
      Quit(); //0x125fb30
      Render(); //0x125f900
      SendCommand(yySocket*, eNetworkCommand); //0x125fb80
      SetSocketID(int); //0x125fb60
      yyServer(bool); //0x125f830
      ~yyServer(); //0x125f8a0
};

class yySocket {
      Accept(); //0x12647c0
      AllocateBuffer(int); //0x12610e0
      AvoidTimeWait(); //0x12644e0
      Bind(sockaddr const*, int); //0x1264700
      Broadcast(int, unsigned char*, int); //0x1265020
      CheckMulticastScopes(); //0x1265630
      CheckNetworkConnectionState(); //0x12655b0
      Close(); //0x1264990
      CloseWSConnection(); //0x1262be0
      CommonDestructor(); //0x1260e90
      Connect(char const*, int); //0x1264d20
      ConnectWrap(char const*, int, bool); //0x1262640
      CreateSocket(); //0x1264540
      DumpError(); //0x1264350
      GetMulticastScopes(); //0x1263390
      GetNetworkConnectionState(); //0x12655a0
      HandleMessage(yyServer*, unsigned char*, int, int const*); //0x1261750
      HandleNetlinkNotification(nlmsghdr const*, unsigned long); //0x12655e0
      Init(); //0x1264460
      InitSocket(eSocketType); //0x1260d30
      Listen(int); //0x1264790
      Peek(); //0x1264920
      ProbeMulticastScopes(); //0x1263e90
      ProcessBackgroundConnect(); //0x1264360
      ProcessGMSHandshake(); //0x1261f60
      ProcessGMSHandshakeData1(); //0x12621a0
      ProcessGMSHandshakeData2(); //0x12622d0
      ProcessUDP(); //0x1261120
      ProcessWrap(); //0x1262fb0
      Quit(); //0x1264470
      Read(void*, unsigned int, unsigned int); //0x1264830
      ReadAndProcessDataStream(yyServer*); //0x1261770
      ReadDataStream(int); //0x1261680
      ReadFrom(void*, unsigned int, unsigned int, char**, int*); //0x1264850
      ReadGMSHandshakeData(void*, int); //0x12623e0
      RequestNetworkConnection(bool); //0x12655c0
      RequestNetworkConnectionSync(); //0x12655d0
      Resolve(char const*); //0x12649c0
      ResolveIP(); //0x1262f10
      ResolveToString(char*); //0x1264cb0
      SendDataToEvent(int, unsigned char*, int const*); //0x1261560
      SendPacket(unsigned char*, int); //0x1262d60
      SendTo(char*, int, unsigned char*, int); //0x1265300
      SendUDPPacket(char*, int, unsigned char*, int, bool); //0x1262e30
      SendWSPacket(unsigned char*, int, bool, bool); //0x12624a0
      SetMulticast(bool); //0x12633a0
      SetTimeout(int, int); //0x1264480
      ShutDown(); //0x1264340
      SockaddrGetIP(sockaddr const*, char*, unsigned long); //0x1263200
      StartWSConnection(); //0x1262a90
      Startup(); //0x1263d10
      UnpackGMS(unsigned char**, unsigned char**, unsigned char**, int*); //0x12612d0
      UnpackWS(unsigned char**, unsigned char**, unsigned char**, int*, bool*); //0x1261ac0
      Write(void*, unsigned int); //0x1264970
      yySocket(eSocketType); //0x1260c10
      yySocket(int, eSocketType, bool); //0x1260f30
      ~yySocket(); //0x1263b10
};

class yySocket::UpdateMulticastGroups(std::__ndk1::set<unsigned int, std::__ndk1::less<unsigned int>, std::__ndk1 {
      allocator<unsigned int> > const&); //0x12657d0
};

class yySocketAcc {
      ~yySocketAcc(); //0x1260e60
};

class yyal::handle_map<InputDeviceSlot> {
      clear(); //0x1484390
      ~handle_map(); //0x1482190
};

class yyal::handle_map<InputDeviceSlot>::remove(std::__ndk1::__hash_map_iterator<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1 {
      __hash_value_type<int, InputDeviceSlot>, void*>*> >&); //0x1489700
};

class yyal::mutex {
      init(yyal_mutex_fns_t const*); //0x149c8d0
      lock(); //0x149c950
      mutex(); //0x149c910
      unlock(); //0x149c960
      ~mutex(); //0x149c930
};

class yyal::thread {
      init(yyal_thrd_fns_t const*); //0x149c9f0
      join(); //0x149cab0
      sleep(unsigned long); //0x149cad0
      stop_requested(); //0x149cae0
      thread(); //0x149ca30
      thread(void* (*); //0x149ca40
      ~thread(); //0x149ca80
};

