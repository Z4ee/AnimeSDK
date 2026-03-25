#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2D85C3C5517A2A08_TransitionMode.h"
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
#include "unitysdk/Struct_2_87411F35FE812768.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_3.h"
#include "unitysdk/Struct_2_CB7D37A2987B484B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
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
class Class_1_E34FF29EE1CCACD4;
class Class_1_F064940CC10176D1;
class Class_2_2D85C3C5517A2A08_TransitionShotData;
class Class_2_DACB2D3D3C70FB8C;
class Class_3_5775A4FEC79026BC;
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

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9256B60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0x9251F70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x9251C10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0x9255D40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x9256C40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9256BD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x9251D40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9251AC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0x92523C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9255680)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x92569D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x9256A40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0x92557D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0x9256AD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0x9255740)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0x9251570)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0x92511E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x92537B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0x9256540)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0x9251250)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x9250F70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x9250D30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x9250E30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x9251B70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x9251020)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0x92512C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x9251470)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x92513E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x9250CC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0x9250DA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9251150)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0x92510D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x9251330)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x9250C40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x9250B30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0x9251500)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x9251C90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x9252990)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0x9251CB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x92529B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x9251F60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x92529D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0x9256CB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0x9250B90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0x9256180)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0x92529F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x9252190)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x9256620)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0x9253540)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0x9255910)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x9253740)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x9251EF0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0x9256670)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x9253800)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x9256400)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0x92560C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x9251CA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x92529A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x92529C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x92529E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x9251E40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x9251DE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x9252500)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x9252350)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0x92549F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x9251660)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x92525C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHBATTLEPHASENEWDATA_OFFSET UNITYSDK_OFFSET(0x9252850)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0x9252610)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 56846;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::Class_1_78B03B04E15725BC* CurrentBaseChangeParam; // 0x10
		::System::Collections::Generic::Queue_1<::Class_1_47AACC0D1B9F3610*>* CameraCloseupShotTaskQueue; // 0x18
		::System::Collections::Generic::Queue_1<::Class_1_AA5627556691B674*>* DeferredCameraAfterCloseupShot; // 0x20
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0x28
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0x38
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x40
		::System::String* ProjectionBlendOutCurve; // 0x48
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0x50
		::Class_1_E34FF29EE1CCACD4* CurActiveCameraController; // 0x58
		::UnityEngine::Transform* ShotTemplateFollow; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0x68
		::Class_1_CDAD1C4D78702C93* Freelook3rdControllerRef; // 0x70
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0x78
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0x80
		::Class_3_5775A4FEC79026BC* TrackCameraOnOutOfRange; // 0x88
		::System::Collections::Generic::Queue_1<::Class_1_F064940CC10176D1*>* VCameraShotAnimTaskQueue; // 0x90
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0x98
		::Class_1_E34FF29EE1CCACD4* RoamingVCameraControllerRef; // 0xA0
		::Class_2_2D85C3C5517A2A08_TransitionShotData* CustomShotData; // 0xA8
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0xB0
		::System::String* TrackCameraName; // 0xB8
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0xC0
		::Class_3_5775A4FEC79026BC* TrackCameraExitFromStartSeq; // 0xC8
		::Class_3_5775A4FEC79026BC* TrackCameraExitFromEndSeq; // 0xD0
		::RPG::GameCore::GameEntity* ConfigCaster; // 0xD8
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0xE0
		::RPG::Client::CameraResultData CurrentResult; // 0xE8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0x178
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x180
		::UnityEngine::Transform* ShotTemplateLookAt; // 0x188
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TopViewLookAtEntities; // 0x190
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x198
		::Class_1_C0FA7ACF6234A735* CameraConfigRecoverData; // 0x1A0
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x1A8
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0x1B0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GlobalDynamicOffsetIgnoreEntityList; // 0x1B8
		::System::String* ProjectionBlendInCurve; // 0x1C0
		::Class_1_D27BF54F25500E5F* NoiseTransition; // 0x1C8
		::Class_1_9F6A7BD216A5C0E3* GlobalNamedDynamicOffsetData; // 0x1D0
		::System::String* TrackCameraAreaName; // 0x1D8
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0x1E0
		::Class_2_DACB2D3D3C70FB8C* DisableProtectPriorityQueue; // 0x1E8
		::Class_1_CDAD1C4D78702C93* RoamingFreelook3rdControllerRef; // 0x1F0
		::RPG::Client::CameraResultData LastResult; // 0x1F8
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x288
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0x290
		::System::String* IsometricCurvePath; // 0x298
		::System::Single TrackCameraPathWayDetectWidth; // 0x2A0
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x2A4
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x2B0
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x2B4
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x2C4
		::System::Boolean DisableElevationDither; // 0x2C8
		::System::Boolean ForbidRoamingZoomChange; // 0x2C9
		::System::Boolean MazePrepareTriggerBattle; // 0x2CA
		::System::Boolean IsNoiseOpen; // 0x2CB
		::System::Boolean ResetToFaceDir; // 0x2CC
		::System::Boolean TrackCameraEnable; // 0x2CD
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x2CE
		::UnityEngine::Vector3 TopViewDefaultLookAtPos; // 0x2D0
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x2DC
		::System::Boolean DisableCameraRecenter; // 0x2DD
		::System::Boolean EnableFreelookCameraDragMode; // 0x2DE
		::System::Boolean ClearHidingEntityFlag; // 0x2DF
		::RPG::GameCore::VCameraState CurVCameraState; // 0x2E0
		::System::Single OverrideAimOffsetLerpRatio; // 0x2E4
		::Struct_2_2CBB9F488B837A11 UltraDistanceGlobalDynamicOffsetData; // 0x2E8
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x308
		::System::Single TopViewDepressionAngle; // 0x314
		::UnityEngine::Vector3 RoamingInitForward; // 0x318
		::System::Single VCameraDitherAlphaNPCMin; // 0x324
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x328
		::Struct_2_A725E4562D03EA4E_3 CurrentFrameResult; // 0x32C
		::System::Single TrackRoamingSpeedDamp; // 0x334
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x338
		::System::Boolean BlendOutImmediately; // 0x378
		::System::Boolean DoProjectionBlendToOrthographic; // 0x379
		::System::Boolean DofGetNewConfig; // 0x37A
		::System::Boolean LockRecenterY; // 0x37B
		::System::Boolean CloseupShotExitFlag; // 0x37C
		::System::Boolean ShotTemplateDirty; // 0x37D
		::System::Boolean VCameraDitherNPCOn; // 0x37E
		::System::Boolean DisableDitherClose; // 0x37F
		::UnityEngine::Vector3 FreeLookAtPos; // 0x380
		::System::Single TrackRoamingAngleLimitX; // 0x38C
		::System::Single TargetAutoAdsorbAxisY; // 0x390
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x394
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x3A0
		::System::Boolean IsForceClearDitherOnce; // 0x3A4
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x3A5
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x3A6
		::System::Boolean ResetToFightNormalModeFlag; // 0x3A7
		::System::Single TrackRoamingAngleLimitY; // 0x3A8
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x3AC
		::System::Boolean CameraRotating; // 0x3BC
		::System::Boolean ShotAnimClear; // 0x3BD
		::System::Boolean IsInBattleDataViewMode; // 0x3BE
		::System::Boolean ForceHiddenEntityReset; // 0x3BF
		::System::Single TrackRoamingAngleRecoverDamp; // 0x3C0
		::System::Boolean RoamingUseInitLookAtPos; // 0x3C4
		::System::Boolean CloseupPendingTimelineUpdate; // 0x3C5
		::System::Boolean HasProtectDistance; // 0x3C6
		::System::Boolean DialogModeBlending; // 0x3C7
		::System::Single OrthographicSize; // 0x3C8
		::System::Single FirstPersonHeightOverride; // 0x3CC
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x3D0
		::System::Boolean IsScreenPointerDown; // 0x3D8
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x3D9
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x3DA
		::System::Boolean MazeBattleTransitionOpen; // 0x3DB
		::System::Single CameraAimOffsetDelta; // 0x3DC
		::System::Single VCameraDitherNPCMaxDistance; // 0x3E0
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x3E4
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x3E8
		::System::Single NearClippingPlane; // 0x3F4
		::System::Single OverrideRayHitDietherCheckInterval; // 0x3F8
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x3FC
		::System::Boolean CameraZoomEnable; // 0x40C
		::System::Boolean RoamingVCameraControllerDragMode; // 0x40D
		::System::Boolean DisableFreelook3rdCameraInput; // 0x40E
		::System::Boolean DoOpticalIllusionSet; // 0x40F
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x410
		::System::Single RoamingInitFov; // 0x41C
		::System::Boolean StartIsometricSizeBlend; // 0x420
		::System::Boolean CameraDampSmoothReset; // 0x421
		::System::Boolean IsCameraBlendCut; // 0x422
		::System::Boolean IsAutoAdsorbOn; // 0x423
		::System::Single TopViewLookAngleBias; // 0x424
		::System::Single RoamingZoomValue; // 0x428
		::UnityEngine::Vector3 ShotAnimOffset; // 0x42C
		::System::Single DialogModeBlendingRatio; // 0x438
		::System::Single MazeBattleTransitionSpeed; // 0x43C
		::System::Single FOVSmoothDampTime; // 0x440
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x444
		::System::Boolean ForbidCameraShake; // 0x448
		::System::Boolean ForbidRoamingPosUpdate; // 0x449
		::System::Boolean ResetZoomKeepCameraBlend; // 0x44A
		::System::Boolean IsShowEntityListIgnoreDither; // 0x44B
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x44C
		::Struct_2_CB7D37A2987B484B DofConfig; // 0x454
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x468
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x474
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x475
		::System::Boolean ForbidCameraZoomChange; // 0x476
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x477
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x478
		::UnityEngine::Vector3 TopViewLookAtPos; // 0x47C
		::System::UInt32 TrackPathWayID; // 0x488
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x48C
		::System::Single TargetAutoAdsorbFaceDir; // 0x494
		::System::Single CameraZoomDistanceDelta; // 0x498
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x49C
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x4A0
		::System::Single CameraZoomAddValue; // 0x4AC
		::System::UInt32 ConfigVersion; // 0x4B0
		::System::Single BlockDitherTime; // 0x4B4
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x4B8
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x4BC
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x4C0
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x4C4
		::System::Single ProjectionBlendInTime; // 0x4CC
		::System::UInt32 _DisableProtectCount; // 0x4D0
		::System::Boolean DofNeedReset; // 0x4D4
		::System::Boolean IsometricUseCurve; // 0x4D5
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x4D8
		::System::Single IsometricOrthographicSize; // 0x4E0
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x4E4
		::System::Single ProjectionBlendOutTime; // 0x4E8
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x4EC
		::System::Single FreeLookMaxDistance; // 0x4F8
		::System::Single TrackRoamingStandardScreenDis; // 0x4FC
		::System::Single DialogModeBlendingWeight; // 0x500
		::UnityEngine::Vector3 OffsetPos; // 0x504
		::System::Single OpticalIllusionSize; // 0x510
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputY; // 0x514
		::System::Boolean IsCloseFightDitherDarkRight; // 0x518
		::System::Boolean IsPlayerDitherByDistance; // 0x519
		::System::Boolean IsNeedBlend; // 0x51A
		::System::Boolean DoIsometricSizeBlend; // 0x51B
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputX; // 0x51C
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x520
		::UnityEngine::Vector3 TopViewLookAtOffset; // 0x560
		::System::Single TopViewCameraDist; // 0x56C
		::System::Single RoamingCurFovRatio; // 0x570
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x574
		::System::Single FreeLookMinDistance; // 0x578
		::System::Single MoveControlDir; // 0x57C
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x580
		::System::UInt32 PauseLateUpdateCount; // 0x584
		::System::Boolean TopViewReset; // 0x588
		::System::Boolean ChangeDOF; // 0x589
		::System::Boolean LookAtLockAxisInput; // 0x58A
		::System::Boolean EnableProtectAfterBlend; // 0x58B
		::UnityEngine::Vector3 ForwardDir; // 0x58C
		::Struct_2_A725E4562D03EA4E_3 LastFrameResult; // 0x598
		::Class_2_2D85C3C5517A2A08_TransitionMode MazeBattleTransitionMode; // 0x5A0
		::System::Boolean TrackCameraMappingInput; // 0x5A4
		::System::Boolean IsRecovering; // 0x5A5
		::System::Boolean ResetTeamRootPos; // 0x5A6
		::System::Boolean UseLookAtChangeOffset; // 0x5A7
		::UnityEngine::Vector3 TopViewForwardDir; // 0x5A8
		::System::Boolean ForbidCameraZoomInput; // 0x5B4
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x5B5
		::System::Boolean IsFreeLookAt; // 0x5B6
		::System::Boolean ForbidRoamingInput; // 0x5B7
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x5B8
		::System::Single TrackRoamingRotationFactor; // 0x5BC
		::System::Single TrackRoamingXAnglePercentage; // 0x5C0
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x5C4
		::RPG::GameCore::CameraMode CurrentMode; // 0x5D4
		::System::Single ScreenPointDownTimer; // 0x5D8
		::System::Single FOVAdaptionRatio; // 0x5DC
		::System::Single TrackRoamingStandardSpeed; // 0x5E0
		::System::Int32 TrackCameraEndBlendInIndex; // 0x5E4
		::System::Single ScreenPointUpTimer; // 0x5E8
		::System::Single MoveControlDistance; // 0x5EC
		::System::Boolean ResetCinemachineZoomFlag; // 0x5F0
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x5F1
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x5F2
		::System::Boolean KeepInputCameraDirection; // 0x5F3
		::RPG::GameCore::VCameraState NextVCameraState; // 0x5F4
		::System::Single CameraZoomRatio; // 0x5F8
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x5FC
		::System::Int32 ConfigPriority; // 0x600
		::System::Single CameraZoomDistance; // 0x604
		::System::UInt32 TrackPathWayGroupID; // 0x608
		::System::Single TopViewSmoothTime; // 0x60C

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

		::Struct_2_87411F35FE812768 GetInheritParams()
		{
			return ((::Struct_2_87411F35FE812768(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET))(this);
		}

		::System::Void ApplyInheritParams(::Struct_2_87411F35FE812768& inheritParams)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_87411F35FE812768&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET))(this, inheritParams);
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

		::System::Void _RefreshBattlePhaseNewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHBATTLEPHASENEWDATA_OFFSET))(this);
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
