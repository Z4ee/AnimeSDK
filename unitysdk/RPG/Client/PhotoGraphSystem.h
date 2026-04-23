#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/Client/PhotoGraphTag.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/TrackPhotoIdentifyState.h"
#include "unitysdk/RPG/Client/TrackPhotoShotParam.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/TrackPhotoCanType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_26344DF203E4572F;
class Class_1_58E5F1B9DB1659B4;
class Class_1_85DF9887662222C3;
class Class_1_94FB79109AF2A6F5;
class Class_1_A27BF87A78CEBB28;
class Class_1_B958907EBFDC8D4E;
class Class_1_CC76D1702CC17C09_7;
class Class_1_E184AC50951905CE;
class Class_1_EE8A4340619C5F50;
class Class_3_E21F6DE9B7FA4D05;
namespace Cinemachine { class CinemachinePathBase; }
namespace RPG::Client { class ActivityTrackPhotoStageInstance; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class FreeDecal; }
namespace RPG::Client { class PhotoGraphAimContainer; }
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphModule; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class PhotoGraphFindNpc; }
namespace RPG::GameCore { class PhotoGraphModeExtraConfigSetting; }
namespace RPG::GameCore { class PhotoGraphSetSingleTargetUniqueName; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class SimpleFreeStyleConfig; }
namespace RPG::GameCore { class StartTrackPhoto; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrackPhotoTrashCanConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDAIMNPCID_OFFSET UNITYSDK_OFFSET(0xAC7B000)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDTAGOBJECT_OFFSET UNITYSDK_OFFSET(0xAC7CD20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_APPLYEXTRACONFIG_OFFSET UNITYSDK_OFFSET(0xAC6F590)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_BINDPHOTOGRAPHAIMCONTAINER_OFFSET UNITYSDK_OFFSET(0xAC7A0D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_CANSTARTTRIPMODE_OFFSET UNITYSDK_OFFSET(0xAC77AA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIOSTATIC_OFFSET UNITYSDK_OFFSET(0xAC7D3C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIO_OFFSET UNITYSDK_OFFSET(0xAC7D520)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC79910)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ENDLISTENIDLESTATELEAVE_OFFSET UNITYSDK_OFFSET(0xAC78FB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_EXECUTERESTARTSEQ_OFFSET UNITYSDK_OFFSET(0xAC734D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_EXITTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xAC72F00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAIMCONTAINER_OFFSET UNITYSDK_OFFSET(0xAC76110)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAUTOAIMRESULTINIDENTIFYRECT_OFFSET UNITYSDK_OFFSET(0xAC7CA40)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETCHECKRANGE_OFFSET UNITYSDK_OFFSET(0xAC7BB20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETDECALASSET_OFFSET UNITYSDK_OFFSET(0xAC677D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETINITFOV_OFFSET UNITYSDK_OFFSET(0xAC7CBB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETMANUALLYAIMRESULTINIDENTIFYRECT_OFFSET UNITYSDK_OFFSET(0xAC7C9C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHDETECTPOS_OFFSET UNITYSDK_OFFSET(0xAC7B890)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAGS_OFFSET UNITYSDK_OFFSET(0xAC7D140)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAG_OFFSET UNITYSDK_OFFSET(0xAC7D2E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETROAMINGSTYLEFROMGRAPHMODE_OFFSET UNITYSDK_OFFSET(0xAC7A9B0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOPATH_OFFSET UNITYSDK_OFFSET(0xAC73EF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xAC741A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALSCORE_OFFSET UNITYSDK_OFFSET(0xAC73F30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKROAMINGCAMERAXANGLEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0xAC74A10)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_CACHEDDECALS_OFFSET UNITYSDK_OFFSET(0xAC80F80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ENABLETRACKMODE_OFFSET UNITYSDK_OFFSET(0xAC773C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_EXITWHENPREVIEWDIALOGFINISH_OFFSET UNITYSDK_OFFSET(0xAC7D680)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_FUNCBTNMANAGER_OFFSET UNITYSDK_OFFSET(0xAC7D5F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INITLOOKATPOS_OFFSET UNITYSDK_OFFSET(0xAC7D6C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INPUTMANAGER_OFFSET UNITYSDK_OFFSET(0xAC7D5D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISINTRIPODMODE_OFFSET UNITYSDK_OFFSET(0xAC79130)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISLOCKUIIDENTIFYHINT_OFFSET UNITYSDK_OFFSET(0xAC7D610)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_LEVELGRAPHSTARTENTITYREF_OFFSET UNITYSDK_OFFSET(0xAC7D640)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_PHOTOGRAPHMODE_OFFSET UNITYSDK_OFFSET(0xAC7D630)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_SKIPPHOTOPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xAC7D660)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0xAC773D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xAC773F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEFAKEAVATARPHOTO_OFFSET UNITYSDK_OFFSET(0xAC79140)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEFAKEPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0xAC79150)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEINITLOOKAT_OFFSET UNITYSDK_OFFSET(0xAC7D6A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_HASAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0xAC7B6C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0xAC7C870)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_LOCKUIIDENTIFYHINT_OFFSET UNITYSDK_OFFSET(0xAC7CCD0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_OVERRIDEIDENTIFYRADIUS_OFFSET UNITYSDK_OFFSET(0xAC7CAA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REFRESHPHOTOGRAPHAIMTARGET_OFFSET UNITYSDK_OFFSET(0xAC7A6C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVEAIMNPCID_OFFSET UNITYSDK_OFFSET(0xAC7B4A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVETAGOBJECT_OFFSET UNITYSDK_OFFSET(0xAC7CFF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_RESTARTTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xAC735B0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTEXTRACONFIG_OFFSET UNITYSDK_OFFSET(0xAC70530)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTTRIPODMODE_OFFSET UNITYSDK_OFFSET(0xAC78CA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SAVEDECALS_OFFSET UNITYSDK_OFFSET(0xAC67B30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITFOV_OFFSET UNITYSDK_OFFSET(0xAC7CB50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITLOOKATPOS_OFFSET UNITYSDK_OFFSET(0xAC7CC00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMAXIDENTIFYDISTANCE_OFFSET UNITYSDK_OFFSET(0xAC7CC70)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMODELOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0xAC7CB00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETTRACKSTANDARDSPEED_OFFSET UNITYSDK_OFFSET(0xAC733F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_EXITWHENPREVIEWDIALOGFINISH_OFFSET UNITYSDK_OFFSET(0xAC7D690)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_FUNCBTNMANAGER_OFFSET UNITYSDK_OFFSET(0xAC7D600)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INITLOOKATPOS_OFFSET UNITYSDK_OFFSET(0xAC7D6E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INPUTMANAGER_OFFSET UNITYSDK_OFFSET(0xAC7D5E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_ISLOCKUIIDENTIFYHINT_OFFSET UNITYSDK_OFFSET(0xAC7D620)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_SKIPPHOTOPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0xAC7D670)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0xAC773E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0xAC77400)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_USEINITLOOKAT_OFFSET UNITYSDK_OFFSET(0xAC7D6B0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SHOWIDENTIFYAIMRESULTSTATUS_OFFSET UNITYSDK_OFFSET(0xAC7C950)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTLISTENIDLESTATELEAVE_OFFSET UNITYSDK_OFFSET(0xAC78C10)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xAC71640)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SWITCHTRACKPHOTOCAMERACONTROLACTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xAC77170)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TAKEPHOTO_OFFSET UNITYSDK_OFFSET(0xAC7C260)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0xAC7BBD0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMENTITY_OFFSET UNITYSDK_OFFSET(0xAC7ABC0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMUNION_OFFSET UNITYSDK_OFFSET(0xAC7AF30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYOVERRIDEIDENTIFYPANELTIP_OFFSET UNITYSDK_OFFSET(0xAC7C8C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYPHOTOGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0xAC7C810)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMENTITY_OFFSET UNITYSDK_OFFSET(0xAC7ADF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMUNION_OFFSET UNITYSDK_OFFSET(0xAC7AFA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYSTARTTRIPODMODE_OFFSET UNITYSDK_OFFSET(0xAC78270)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_USEFAKEPLAYER_OFFSET UNITYSDK_OFFSET(0xAC77410)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ADDAIMNPCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC7B3C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__APPLYHIDEPET_OFFSET UNITYSDK_OFFSET(0xAC70590)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC80F90)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0xAC7BA00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0xAC7FE50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKISNPCEXTRASCORE_OFFSET UNITYSDK_OFFSET(0xAC75610)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECAMERAPOS_OFFSET UNITYSDK_OFFSET(0xAC77BF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECONFIG_OFFSET UNITYSDK_OFFSET(0xAC77B70)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CLEARDECALSCACHE_OFFSET UNITYSDK_OFFSET(0xAC80CD0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC79160)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__DISPOSEDECALSCACHE_OFFSET UNITYSDK_OFFSET(0xAC79E90)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__DOAPPLYEXTRACONFIG_OFFSET UNITYSDK_OFFSET(0xAC6F5F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ENABLELOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0xAC80620)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__EXITIDENTIFY_OFFSET UNITYSDK_OFFSET(0xAC7AB50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__FINISHPHOTOGRAPH_OFFSET UNITYSDK_OFFSET(0xAC7ECD0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALIDWITHCHECKMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0xAC7C1C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALID_OFFSET UNITYSDK_OFFSET(0xAC7A410)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__LISTENIDLESTATELEAVE_OFFSET UNITYSDK_OFFSET(0xAC79040)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOTNONPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0xAC7C3E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOT_OFFSET UNITYSDK_OFFSET(0xAC7C760)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONDECALPUZZLECLEAR_OFFSET UNITYSDK_OFFSET(0xAC80D40)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCCREATED_OFFSET UNITYSDK_OFFSET(0xAC80A20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0xAC80B80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPHOTOGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0xAC7F670)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPLAYERDANGERSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xAC7F6D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONFINISH_OFFSET UNITYSDK_OFFSET(0xAC80950)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONSTART_OFFSET UNITYSDK_OFFSET(0xAC80700)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTRACKPHOTOSHOTEND_OFFSET UNITYSDK_OFFSET(0xAC74B80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALFINISH_OFFSET UNITYSDK_OFFSET(0xAC7F870)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALSTART_OFFSET UNITYSDK_OFFSET(0xAC7F7D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSETTARGETLOOKAT_OFFSET UNITYSDK_OFFSET(0xAC70CB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_1_OFFSET UNITYSDK_OFFSET(0xAC705F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_OFFSET UNITYSDK_OFFSET(0xAC706F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWNPC_OFFSET UNITYSDK_OFFSET(0xAC707F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHTRIGGERCHARACTERFREESTYLE_OFFSET UNITYSDK_OFFSET(0xAC71270)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC796A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__REMOVEAIMNPCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC79FF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__SETNPCUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xAC709A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTIDENTIFY_OFFSET UNITYSDK_OFFSET(0xAC7AA10)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTPHOTOGRAPH_OFFSET UNITYSDK_OFFSET(0xAC7D700)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHPHOTOGRAPHMODE_OFFSET UNITYSDK_OFFSET(0xAC7E170)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHTRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0xAC74AE0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKCACHEDDECALSMOVEDESTROY_OFFSET UNITYSDK_OFFSET(0xAC7C0A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKIDLESHOW_OFFSET UNITYSDK_OFFSET(0xAC7BFE0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0xAC7BE60)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0xAC76AF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRIGGERSWITCHCAMERAROAMINGMODEEVENT_OFFSET UNITYSDK_OFFSET(0xAC7FBE0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYREVERTFAKEPLAYER_OFFSET UNITYSDK_OFFSET(0xAC77770)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYREVERTTRIPODMODEONPHOTOGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0xAC778B0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYSETPLAYERFORWARDTOCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0xAC7F8C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__UNREGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC79C20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__UPDATETRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0xAC75850)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem_TypeDefinitionIndex = 56178;

	class PhotoGraphSystem : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_LeftStickLeft()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x631F0);
		}
		static ::System::String** StaticGet_LeftStickDown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x631F8);
		}
		static ::System::String** StaticGet_LeftStickRight()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x63200);
		}
		static ::System::String** StaticGet_LeftStickUp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x63208);
		}
		static ::System::Int32* StaticGet__TripodCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x10740);
		}
		// static const ::System::Single _TrackPhotoRotationFactorInControllerMode; // 0x0
		// static const ::System::Single _TrackPhotoAimCacheDuration; // 0x0
		// static const ::System::String* _DecalPrefabPath; // 0x0
		// static const ::System::String* _PhotoGraphStartJsonPath; // 0x0
		// static const ::System::String* _PhotoGraphStartCustomString; // 0x0
		// static const ::System::String* _PhotoGraphFinishCustomString; // 0x0
		// static const ::System::String* _PhotoGraphThirdPersonModeStartCustomString; // 0x0
		// static const ::System::String* _PhotoGraphFirstPersonModeStartCustomString; // 0x0
		// static const ::System::String* _PhotoGraphThirdToFirstPersonCustomString; // 0x0
		// static const ::System::String* _PhotoGraphFirstToThirdPersonCustomString; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _TrackPhotoShotPairs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _TrackPhotoCacheTargets; // 0x18
		::RPG::GameCore::GameEntity* _StealTargetEntity; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>* _TrashPhotoConfig; // 0x28
		::Class_1_EE8A4340619C5F50* _PhotoGraphAimEntityContainer; // 0x30
		::RPG::GameCore::TaskContext* _TrackPhotoContext; // 0x38
		::RPG::Client::ActivityTrackPhotoStageInstance* _TrackPhotoStageInstance_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _ShotNpcIds; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* _CachedDecalList; // 0x50
		::RPG::GameCore::GameWorld* _OwnerGameWorld; // 0x58
		::System::Collections::Generic::List_1<::Class_1_94FB79109AF2A6F5*>* _IdentifyTargetNpcInfo; // 0x60
		::Class_1_B958907EBFDC8D4E* _FuncBtnManager_k__BackingField; // 0x68
		::Cinemachine::CinemachinePathBase* _CinemachinePath; // 0x70
		::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _TrackPhotoInstanceConfig; // 0x78
		::RPG::Client::PhotoGraphModule* _PhotoGraphModuleRef; // 0x80
		::UnityEngine::GameObject* _TrackAsset; // 0x88
		::System::Collections::Generic::List_1<::Class_1_58E5F1B9DB1659B4*>* _TrackPhotoEventTrigger; // 0x90
		::RPG::Client::PhotoGraphAimContainer* _CurPhotoGraphAimContainer; // 0x98
		::UnityEngine::GameObject* _TrackGo; // 0xA0
		::RPG::GameCore::StartTrackPhoto* _TrackPhotoConfig; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CC76D1702CC17C09_7*>* _TrackPhotoTargetCacheInfo; // 0xB0
		::UnityEngine::GameObject* _TripodModeCollider; // 0xB8
		::Class_1_26344DF203E4572F* _PhotoGraphTagNotifyParam; // 0xC0
		::UnityEngine::GameObject* _DecalPrefabAsset; // 0xC8
		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* _TrackPhotoShotParams; // 0xD0
		::RPG::GameCore::LevelGraphComponent* _PhotoGraphStartComponent; // 0xD8
		::RPG::Client::AdventurePhase* _OwnerPhaseRef; // 0xE0
		::UnityEngine::Coroutine* _DelayShotCoro; // 0xE8
		::UnityEngine::GameObject* _TrackPhotoPrevShadowCenterGo; // 0xF0
		::Class_1_E184AC50951905CE* _InputManager_k__BackingField; // 0xF8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _LastTakePhotoTargets; // 0x100
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideProp; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* _photoGraphTagDict; // 0x110
		::Class_3_E21F6DE9B7FA4D05* _TrackPhotoRestartSeq; // 0x118
		::System::Single _MaxIdentifyDistance; // 0x120
		::System::Boolean _UseInitLookAt_k__BackingField; // 0x124
		::System::Boolean _ExitWhenPreViewDialogFinish_k__BackingField; // 0x125
		::System::Boolean _ModeLocked; // 0x126
		::System::Boolean _IsInTutorial; // 0x127
		::RPG::GameCore::PhotoGraphModeType _PhotoGraphMode; // 0x128
		::System::Single _TripodCameraYaw; // 0x12C
		::UnityEngine::Vector3 _InitLookAtPos_k__BackingField; // 0x130
		::System::Boolean _IsUseFakeAvatar; // 0x13C
		::System::Boolean _ModeLockPlayerControl; // 0x13D
		::System::Boolean _IsInTrackPhotoRestart; // 0x13E
		::System::Boolean _CurPhotoGraphAimContainerDelayRefresh; // 0x13F
		::System::Int32 _TrackPhotoHandle; // 0x140
		::UnityEngine::Quaternion _PlayerOriRot; // 0x144
		::UnityEngine::Vector3 _PlayerOriPos; // 0x154
		::System::Single _IdentifyRadiusOverride; // 0x160
		::System::Single _InitFov; // 0x164
		::System::Boolean _CurPhotoGraphAimContainerDelayStart; // 0x168
		::System::Boolean _IsTrackPhotoFinished; // 0x169
		::System::Boolean _InTripodMode; // 0x16A
		::System::Boolean _EnableTrackMode; // 0x16B
		::System::UInt32 _UseFakeAvatarID; // 0x16C
		::System::UInt32 _TrackPhotoStageID; // 0x170
		::RPG::Client::CameraDataAndFlags_RoamingStyle _CurrentRoamingStyle; // 0x174
		::System::Boolean _IsLockUIIdentifyHint_k__BackingField; // 0x178
		::System::Boolean _IsInIdleShow; // 0x179
		::System::Boolean _SkipPhotoPreviewDialog_k__BackingField; // 0x17A
		::System::Boolean _UseAnchorCameraForward; // 0x17B
		::UnityEngine::Vector3 _TripodCameraPos; // 0x17C
		::RPG::Client::TrackPhotoIdentifyState _TrackPhotoIdentifyState_k__BackingField; // 0x188
		::UnityEngine::Vector2 _TrackPhotoAimCacheRangeScale; // 0x18C

		::System::Void _ctor(::RPG::Client::AdventurePhase* pAdvPhase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CTOR_OFFSET))(this, pAdvPhase);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void ApplyExtraConfig(::RPG::GameCore::PhotoGraphModeExtraConfigSetting* settingConfig, ::RPG::GameCore::TaskContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_APPLYEXTRACONFIG_OFFSET))(this, settingConfig, context);
		}

		::System::Void RevertExtraConfig(::RPG::GameCore::PhotoGraphModeExtraConfigSetting* settingConfig, ::RPG::GameCore::TaskContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTEXTRACONFIG_OFFSET))(this, settingConfig, context);
		}

		::System::Void _ApplyHidePet(::System::Boolean apply)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__APPLYHIDEPET_OFFSET))(this, apply);
		}

		::System::Void _DoApplyExtraConfig(::RPG::GameCore::PhotoGraphModeExtraConfigSetting* settingConfig, ::RPG::GameCore::TaskContext* context, ::System::Boolean apply)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__DOAPPLYEXTRACONFIG_OFFSET))(this, settingConfig, context, apply);
		}

		::System::Void _PhotoGraphTriggerCharacterFreeStyle(::RPG::GameCore::TaskContext* context, ::RPG::GameCore::SimpleFreeStyleConfig* freeStyleConfig, ::System::Boolean apply)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SimpleFreeStyleConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHTRIGGERCHARACTERFREESTYLE_OFFSET))(this, context, freeStyleConfig, apply);
		}

		::System::Void _PhotoGraphShowEntity(::RPG::GameCore::TargetEvaluator* evaluator, ::RPG::GameCore::TaskContext* context, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_OFFSET))(this, evaluator, context, show);
		}

		::System::Void _PhotoGraphShowEntity_1(::RPG::GameCore::GameEntity* entity, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_1_OFFSET))(this, entity, show);
		}

		::System::Void _PhotoGraphShowNpc(::Il2CppArray<::RPG::GameCore::PhotoGraphFindNpc*>* multiNpc, ::RPG::GameCore::TaskContext* context, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PhotoGraphFindNpc*>*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWNPC_OFFSET))(this, multiNpc, context, show);
		}

		::System::Void _SetNpcUniqueName(::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>* uniqueNameSettings, ::RPG::GameCore::TaskContext* context, ::System::Boolean set)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__SETNPCUNIQUENAME_OFFSET))(this, uniqueNameSettings, context, set);
		}

		::System::Void _PhotoGraphSetTargetLookAt(::RPG::GameCore::TargetEvaluator* evaluator, ::RPG::GameCore::TaskContext* context, ::System::Boolean lookAt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSETTARGETLOOKAT_OFFSET))(this, evaluator, context, lookAt);
		}

		::System::Void StartTrackPhoto(::RPG::GameCore::StartTrackPhoto* config, ::RPG::GameCore::TaskContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StartTrackPhoto*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTTRACKPHOTO_OFFSET))(this, config, context);
		}

