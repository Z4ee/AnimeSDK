#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9571B284696356E4_TransitionMode.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_ClipPlaneOverridePriority.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_DisableCameraProtectReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_KeepOrthographicOnResetReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_MazeBattleShotDataType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_PauseMainCameraUpdateReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackCameraTrackType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackRoamingCameraRotationMode.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/RPG/GameCore/ActiveTrackCameraMode.h"
#include "unitysdk/RPG/GameCore/AdventureCameraOrthographicResetMode.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2CBB9F488B837A11.h"
#include "unitysdk/Struct_2_2D71E0AE8D880088.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_4.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_12.h"
#include "unitysdk/Struct_2_CB7D37A2987B484B.h"
#include "unitysdk/Struct_2_F865545CC2426688.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CameraShakeTask;
class Class_1_47AACC0D1B9F3610;
class Class_1_78B03B04E15725BC;
class Class_1_9F6A7BD216A5C0E3;
class Class_1_AA5627556691B674;
class Class_1_C0FA7ACF6234A735;
class Class_1_CDAD1C4D78702C93;
class Class_1_D27BF54F25500E5F;
class Class_1_E188AFC27F4BCB5C;
class Class_1_E34FF29EE1CCACD4;
class Class_1_F064940CC10176D1;
class Class_2_74B1F4B989D8EA57;
class Class_2_9571B284696356E4_TransitionShotData;
class Class_3_07C3C4D2990C49EE;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::Client { class CameraLookAtConfigData; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class GameCoreCameraData; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ShotTemplateRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPGTools::Timeline { class CameraData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xC9E5370)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0xC9E00E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0xC9DFB70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0xC9E4100)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0xC9E5460)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0xC9E53F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0xC9DFCE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9DF930)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0xC9E0540)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xC9E39B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xC9E51C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xC9E5250)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0xC9E3B00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0xC9E52E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0xC9E3A70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0xC9DF3B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0xC9DED80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC9E1870)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0xC9E4920)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0xC9DEDF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC9E0000)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xC9DEB10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0xC9DF270)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0xC9DF1A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0xC9DE740)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0xC9DE9B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0xC9DFA90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xC9DEBC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0xC9DEE60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0xC9DF0D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0xC9DF000)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0xC9DE6D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET UNITYSDK_OFFSET(0xC9DE8D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0xC9DE7B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC9DECF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0xC9DEC70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0xC9DEF00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0xC9DE5C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xC9DE4B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0xC9DF340)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0xC9DFC40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0xC9E09F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0xC9DFC80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0xC9E0A10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC9DFE90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0xC9E00D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LASTFRAMEFOVRESULT_OFFSET UNITYSDK_OFFSET(0xC9DFC60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0xC9E0A30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0xC9E54D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC9DFEF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0xC9DE510)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0xC9E4540)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0xC9E0A50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0xC9E0300)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0xC9DFFA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0xC9E4A00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0xC9E15E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0xC9E3C50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC9E1800)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0xC9E0060)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0xC9E4A50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xC9E18C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0xC9E47E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0xC9E4480)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0xC9DFC50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0xC9E0A00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0xC9E0A20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LASTFRAMEFOVRESULT_OFFSET UNITYSDK_OFFSET(0xC9DFC70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0xC9E0A40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0xC9DFDE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0xC9DFD80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0xC9E0680)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0xC9E04D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0xC9E2CF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0xC9DF4A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0xC9E0750)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0xC9E07A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 69511;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::System::String* ProjectionBlendInCurve; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0x18
		::Class_3_07C3C4D2990C49EE* TrackCameraOnOutOfRange; // 0x20
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0x28
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x30
		::RPG::Client::CameraResultData LastResult; // 0x38
		::Class_2_74B1F4B989D8EA57* DisableProtectPriorityQueue; // 0xD0
		::System::Collections::Generic::Queue_1<::Class_1_AA5627556691B674*>* DeferredCameraAfterCloseupShot; // 0xD8
		::System::String* ProjectionBlendOutCurve; // 0xE0
		::Class_3_07C3C4D2990C49EE* TrackCameraExitFromEndSeq; // 0xE8
		::Class_3_07C3C4D2990C49EE* TrackCameraExitFromStartSeq; // 0xF0
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0xF8
		::Class_1_C0FA7ACF6234A735* CameraConfigRecoverData; // 0x100
		::Class_1_E34FF29EE1CCACD4* CurActiveCameraController; // 0x108
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0x110
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x118
		::Class_1_CDAD1C4D78702C93* Freelook3rdControllerRef; // 0x120
		::RPG::GameCore::GameEntity* ConfigCaster; // 0x128
		::Class_1_CDAD1C4D78702C93* RoamingFreelook3rdControllerRef; // 0x130
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0x138
		::System::String* TrackCameraName; // 0x140
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x148
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x150
		::System::String* TrackCameraAreaName; // 0x158
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Struct_2_B6A3FA7992F9F37E_12>* GlobalDynamicOffsetIgnoreEntityList; // 0x160
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0x168
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0x170
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0x178
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0x180
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0x188
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0x190
		::UnityEngine::Transform* ShotTemplateLookAt; // 0x198
		::Class_1_9F6A7BD216A5C0E3* GlobalNamedDynamicOffsetData; // 0x1A0
		::System::Collections::Generic::Queue_1<::Class_1_F064940CC10176D1*>* VCameraShotAnimTaskQueue; // 0x1A8
		::Class_1_78B03B04E15725BC* CurrentBaseChangeParam; // 0x1B0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0x1B8
		::Class_1_E34FF29EE1CCACD4* RoamingVCameraControllerRef; // 0x1C0
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0x1C8
		::Class_1_E188AFC27F4BCB5C* _ClipPlaneOverrideQueue; // 0x1D0
		::System::String* IsometricCurvePath; // 0x1D8
		::Class_1_D27BF54F25500E5F* NoiseTransition; // 0x1E0
		::Class_2_9571B284696356E4_TransitionShotData* CustomShotData; // 0x1E8
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0x1F0
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0x1F8
		::System::Collections::Generic::Queue_1<::Class_1_47AACC0D1B9F3610*>* CameraCloseupShotTaskQueue; // 0x200
		::UnityEngine::Transform* ShotTemplateFollow; // 0x208
		::RPG::Client::CameraResultData CurrentResult; // 0x210
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x2A8
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x2B0
		::System::UInt32 _DisableProtectCount; // 0x2B8
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x2BC
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x2C0
		::System::UInt32 TrackPathWayID; // 0x2CC
		::System::Boolean ResetCinemachineZoomFlag; // 0x2D0
		::System::Boolean LockRecenterY; // 0x2D1
		::System::Boolean IsCameraBlendCut; // 0x2D2
		::System::Boolean IsNeedBlend; // 0x2D3
		::System::Boolean IsCloseFightDitherDarkRight; // 0x2D4
		::System::Boolean DisableElevationDither; // 0x2D5
		::System::Boolean ResetTeamRootPos; // 0x2D6
		::System::Boolean DisableDitherClose; // 0x2D7
		::System::Boolean ResetToFaceDir; // 0x2D8
		::System::Boolean BlendOutImmediately; // 0x2D9
		::System::Boolean MazeBattleTransitionOpen; // 0x2DA
		::System::Boolean DisableCameraRecenter; // 0x2DB
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x2DC
		::UnityEngine::Vector3 OffsetPos; // 0x2E8
		::System::UInt32 ConfigVersion; // 0x2F4
		::System::Single ProjectionBlendOutTime; // 0x2F8
		::System::Single CameraZoomAddValue; // 0x2FC
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x300
		::System::Boolean ForbidRoamingInput; // 0x310
		::System::Boolean CameraRotating; // 0x311
		::System::Single CameraAimOffsetDelta; // 0x314
		::Struct_2_CB7D37A2987B484B DofConfig; // 0x318
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x32C
		::System::Single TrackRoamingXAnglePercentage; // 0x338
		::System::Int32 TrackCameraEndBlendInIndex; // 0x33C
		::Struct_2_A725E4562D03EA4E_4 CurrentFrameResult; // 0x340
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x348
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x34C
		::System::Boolean VCameraDitherNPCOn; // 0x358
		::System::Boolean StartIsometricSizeBlend; // 0x359
		::System::Boolean IsInBattleDataViewMode; // 0x35A
		::System::Boolean ChangeDOF; // 0x35B
		::System::Single TrackRoamingStandardSpeed; // 0x35C
		::System::Single FreeLookMaxDistance; // 0x360
		::System::Single TrackRoamingStandardScreenDis; // 0x364
		::System::Single VCameraDitherNPCMaxDistance; // 0x368
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x36C
		::System::Single FirstPersonHeightOverride; // 0x378
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x37C
		::System::Int32 ConfigPriority; // 0x3BC
		::System::Single CameraZoomDistance; // 0x3C0
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x3C4
		::System::Boolean UseLookAtChangeOffset; // 0x3C5
		::System::Boolean IsAutoAdsorbOn; // 0x3C6
		::System::Boolean EnableProtectAfterBlend; // 0x3C7
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x3C8
		::System::Boolean DoOpticalIllusionSet; // 0x3CC
		::System::Boolean IsFreeLookAt; // 0x3CD
		::System::Boolean LookAtLockAxisInput; // 0x3CE
		::System::Boolean CloseupShotExitFlag; // 0x3CF
		::System::Single VCameraDitherAlphaNPCMin; // 0x3D0
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x3D4
		::System::Single OverrideAimOffsetLerpRatio; // 0x3D8
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x3DC
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x3E0
		::System::UInt32 PauseLateUpdateCount; // 0x3E4
		::System::Single ScreenPointUpTimer; // 0x3E8
		::System::Single OverrideRayHitDietherCheckInterval; // 0x3EC
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x3F0
		::System::Single DialogModeBlendingRatio; // 0x3F4
		::System::Single BlockDitherTime; // 0x3F8
		::System::Single OrthographicSize; // 0x3FC
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x400
		::System::Boolean ForbidRoamingZoomChange; // 0x40C
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x40D
		::System::Boolean ForbidCameraZoomInput; // 0x40E
		::System::Boolean TrackCameraMappingInput; // 0x40F
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x410
		::Class_2_9571B284696356E4_TransitionMode MazeBattleTransitionMode; // 0x418
		::System::Single CameraZoomRatio; // 0x41C
		::System::Single FreeLookMinDistance; // 0x420
		::System::Boolean ClearHidingEntityFlag; // 0x424
		::System::Boolean IsScreenPointerDown; // 0x425
		::System::Boolean DofGetNewConfig; // 0x426
		::System::Boolean IsPlayerDitherByDistance; // 0x427
		::System::Single MoveControlDistance; // 0x428
		::System::UInt32 TrackPathWayGroupID; // 0x42C
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x430
		::System::Boolean IsNoiseOpen; // 0x440
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x441
		::System::Boolean ResetZoomKeepCameraBlend; // 0x442
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x443
		::System::Single RoamingCurFovRatio; // 0x444
		::System::Boolean TrackCameraEnable; // 0x448
		::System::Boolean ForbidCameraShake; // 0x449
		::System::Boolean ForceHiddenEntityReset; // 0x44A
		::System::Boolean DisableFreelook3rdCameraInput; // 0x44B
		::System::Single TrackRoamingAngleLimitY; // 0x44C
		::System::Single FOVAdaptionRatio; // 0x450
		::System::Single ScreenPointDownTimer; // 0x454
		::System::Single TrackRoamingSpeedDamp; // 0x458
		::RPG::GameCore::VCameraState NextVCameraState; // 0x45C
		::System::Single _LastFrameFovResult_k__BackingField; // 0x460
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x464
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x468
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputX; // 0x474
		::System::Single MazeBattleTransitionSpeed; // 0x478
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x47C
		::System::Single TrackRoamingRotationFactor; // 0x480
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputY; // 0x484
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x488
		::System::Single FOVSmoothDampTime; // 0x48C
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x490
		::RPG::GameCore::VCameraState CurVCameraState; // 0x494
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x498
		::UnityEngine::Vector3 FreeLookAtPos; // 0x49C
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x4A8
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x4E8
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x4F0
		::UnityEngine::Vector3 ForwardDir; // 0x4F4
		::System::Single TrackRoamingAngleLimitX; // 0x500
		::UnityEngine::Vector3 ShotAnimOffset; // 0x504
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x510
		::System::Boolean ResetToFightNormalModeFlag; // 0x518
		::System::Boolean IsForceClearDitherOnce; // 0x519
		::System::Boolean MazeBattleTransitionOverrideWorldYOffset; // 0x51A
		::System::Boolean HasProtectDistance; // 0x51B
		::System::Single TargetAutoAdsorbFaceDir; // 0x51C
		::System::Single IsometricOrthographicSize; // 0x520
		::System::Boolean CloseupPendingTimelineUpdate; // 0x524
		::System::Boolean RoamingVCameraControllerDragMode; // 0x525
		::System::Boolean CameraDampSmoothReset; // 0x526
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x527
		::System::Boolean ShotTemplateDirty; // 0x528
		::System::Boolean CameraZoomEnable; // 0x529
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x52A
		::System::Boolean DoIsometricSizeBlend; // 0x52B
		::System::Single NearClippingPlane; // 0x52C
		::System::Single CameraZoomDistanceDelta; // 0x530
		::System::Single DialogModeBlendingWeight; // 0x534
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x538
		::System::Boolean IsShowEntityListIgnoreDither; // 0x53C
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x53D
		::System::Boolean DialogModeBlending; // 0x53E
		::System::Boolean IsometricUseCurve; // 0x53F
		::System::Single MazeBattleTransitionWorldYOffset; // 0x540
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x544
		::System::Boolean RoamingUseInitLookAtPos; // 0x545
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x546
		::System::Boolean ShotAnimClear; // 0x547
		::System::Single TrackRoamingAngleRecoverDamp; // 0x548
		::System::Single RoamingZoomValue; // 0x54C
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x550
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x554
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x564
		::System::Boolean KeepInputCameraDirection; // 0x574
		::System::Boolean DofNeedReset; // 0x575
		::System::Boolean IsRecovering; // 0x576
		::UnityEngine::Vector3 RoamingInitForward; // 0x578
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x584
		::System::Boolean EnableFreelookCameraDragMode; // 0x588
		::System::Boolean ForbidRoamingPosUpdate; // 0x589
		::System::Boolean DoProjectionBlendToOrthographic; // 0x58A
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x58B
		::System::Single OpticalIllusionSize; // 0x58C
		::System::Single TargetAutoAdsorbAxisY; // 0x590
		::RPG::GameCore::CameraMode CurrentMode; // 0x594
		::System::Single TrackCameraPathWayDetectWidth; // 0x598
		::System::Single RoamingInitFov; // 0x59C
		::System::Single MoveControlDir; // 0x5A0
		::System::Boolean ForbidCameraZoomChange; // 0x5A4
		::System::Boolean MazePrepareTriggerBattle; // 0x5A5
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x5A6
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x5A7
		::Struct_2_A725E4562D03EA4E_4 LastFrameResult; // 0x5A8
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x5B0
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x5B8
		::System::Single ProjectionBlendInTime; // 0x5C4
		::Struct_2_2CBB9F488B837A11 UltraDistanceGlobalDynamicOffsetData; // 0x5C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET))(this);
		}

		::System::Single GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::TeamTypeMask a1, ::RPG::GameCore::AliveStateMask a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET))(this, a1, a2);
		}

		::System::Single GetTeamFormationWidth(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET))(this, a1);
		}

		::System::Single GetLightTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::System::Single GetDarkTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamLeft()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamForward()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET))(this);
		}

		::System::Single GetDarkTeamMaxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::MQuaternion GetLightTeamRotation()
		{
			return ((::RPG::MQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightTeamLockTargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET))(this);
		}

		::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET))(this, a1);
		}

		::System::Single GetLightTeamFaceDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET))(this);
		}

		::RPG::MVector3 GetTeamAliveEntitiesCenterWorldPos(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::RPG::MVector3 GetDarkTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetDarkTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::System::Single GetTransformComponentYawAngle(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetAdjoinAtkTargetAveragePos(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillCharacterComponent* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET))(this);
		}

		::Struct_2_F865545CC2426688 GetInheritParams()
		{
			return ((::Struct_2_F865545CC2426688(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET))(this);
		}

		::System::Void ApplyInheritParams(::Struct_2_F865545CC2426688& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F865545CC2426688&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET))(this, a1);
		}

		::System::Boolean get_BlockAimDampUntilLookAtTargetMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this);
		}

		::System::Void set_BlockAimDampUntilLookAtTargetMoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this, a1);
		}

		::System::Single get_LastFrameFovResult()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LASTFRAMEFOVRESULT_OFFSET))(this);
		}

		::System::Void set_LastFrameFovResult(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LASTFRAMEFOVRESULT_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableProtectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET))(this);
		}

		::System::Void DisableCameraProtect(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET))(this, a1, a2);
		}

		::System::Void ThirdRoamingSetEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Void ThirdRoamingReleaseEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Boolean get_HasClipPlaneOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void PushClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetCurrentClipPlaneOverride()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void SetKeepOrthographicOnReset(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_KeepOrthographicOnReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET))(this);
		}

		::System::Void ApplyCameraNoiseChangeConfig(::RPG::GameCore::VCameraNoiseChange* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNoiseChange*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableNoise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET))(this, a1);
		}

		::System::Void RegisterNoiseTransition(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterNoiseTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET))(this);
		}

		::System::Void TickNoiseTransition(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET))(this, a1);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void _RefreshLocalPlayerDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrainRef()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET))(this);
		}

		::System::Void set_CinemachineBrainRef(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET))(this, a1);
		}

		::RPG::Client::GameCoreCameraData* get_GameCoreData()
		{
			return ((::RPG::Client::GameCoreCameraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET))(this);
		}

		::System::Void set_GameCoreData(::RPG::Client::GameCoreCameraData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameCoreCameraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_LockRelatedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET))(this);
		}

		::System::Void set_LockRelatedTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET))(this, a1);
		}

		::System::Void Refresh(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetActiveEntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET))(this, a1);
		}

		::System::Void SetCameraMode(::RPG::GameCore::CameraMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CameraMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET))(this, a1);
		}

		::RPG::GameCore::CameraMode GetCameraMode()
		{
			return ((::RPG::GameCore::CameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET))(this);
		}

		::System::Void SetVCameraConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::Nullable_1<::RPG::MVector3> a3, ::System::Nullable_1<::RPG::MVector3> a4, ::System::Nullable_1<::RPG::MQuaternion> a5, ::RPG::GameCore::TeamType a6, ::System::Action* a7, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a8, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a9, ::RPG::GameCore::GameEntity* a10, ::RPG::GameCore::GameEntity* a11, ::RPG::GameCore::TargetEvaluator* a12, ::RPG::GameCore::TargetEvaluator* a13, ::System::Boolean a14, ::RPG::GameCore::GameEntity* a15, ::RPG::GameCore::GameEntity* a16, ::System::Single a17, ::System::Single a18, ::System::Boolean a19, ::System::Boolean a20, ::System::String* a21)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MQuaternion>, ::RPG::GameCore::TeamType, ::System::Action*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
		}

		::System::Single CalcCameraLookAtAngle(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET))(this, a1);
		}

		::System::Void SetVCameraHideEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::VCameraConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBlendConfig(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraBlend* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraBlend*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RecoverNormalConfigCamera(::RPG::Client::PipelineCameraEngine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET))(this, a1);
		}

		::System::Void SetVCameraGlobalDynamicOffset(::RPG::Client::PipelineCameraEngine* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::TargetEvaluator* GetCameraShakeDistanceAttenuationTarget(::RPG::GameCore::VCameraConfig* a1)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET))(this, a1);
		}

		::System::Void ResetVCameraGlobalDynamicOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this);
		}

		::System::Void SetUsingUltraDistanceGlobalDynamicOffsetFlag(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CameraFreelook3rdConfigData* EnqueueCameraFreelook3rdConfigData(::RPG::GameCore::VCameraFreelook3rdConfig* a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnqueueCameraLookAtConfigData(::RPG::Client::CameraLookAtConfigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraLookAtConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET))(this, a1);
		}

		::System::Void EnqueueDeferredCameraConfig(::Class_1_AA5627556691B674* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET))(this, a1);
		}

		::System::Void EnqueueVCameraCloseupTask(::Class_1_47AACC0D1B9F3610* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47AACC0D1B9F3610*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET))(this, a1, a2);
		}

		::System::Void EnqueueVCameraShakeTask(::CameraShakeTask* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET))(this, a1);
		}

		::System::Void EnqueueVCameraShotAnimTask(::Class_1_F064940CC10176D1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F064940CC10176D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET))(this, a1);
		}

		::System::Void ActiveShotTemplate(::RPG::Client::ShotTemplateRuntime* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DeactiveShotTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET))(this);
		}

		::System::Void ConsumeShotTemplateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET))(this);
		}

		::System::Void PauseCameraUpdate(::System::Boolean a1, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckPriority(::RPG::Client::PipelineCameraEngine* a1, ::RPG::GameCore::VCameraConfig* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET))(this, a1, a2);
		}
	};
}
