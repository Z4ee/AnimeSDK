#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2D85C3C5517A2A08_TransitionMode.h"
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
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_13.h"
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
class Class_1_2C62E4CDE21F302D;
class Class_1_47AACC0D1B9F3610;
class Class_1_9F6A7BD216A5C0E3;
class Class_1_A75F5FB3ABFBD3D3;
class Class_1_AA5627556691B674;
class Class_1_C0FA7ACF6234A735;
class Class_1_CDAD1C4D78702C93;
class Class_1_D27BF54F25500E5F;
class Class_1_E34FF29EE1CCACD4;
class Class_1_F064940CC10176D1;
class Class_2_2D85C3C5517A2A08_TransitionShotData;
class Class_2_DACB2D3D3C70FB8C;
class Class_3_E21F6DE9B7FA4D05;
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

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9F1A730)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0x9F159F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x9F153F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0x9F198C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x9F1A800)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9F1A7A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x9F15570)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F15240)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0x9F15E50)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9F19210)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9F1A580)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x9F1A610)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0x9F19340)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0x9F1A6A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0x9F192D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0x9F14CF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0x9F146B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x9F171A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9F1A0B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0x9F14720)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F158D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x9F14450)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x9F14BB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F14AE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x9F14090)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x9F14300)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x9F15310)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x9F14500)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0x9F14790)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x9F14A10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F14940)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x9F14020)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORWARD_OFFSET UNITYSDK_OFFSET(0x9F14220)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0x9F14100)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F14630)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0x9F145B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9F14830)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x9F13FA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x9F13E90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0x9F14C80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x9F154C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x9F162E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0x9F154E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x9F16300)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_HASCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F15720)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x9F159E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x9F16320)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0x9F1A860)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F157C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0x9F13EF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0x9F19D00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0x9F16340)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x9F15C10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9F15870)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x9F1A190)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9F16F10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0x9F19490)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x9F17130)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x9F15970)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0x9F1A1E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x9F171F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x9F19F70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0x9F19C40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x9F154D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x9F162F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x9F16310)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x9F16330)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x9F15670)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x9F15610)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x9F15F90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x9F15DE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0x9F18580)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9F14DE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x9F16050)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0x9F160A0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 64092;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0x10
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0x18
		::UnityEngine::Transform* ShotTemplateFollow; // 0x20
		::Class_2_2D85C3C5517A2A08_TransitionShotData* CustomShotData; // 0x28
		::Class_1_E34FF29EE1CCACD4* CurActiveCameraController; // 0x30
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0x38
		::UnityEngine::Transform* ShotTemplateLookAt; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x48
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x50
		::Class_1_C0FA7ACF6234A735* CameraConfigRecoverData; // 0x58
		::System::Collections::Generic::Queue_1<::Class_1_AA5627556691B674*>* DeferredCameraAfterCloseupShot; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Struct_2_B6A3FA7992F9F37E_13>* GlobalDynamicOffsetIgnoreEntityList; // 0x70
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0x78
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x80
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0x88
		::System::Collections::Generic::Queue_1<::Class_1_47AACC0D1B9F3610*>* CameraCloseupShotTaskQueue; // 0x90
		::System::String* TrackCameraAreaName; // 0x98
		::System::String* ProjectionBlendOutCurve; // 0xA0
		::Class_1_2C62E4CDE21F302D* CurrentBaseChangeParam; // 0xA8
		::Class_1_CDAD1C4D78702C93* RoamingFreelook3rdControllerRef; // 0xB0
		::System::String* TrackCameraName; // 0xB8
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0xC0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0xC8
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0xD0
		::Class_1_D27BF54F25500E5F* NoiseTransition; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0xE0
		::Class_2_DACB2D3D3C70FB8C* DisableProtectPriorityQueue; // 0xE8
		::System::Collections::Generic::Queue_1<::Class_1_F064940CC10176D1*>* VCameraShotAnimTaskQueue; // 0xF0
		::Class_1_CDAD1C4D78702C93* Freelook3rdControllerRef; // 0xF8
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0x100
		::Class_3_E21F6DE9B7FA4D05* TrackCameraExitFromStartSeq; // 0x108
		::System::String* ProjectionBlendInCurve; // 0x110
		::Class_1_E34FF29EE1CCACD4* RoamingVCameraControllerRef; // 0x118
		::System::String* IsometricCurvePath; // 0x120
		::Class_1_A75F5FB3ABFBD3D3* _ClipPlaneOverrideQueue; // 0x128
		::RPG::Client::CameraResultData CurrentResult; // 0x130
		::Class_3_E21F6DE9B7FA4D05* TrackCameraOnOutOfRange; // 0x1C0
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0x1C8
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x1D0
		::Class_1_9F6A7BD216A5C0E3* GlobalNamedDynamicOffsetData; // 0x1D8
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x1E0
		::RPG::GameCore::GameEntity* ConfigCaster; // 0x1E8
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0x1F0
		::Class_3_E21F6DE9B7FA4D05* TrackCameraExitFromEndSeq; // 0x1F8
		::RPG::Client::CameraResultData LastResult; // 0x200
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0x290
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0x298
		::System::Single MoveControlDistance; // 0x2A0
		::System::Single VCameraDitherNPCMaxDistance; // 0x2A4
		::System::UInt32 ConfigVersion; // 0x2A8
		::System::Single OrthographicSize; // 0x2AC
		::UnityEngine::Vector3 ForwardDir; // 0x2B0
		::System::Single ScreenPointDownTimer; // 0x2BC
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x2C0
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x2CC
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x2D0
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x2E0
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x2E8
		::System::Single TrackRoamingXAnglePercentage; // 0x2EC
		::System::UInt32 TrackPathWayID; // 0x2F0
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x2F4
		::System::Single CameraZoomAddValue; // 0x2F8
		::UnityEngine::Vector3 FreeLookAtPos; // 0x2FC
		::System::Single DialogModeBlendingRatio; // 0x308
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x30C
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x318
		::System::Boolean DisableDitherClose; // 0x319
		::System::Boolean IsShowEntityListIgnoreDither; // 0x31A
		::System::Boolean CameraDampSmoothReset; // 0x31B
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x31C
		::System::Single MoveControlDir; // 0x35C
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x360
		::System::Boolean IsAutoAdsorbOn; // 0x36C
		::System::Boolean LookAtLockAxisInput; // 0x36D
		::System::Boolean RoamingUseInitLookAtPos; // 0x36E
		::System::Boolean ForbidCameraShake; // 0x36F
		::System::Int32 ConfigPriority; // 0x370
		::System::Single DialogModeBlendingWeight; // 0x374
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x378
		::System::Boolean DialogModeBlending; // 0x37C
		::System::Boolean IsometricUseCurve; // 0x37D
		::System::Boolean ForbidRoamingPosUpdate; // 0x37E
		::System::Boolean IsPlayerDitherByDistance; // 0x37F
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x380
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x390
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x394
		::System::Boolean EnableProtectAfterBlend; // 0x395
		::System::Boolean DoIsometricSizeBlend; // 0x396
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x397
		::RPG::GameCore::VCameraState CurVCameraState; // 0x398
		::System::Single IsometricOrthographicSize; // 0x39C
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x3A0
		::System::Boolean ChangeDOF; // 0x3AC
		::System::Boolean ResetToFaceDir; // 0x3AD
		::System::Boolean IsScreenPointerDown; // 0x3AE
		::System::Boolean HasProtectDistance; // 0x3AF
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x3B0
		::System::UInt32 _DisableProtectCount; // 0x3B4
		::System::Boolean StartIsometricSizeBlend; // 0x3B8
		::System::Boolean CloseupPendingTimelineUpdate; // 0x3B9
		::System::Boolean DofNeedReset; // 0x3BA
		::System::Boolean ShotTemplateDirty; // 0x3BB
		::System::Single RoamingCurFovRatio; // 0x3BC
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x3C0
		::System::Single CameraZoomDistanceDelta; // 0x3C4
		::System::Int32 TrackCameraEndBlendInIndex; // 0x3C8
		::System::Boolean ForbidRoamingInput; // 0x3CC
		::System::Boolean MazeBattleTransitionOpen; // 0x3CD
		::System::Boolean ShotAnimClear; // 0x3CE
		::System::Boolean IsRecovering; // 0x3CF
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x3D0
		::System::Single BlockDitherTime; // 0x3D8
		::System::Single TrackRoamingStandardSpeed; // 0x3DC
		::System::Single FirstPersonHeightOverride; // 0x3E0
		::UnityEngine::Vector3 OffsetPos; // 0x3E4
		::RPG::GameCore::VCameraState NextVCameraState; // 0x3F0
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputY; // 0x3F4
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x3F8
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x404
		::Struct_2_A725E4562D03EA4E_4 LastFrameResult; // 0x408
		::System::Single VCameraDitherAlphaNPCMin; // 0x410
		::System::Single TrackRoamingSpeedDamp; // 0x414
		::UnityEngine::Vector3 ShotAnimOffset; // 0x418
		::Struct_2_CB7D37A2987B484B DofConfig; // 0x424
		::Struct_2_A725E4562D03EA4E_4 CurrentFrameResult; // 0x438
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x440
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x441
		::System::Boolean VCameraDitherNPCOn; // 0x442
		::System::Boolean ForceHiddenEntityReset; // 0x443
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x444
		::System::Single TrackRoamingAngleLimitX; // 0x450
		::System::Boolean DisableElevationDither; // 0x454
		::System::Boolean IsNeedBlend; // 0x455
		::System::Boolean IsCameraBlendCut; // 0x456
		::System::Boolean DisableCameraRecenter; // 0x457
		::System::Boolean CloseupShotExitFlag; // 0x458
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x459
		::System::Boolean BlendOutImmediately; // 0x45A
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x45B
		::System::Single RoamingZoomValue; // 0x45C
		::System::Boolean RoamingVCameraControllerDragMode; // 0x460
		::System::Boolean ClearHidingEntityFlag; // 0x461
		::System::Boolean IsInBattleDataViewMode; // 0x462
		::System::Boolean EnableFreelookCameraDragMode; // 0x463
		::System::UInt32 TrackPathWayGroupID; // 0x464
		::System::Single ProjectionBlendInTime; // 0x468
		::System::Single CameraZoomDistance; // 0x46C
		::UnityEngine::Vector3 RoamingInitForward; // 0x470
		::System::Boolean CameraRotating; // 0x47C
		::System::Boolean IsCloseFightDitherDarkRight; // 0x47D
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x47E
		::System::Boolean ResetTeamRootPos; // 0x47F
		::System::Single FOVAdaptionRatio; // 0x480
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x484
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x48C
		::Class_2_2D85C3C5517A2A08_TransitionMode MazeBattleTransitionMode; // 0x490
		::System::Single FOVSmoothDampTime; // 0x494
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x498
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x4D8
		::System::Single FreeLookMinDistance; // 0x4DC
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x4E0
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x4EC
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x4F0
		::System::Single OpticalIllusionSize; // 0x4F8
		::System::Single TargetAutoAdsorbAxisY; // 0x4FC
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x500
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputX; // 0x504
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x508
		::System::Boolean UseLookAtChangeOffset; // 0x50C
		::System::Boolean DisableFreelook3rdCameraInput; // 0x50D
		::System::Boolean ResetZoomKeepCameraBlend; // 0x50E
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x50F
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x510
		::System::Single TargetAutoAdsorbFaceDir; // 0x514
		::System::Single ScreenPointUpTimer; // 0x518
		::System::Single OverrideRayHitDietherCheckInterval; // 0x51C
		::System::Boolean ResetCinemachineZoomFlag; // 0x520
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x521
		::System::Boolean DofGetNewConfig; // 0x522
		::System::Boolean DoProjectionBlendToOrthographic; // 0x523
		::System::UInt32 PauseLateUpdateCount; // 0x524
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x528
		::System::Single FreeLookMaxDistance; // 0x534
		::System::Boolean TrackCameraEnable; // 0x538
		::System::Boolean IsFreeLookAt; // 0x539
		::System::Boolean LockRecenterY; // 0x53A
		::System::Boolean ForbidCameraZoomInput; // 0x53B
		::System::Single TrackRoamingAngleLimitY; // 0x53C
		::System::Single RoamingInitFov; // 0x540
		::System::Single ProjectionBlendOutTime; // 0x544
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x548
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x550
		::System::Single OverrideAimOffsetLerpRatio; // 0x554
		::System::Single NearClippingPlane; // 0x558
		::Struct_2_2CBB9F488B837A11 UltraDistanceGlobalDynamicOffsetData; // 0x55C
		::RPG::GameCore::CameraMode CurrentMode; // 0x57C
		::System::Single CameraAimOffsetDelta; // 0x580
		::System::Single TrackRoamingAngleRecoverDamp; // 0x584
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x588
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x598
		::System::Single TrackRoamingStandardScreenDis; // 0x59C
		::System::Boolean KeepInputCameraDirection; // 0x5A0
		::System::Boolean ForbidCameraZoomChange; // 0x5A1
		::System::Boolean TrackCameraMappingInput; // 0x5A2
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x5A3
		::System::Boolean DoOpticalIllusionSet; // 0x5A4
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x5A5
		::System::Boolean IsNoiseOpen; // 0x5A6
		::System::Boolean ForbidRoamingZoomChange; // 0x5A7
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x5A8
		::System::Single TrackCameraPathWayDetectWidth; // 0x5B8
		::System::Single TrackRoamingRotationFactor; // 0x5BC
		::System::Single CameraZoomRatio; // 0x5C0
		::System::Boolean CameraZoomEnable; // 0x5C4
		::System::Boolean MazePrepareTriggerBattle; // 0x5C5
		::System::Boolean IsForceClearDitherOnce; // 0x5C6
		::System::Boolean ResetToFightNormalModeFlag; // 0x5C7
		::System::Single MazeBattleTransitionSpeed; // 0x5C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET))(this);
		}

		::System::Single GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET))(this, teamTypeMask, aliveStateMask);
		}

		::System::Single GetTeamFormationWidth(::RPG::GameCore::TeamType eTeam)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET))(this, eTeam);
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

		::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* Entity)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(this, Entity);
		}

		::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* Entity)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET))(this, Entity);
		}

		::System::Single GetLightTeamFaceDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET))(this);
		}

		::RPG::MVector3 GetTeamAliveEntitiesCenterWorldPos(::RPG::GameCore::TeamType TeamMask)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET))(this, TeamMask);
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

		::System::Single GetTransformComponentYawAngle(::RPG::GameCore::GameEntity* Entity)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET))(this, Entity);
		}

		::UnityEngine::Vector3 GetAdjoinAtkTargetAveragePos(::RPG::GameCore::GameEntity* targetEntity, ::RPG::GameCore::SkillCharacterComponent* skillChara, ::UnityEngine::Vector3 centerPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET))(this, targetEntity, skillChara, centerPos);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET))(this);
		}

		::Struct_2_F865545CC2426688 GetInheritParams()
		{
			return ((::Struct_2_F865545CC2426688(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET))(this);
		}

		::System::Void ApplyInheritParams(::Struct_2_F865545CC2426688& inheritParams)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F865545CC2426688&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET))(this, inheritParams);
		}

		::System::Boolean get_BlockAimDampUntilLookAtTargetMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this);
		}

		::System::Void set_BlockAimDampUntilLookAtTargetMoved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this, value);
		}

		::System::Boolean get_DisableProtectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET))(this);
		}

		::System::Void DisableCameraProtect(::System::Boolean disable, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET))(this, disable, reason);
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

		::System::Void PushClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority priority, ::System::Single near, ::System::Single far)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PUSHCLIPPLANEOVERRIDE_OFFSET))(this, priority, near, far);
		}

		::System::Void RemoveClipPlaneOverride(::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority priority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_ClipPlaneOverridePriority))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REMOVECLIPPLANEOVERRIDE_OFFSET))(this, priority);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> GetCurrentClipPlaneOverride()
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCURRENTCLIPPLANEOVERRIDE_OFFSET))(this);
		}

		::System::Void SetKeepOrthographicOnReset(::System::Boolean set, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET))(this, set, reason);
		}

		::System::Boolean get_KeepOrthographicOnReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET))(this);
		}

		::System::Void ApplyCameraNoiseChangeConfig(::RPG::GameCore::VCameraNoiseChange* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET))(this, config);
		}

		::System::Void EnableNoise(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET))(this, enable);
		}

		::System::Void RegisterNoiseTransition(::System::Single targetAmplitudeGain, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET))(this, targetAmplitudeGain, duration);
		}

		::System::Void UnregisterNoiseTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET))(this);
		}

		::System::Void TickNoiseTransition(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET))(this, deltaTime);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, arg);
		}

		::System::Void _RefreshLocalPlayerDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrainRef()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET))(this);
		}

		::System::Void set_CinemachineBrainRef(::Cinemachine::CinemachineBrain* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET))(this, value);
		}

		::RPG::Client::GameCoreCameraData* get_GameCoreData()
		{
			return ((::RPG::Client::GameCoreCameraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET))(this);
		}

		::System::Void set_GameCoreData(::RPG::Client::GameCoreCameraData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameCoreCameraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET))(this, value);
		}

		::System::Boolean get_LockRelatedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET))(this);
		}

		::System::Void set_LockRelatedTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET))(this, value);
		}

		::System::Void Refresh(::RPG::Client::PipelineCameraEngine* engine, ::RPG::Client::PipelineCameraGlobalConfig* globalConfig, ::RPG::Client::CameraModuleConfigCollection* moduleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET))(this, engine, globalConfig, moduleConfig);
		}

		::System::Void SetActiveEntityRef(::RPG::GameCore::GameEntity* pActiveEntityRef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET))(this, pActiveEntityRef);
		}

		::System::Void SetCameraMode(::RPG::GameCore::CameraMode newMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CameraMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET))(this, newMode);
		}

		::RPG::GameCore::CameraMode GetCameraMode()
		{
			return ((::RPG::GameCore::CameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET))(this);
		}

		::System::Void SetVCameraConfig(::RPG::Client::PipelineCameraEngine* Engine, ::RPG::GameCore::VCameraConfig* configAll, ::System::Nullable_1<::RPG::MVector3> anchorTargetPos, ::System::Nullable_1<::RPG::MVector3> aimTargetPos, ::System::Nullable_1<::RPG::MQuaternion> closeupShotInitRot, ::RPG::GameCore::TeamType anchorTargetTeam, ::System::Action* closeupShotFinishCB, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* aimTargetEntityList, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* anchorTargetEntityList, ::RPG::GameCore::GameEntity* anchorTargetEntity, ::RPG::GameCore::GameEntity* aimTargetEntity, ::RPG::GameCore::TargetEvaluator* anchorTargettype, ::RPG::GameCore::TargetEvaluator* aimTargettype, ::System::Boolean bShotCutAlwaysFlag, ::RPG::GameCore::GameEntity* configCaster, ::RPG::GameCore::GameEntity* shakeAttenuationEntity, ::System::Single timelineStartTime, ::System::Single timelineFinishTime, ::System::Boolean useFreelook3rdConfig, ::System::Boolean isFromPrepareAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MQuaternion>, ::RPG::GameCore::TeamType, ::System::Action*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET))(this, Engine, configAll, anchorTargetPos, aimTargetPos, closeupShotInitRot, anchorTargetTeam, closeupShotFinishCB, aimTargetEntityList, anchorTargetEntityList, anchorTargetEntity, aimTargetEntity, anchorTargettype, aimTargettype, bShotCutAlwaysFlag, configCaster, shakeAttenuationEntity, timelineStartTime, timelineFinishTime, useFreelook3rdConfig, isFromPrepareAbility);
		}

		::System::Single CalcCameraLookAtAngle(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET))(this, targetPos);
		}

		::System::Void SetVCameraHideEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pHideEntityList, ::RPG::GameCore::VCameraConfig* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET))(this, pHideEntityList, source);
		}

		::System::Void SetBlendConfig(::RPG::Client::PipelineCameraEngine* Engine, ::RPG::GameCore::VCameraBlend* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET))(this, Engine, config);
		}

		::System::Void RecoverNormalConfigCamera(::RPG::Client::PipelineCameraEngine* pCameraEngine)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET))(this, pCameraEngine);
		}

		::System::Void SetVCameraGlobalDynamicOffset(::RPG::Client::PipelineCameraEngine* engine, ::System::String* dynamicOffsetConfigName, ::RPG::GameCore::GameEntity* pIgnoreEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this, engine, dynamicOffsetConfigName, pIgnoreEntity);
		}

		::RPG::GameCore::TargetEvaluator* GetCameraShakeDistanceAttenuationTarget(::RPG::GameCore::VCameraConfig* configAll)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET))(this, configAll);
		}

		::System::Void ResetVCameraGlobalDynamicOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this);
		}

		::System::Void SetUsingUltraDistanceGlobalDynamicOffsetFlag(::System::Boolean isUsing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET))(this, isUsing);
		}

		::RPG::Client::CameraFreelook3rdConfigData* EnqueueCameraFreelook3rdConfigData(::RPG::GameCore::VCameraFreelook3rdConfig* pCameraFreelook3rdConfigData, ::UnityEngine::Vector3 offsetForward, ::System::UInt32 priority)
		{
			return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET))(this, pCameraFreelook3rdConfigData, offsetForward, priority);
		}

		::System::Void EnqueueCameraLookAtConfigData(::RPG::Client::CameraLookAtConfigData* pCameraLookAtConfigData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraLookAtConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET))(this, pCameraLookAtConfigData);
		}

		::System::Void EnqueueDeferredCameraConfig(::Class_1_AA5627556691B674* camera)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET))(this, camera);
		}

		::System::Void EnqueueVCameraCloseupTask(::Class_1_47AACC0D1B9F3610* shotTask, ::System::Boolean bClearTaskQueue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47AACC0D1B9F3610*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET))(this, shotTask, bClearTaskQueue);
		}

		::System::Void EnqueueVCameraShakeTask(::CameraShakeTask* ShakeTask)
		{
			return ((::System::Void(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET))(this, ShakeTask);
		}

		::System::Void EnqueueVCameraShotAnimTask(::Class_1_F064940CC10176D1* ShotAnimTask)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F064940CC10176D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET))(this, ShotAnimTask);
		}

		::System::Void ActiveShotTemplate(::RPG::Client::ShotTemplateRuntime* template_, ::UnityEngine::Transform* follow, ::UnityEngine::Transform* lookAt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET))(this, template_, follow, lookAt);
		}

		::System::Void DeactiveShotTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET))(this);
		}

		::System::Void ConsumeShotTemplateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET))(this);
		}

		::System::Void PauseCameraUpdate(::System::Boolean pause, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET))(this, pause, reason);
		}

		::System::Boolean _CheckPriority(::RPG::Client::PipelineCameraEngine* Engine, ::RPG::GameCore::VCameraConfig* configAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET))(this, Engine, configAll);
		}
	};
}