		::System::Void ExecuteRestartSeq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_EXECUTERESTARTSEQ_OFFSET))(this);
		}

		::System::Void RestartTrackPhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_RESTARTTRACKPHOTO_OFFSET))(this);
		}

		::System::Void ExitTrackPhoto()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_EXITTRACKPHOTO_OFFSET))(this);
		}

		::System::Void SetTrackStandardSpeed(::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETTRACKSTANDARDSPEED_OFFSET))(this, speed);
		}

		::Cinemachine::CinemachinePathBase* GetTrackPhotoPath()
		{
			return ((::Cinemachine::CinemachinePathBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOPATH_OFFSET))(this);
		}

		::System::UInt32 GetTrackPhotoTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALSCORE_OFFSET))(this);
		}

		::System::Void GetTrackPhotoTotalCount(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>*& totalCount, ::System::UInt32& extraShotTotalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALCOUNT_OFFSET))(this, totalCount, extraShotTotalCount);
		}

		::System::Single GetTrackRoamingCameraXAnglePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKROAMINGCAMERAXANGLEPERCENTAGE_OFFSET))(this);
		}

		::System::Void _SwitchTrackPhotoIdentifyState(::RPG::Client::TrackPhotoIdentifyState newState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackPhotoIdentifyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHTRACKPHOTOIDENTIFYSTATE_OFFSET))(this, newState);
		}

		::System::Void _OnTrackPhotoShotEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTRACKPHOTOSHOTEND_OFFSET))(this, arg);
		}

		::System::Boolean _CheckIsNpcExtraScore(::RPG::GameCore::GameEntity* npcEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKISNPCEXTRASCORE_OFFSET))(this, npcEntity);
		}

		::System::Void _UpdateTrackPhotoIdentifyState(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__UPDATETRACKPHOTOIDENTIFYSTATE_OFFSET))(this, deltaTime);
		}

		::System::Void _TickTrackPhoto(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKTRACKPHOTO_OFFSET))(this, deltaTime);
		}

		::System::Void SwitchTrackPhotoCameraControlActionOverride(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SWITCHTRACKPHOTOCAMERACONTROLACTIONOVERRIDE_OFFSET))(this, enable);
		}

		::System::Boolean get_EnableTrackMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ENABLETRACKMODE_OFFSET))(this);
		}

		::RPG::Client::TrackPhotoIdentifyState get_TrackPhotoIdentifyState()
		{
			return ((::RPG::Client::TrackPhotoIdentifyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOIDENTIFYSTATE_OFFSET))(this);
		}

		::System::Void set_TrackPhotoIdentifyState(::RPG::Client::TrackPhotoIdentifyState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackPhotoIdentifyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOIDENTIFYSTATE_OFFSET))(this, value);
		}

		::RPG::Client::ActivityTrackPhotoStageInstance* get_TrackPhotoStageInstance()
		{
			return ((::RPG::Client::ActivityTrackPhotoStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOSTAGEINSTANCE_OFFSET))(this);
		}

		::System::Void set_TrackPhotoStageInstance(::RPG::Client::ActivityTrackPhotoStageInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityTrackPhotoStageInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOSTAGEINSTANCE_OFFSET))(this, value);
		}

		::System::Void UseFakePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_USEFAKEPLAYER_OFFSET))(this);
		}

		::System::Void _TryRevertFakePlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYREVERTFAKEPLAYER_OFFSET))(this);
		}

		::System::Void _TryRevertTripodModeOnPhotoGraphExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYREVERTTRIPODMODEONPHOTOGRAPHEXIT_OFFSET))(this);
		}

		::System::Boolean CanStartTripMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_CANSTARTTRIPMODE_OFFSET))(this);
		}

		::System::Boolean _CheckTripModeConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECONFIG_OFFSET))(this);
		}

		::System::Boolean _CheckTripModeCameraPos(::UnityEngine::RaycastHit& hitInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECAMERAPOS_OFFSET))(this, hitInfo);
		}

		::System::Boolean TryStartTripodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYSTARTTRIPODMODE_OFFSET))(this);
		}

		::System::Void RevertTripodMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTTRIPODMODE_OFFSET))(this);
		}

		::System::Void StartListenIdleStateLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTLISTENIDLESTATELEAVE_OFFSET))(this);
		}

		::System::Void EndListenIdleStateLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ENDLISTENIDLESTATELEAVE_OFFSET))(this);
		}

		::System::Void _ListenIdleStateLeave(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__LISTENIDLESTATELEAVE_OFFSET))(this, arg);
		}

		::System::Boolean get_IsInTripodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISINTRIPODMODE_OFFSET))(this);
		}

		::System::Boolean get_UseFakeAvatarPhoto()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEFAKEAVATARPHOTO_OFFSET))(this);
		}

		::System::UInt32 get_UseFakePlayerAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEFAKEPLAYERAVATARID_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void BindPhotoGraphAimContainer(::RPG::Client::PhotoGraphAimContainer* photoGraphAimContainer)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_BINDPHOTOGRAPHAIMCONTAINER_OFFSET))(this, photoGraphAimContainer);
		}

		::System::Void RefreshPhotoGraphAimTarget(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* targetEntitys)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REFRESHPHOTOGRAPHAIMTARGET_OFFSET))(this, targetEntitys);
		}

		::RPG::Client::CameraDataAndFlags_RoamingStyle GetRoamingStyleFromGraphMode(::RPG::GameCore::PhotoGraphModeType photoGraphMode)
		{
			return ((::RPG::Client::CameraDataAndFlags_RoamingStyle(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETROAMINGSTYLEFROMGRAPHMODE_OFFSET))(this, photoGraphMode);
		}

		::System::Void _StartIdentify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTIDENTIFY_OFFSET))(this);
		}

		::System::Void _ExitIdentify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__EXITIDENTIFY_OFFSET))(this);
		}

		::System::Void TryAddAimEntity(::RPG::GameCore::GameEntity* targetEntity, ::RPG::GameCore::PhotoGraphAimIdentifyType identifyType, ::UnityEngine::Vector3 targetExtraAimOffset)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMENTITY_OFFSET))(this, targetEntity, identifyType, targetExtraAimOffset);
		}

		::System::Void TryRemoveAimEntity(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMENTITY_OFFSET))(this, targetEntity);
		}

		::System::Void TryAddAimUnion(::Class_1_85DF9887662222C3* targetUnion, ::RPG::GameCore::PhotoGraphAimIdentifyType identifyType)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_85DF9887662222C3*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMUNION_OFFSET))(this, targetUnion, identifyType);
		}

		::System::Void TryRemoveAimUnion(::Class_1_85DF9887662222C3* targetUnion)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_85DF9887662222C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMUNION_OFFSET))(this, targetUnion);
		}

		::System::Void AddAimNpcID(::System::UInt32 npcId, ::RPG::GameCore::PhotoGraphAimIdentifyType identifyType, ::UnityEngine::Vector3 targetExtraAimOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDAIMNPCID_OFFSET))(this, npcId, identifyType, targetExtraAimOffset);
		}

		::System::Void RemoveAimNpcID(::System::UInt32 npcId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVEAIMNPCID_OFFSET))(this, npcId);
		}

		::System::Boolean HasAimEntityInRange(::System::Single range)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_HASAIMENTITYINRANGE_OFFSET))(this, range);
		}

		::UnityEngine::Vector3 GetPhotoGraphDetectPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHDETECTPOS_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void TakePhoto(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* targetAimList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TAKEPHOTO_OFFSET))(this, targetAimList);
		}

		::System::Void _NotifyShotNonPostProcess(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* targetAimList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOTNONPOSTPROCESS_OFFSET))(this, targetAimList);
		}

		::System::Void _NotifyShot(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* targetAimList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOT_OFFSET))(this, targetAimList);
		}

		::System::Void TryPhotoGraphExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYPHOTOGRAPHEXIT_OFFSET))(this);
		}

		::System::Boolean IsInTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ISINTUTORIAL_OFFSET))(this);
		}

		::System::Void TryOverrideIdentifyPanelTip(::RPG::Client::TextID tip, ::System::Int32 priority, ::System::Boolean needNotify)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYOVERRIDEIDENTIFYPANELTIP_OFFSET))(this, tip, priority, needNotify);
		}

		::System::Void ShowIdentifyAimResultStatus(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SHOWIDENTIFYAIMRESULTSTATUS_OFFSET))(this, isSuccess);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* GetManuallyAimResultInIdentifyRect()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETMANUALLYAIMRESULTINIDENTIFYRECT_OFFSET))(this);
		}

		::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* GetAutoAimResultInIdentifyRect()
		{
			return ((::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAUTOAIMRESULTINIDENTIFYRECT_OFFSET))(this);
		}

		::System::Void OverrideIdentifyRadius(::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_OVERRIDEIDENTIFYRADIUS_OFFSET))(this, radius);
		}

		::System::Void SetModeLockPlayerControl(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMODELOCKPLAYERCONTROL_OFFSET))(this, enable);
		}

		::System::Void SetInitFov(::System::Single fov)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITFOV_OFFSET))(this, fov);
		}

		::System::Single GetInitFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETINITFOV_OFFSET))(this);
		}

		::System::Void SetInitLookAtPos(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITLOOKATPOS_OFFSET))(this, pos);
		}

		::System::Void SetMaxIdentifyDistance(::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMAXIDENTIFYDISTANCE_OFFSET))(this, distance);
		}

		::System::Void LockUIIdentifyHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_LOCKUIIDENTIFYHINT_OFFSET))(this);
		}

		::System::Void AddTagObject(::RPG::Client::PhotoGraphTag photoGraphTag, ::UnityEngine::GameObject* targetGO)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphTag, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDTAGOBJECT_OFFSET))(this, photoGraphTag, targetGO);
		}

		::System::Void RemoveTagObject(::RPG::Client::PhotoGraphTag photoGraphTag, ::UnityEngine::GameObject* targetGO)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphTag, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVETAGOBJECT_OFFSET))(this, photoGraphTag, targetGO);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetPhotoGraphObjectsByTags(::Il2CppArray<::RPG::Client::PhotoGraphTag>* tags)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Il2CppArray<::RPG::Client::PhotoGraphTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAGS_OFFSET))(this, tags);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetPhotoGraphObjectsByTag(::RPG::Client::PhotoGraphTag tag)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::RPG::Client::PhotoGraphTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAG_OFFSET))(this, tag);
		}

		static ::System::Boolean CheckTargetInRectRatioStatic(::UnityEngine::Vector3 pos, ::RPG::GameCore::PhotoGraphTargetSize* targetSize, ::System::Single ratio)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIOSTATIC_OFFSET))(pos, targetSize, ratio);
		}

		::System::Boolean CheckTargetInRectRatio(::UnityEngine::Vector3 pos, ::RPG::GameCore::PhotoGraphTargetSize* targetSize, ::System::Single ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIO_OFFSET))(this, pos, targetSize, ratio);
		}

		::RPG::Client::PhotoGraphAimContainer* GetAimContainer()
		{
			return ((::RPG::Client::PhotoGraphAimContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAIMCONTAINER_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetDecalAsset()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETDECALASSET_OFFSET))(this);
		}

		::Class_1_E184AC50951905CE* get_InputManager()
		{
			return ((::Class_1_E184AC50951905CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INPUTMANAGER_OFFSET))(this);
		}

		::System::Void set_InputManager(::Class_1_E184AC50951905CE* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E184AC50951905CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INPUTMANAGER_OFFSET))(this, value);
		}

		::Class_1_B958907EBFDC8D4E* get_FuncBtnManager()
		{
			return ((::Class_1_B958907EBFDC8D4E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_FUNCBTNMANAGER_OFFSET))(this);
		}

		::System::Void set_FuncBtnManager(::Class_1_B958907EBFDC8D4E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B958907EBFDC8D4E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_FUNCBTNMANAGER_OFFSET))(this, value);
		}

		::System::Boolean get_IsLockUIIdentifyHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISLOCKUIIDENTIFYHINT_OFFSET))(this);
		}

		::System::Void set_IsLockUIIdentifyHint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_ISLOCKUIIDENTIFYHINT_OFFSET))(this, value);
		}

		::RPG::GameCore::PhotoGraphModeType get_PhotoGraphMode()
		{
			return ((::RPG::GameCore::PhotoGraphModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_PHOTOGRAPHMODE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_LevelGraphStartEntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_LEVELGRAPHSTARTENTITYREF_OFFSET))(this);
		}

		::System::Boolean get_SkipPhotoPreviewDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_SKIPPHOTOPREVIEWDIALOG_OFFSET))(this);
		}

		::System::Void set_SkipPhotoPreviewDialog(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_SKIPPHOTOPREVIEWDIALOG_OFFSET))(this, value);
		}

		::System::Boolean get_ExitWhenPreViewDialogFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_EXITWHENPREVIEWDIALOGFINISH_OFFSET))(this);
		}

		::System::Void set_ExitWhenPreViewDialogFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_EXITWHENPREVIEWDIALOGFINISH_OFFSET))(this, value);
		}

		::System::Boolean get_UseInitLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEINITLOOKAT_OFFSET))(this);
		}

		::System::Void set_UseInitLookAt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_USEINITLOOKAT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_InitLookAtPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INITLOOKATPOS_OFFSET))(this);
		}

		::System::Void set_InitLookAtPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INITLOOKATPOS_OFFSET))(this, value);
		}

		::System::Void _RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _UnRegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__UNREGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _StartPhotoGraph(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTPHOTOGRAPH_OFFSET))(this, arg);
		}

		::System::Void _FinishPhotoGraph(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__FINISHPHOTOGRAPH_OFFSET))(this, arg);
		}

		::System::Void _OnPhotoGraphExit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPHOTOGRAPHEXIT_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerDangerStatusChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPLAYERDANGERSTATUSCHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnTutorialStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALSTART_OFFSET))(this, arg);
		}

		::System::Void _OnTutorialFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALFINISH_OFFSET))(this, arg);
		}

		::System::Void _TrySetPlayerForwardToCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYSETPLAYERFORWARDTOCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void _SwitchPhotoGraphMode(::RPG::GameCore::PhotoGraphModeType targetMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHPHOTOGRAPHMODE_OFFSET))(this, targetMode);
		}

		::System::Void _TriggerSwitchCameraRoamingModeEvent(::RPG::Client::CameraDataAndFlags_RoamingStyle from, ::RPG::Client::CameraDataAndFlags_RoamingStyle to)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_RoamingStyle, ::RPG::Client::CameraDataAndFlags_RoamingStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TRIGGERSWITCHCAMERAROAMINGMODEEVENT_OFFSET))(this, from, to);
		}

		::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* _GetAimEntityInfoValidWithCheckMaxDistance(::System::Boolean& anyAimEntityInMaxRange)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALIDWITHCHECKMAXDISTANCE_OFFSET))(this, anyAimEntityInMaxRange);
		}

		::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* _GetAimEntityInfoValid()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALID_OFFSET))(this);
		}

		::System::Single GetCheckRange(::System::Single distance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETCHECKRANGE_OFFSET))(this, distance);
		}

		::System::Boolean _CheckAimEntityInRange(::RPG::GameCore::GameEntity* entity, ::System::Single distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYINRANGE_OFFSET))(this, entity, distance);
		}

		::System::Boolean _CheckAimEntityVisible(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYVISIBLE_OFFSET))(this, entity);
		}

		::System::Void _TickLookAtCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKLOOKATCAMERA_OFFSET))(this);
		}

		::System::Void _EnableLookAtCamera(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ENABLELOOKATCAMERA_OFFSET))(this, enable);
		}

		::System::Void _TickIdleShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKIDLESHOW_OFFSET))(this);
		}

		::System::Void _OnStealActionStart(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONSTART_OFFSET))(this, arg);
		}

		::System::Void _OnStealActionFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONFINISH_OFFSET))(this, arg);
		}

		::System::Void _OnNpcCreated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCCREATED_OFFSET))(this, arg);
		}

		::System::Void _OnNpcDestroy(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCDESTROY_OFFSET))(this, arg);
		}

		::System::Void _AddAimNpcNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ADDAIMNPCNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveAimNpcNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__REMOVEAIMNPCNOTIFY_OFFSET))(this);
		}

		::System::Void SaveDecals(::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* decalsToSave)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SAVEDECALS_OFFSET))(this, decalsToSave);
		}

		::System::Void _TickCachedDecalsMoveDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKCACHEDDECALSMOVEDESTROY_OFFSET))(this);
		}

		::System::Void _ClearDecalsCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CLEARDECALSCACHE_OFFSET))(this);
		}

		::System::Void _DisposeDecalsCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__DISPOSEDECALSCACHE_OFFSET))(this);
		}

		::System::Void _OnDecalPuzzleClear(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONDECALPUZZLECLEAR_OFFSET))(this, arg);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* get_CachedDecals()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_CACHEDDECALS_OFFSET))(this);
		}
	};
}
