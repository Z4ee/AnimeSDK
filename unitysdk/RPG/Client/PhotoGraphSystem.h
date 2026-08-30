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
class Class_1_2A2B2DC1DA1205FE;
class Class_1_58E5F1B9DB1659B4;
class Class_1_5B17A9E521FAC323;
class Class_1_94FB79109AF2A6F5;
class Class_1_A27BF87A78CEBB28;
class Class_1_CC76D1702CC17C09_7;
class Class_1_D50913C0AC7A262A;
class Class_1_E184AC50951905CE;
class Class_3_07C3C4D2990C49EE;
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

#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDAIMNPCID_OFFSET UNITYSDK_OFFSET(0x1867F620)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDTAGOBJECT_OFFSET UNITYSDK_OFFSET(0x18681240)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_APPLYEXTRACONFIG_OFFSET UNITYSDK_OFFSET(0x18673A00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_BINDPHOTOGRAPHAIMCONTAINER_OFFSET UNITYSDK_OFFSET(0x1867E650)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_CANSTARTTRIPMODE_OFFSET UNITYSDK_OFFSET(0x1867BE00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIOSTATIC_OFFSET UNITYSDK_OFFSET(0x18681990)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIO_OFFSET UNITYSDK_OFFSET(0x18681AE0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1867DDC0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ENDLISTENIDLESTATELEAVE_OFFSET UNITYSDK_OFFSET(0x1867D370)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_EXECUTERESTARTSEQ_OFFSET UNITYSDK_OFFSET(0x18677D10)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_EXITTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x186776D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAIMCONTAINER_OFFSET UNITYSDK_OFFSET(0x1867AE30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAUTOAIMRESULTINIDENTIFYRECT_OFFSET UNITYSDK_OFFSET(0x18680F70)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETCHECKRANGE_OFFSET UNITYSDK_OFFSET(0x18680020)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETDECALASSET_OFFSET UNITYSDK_OFFSET(0x1866BC80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETINITFOV_OFFSET UNITYSDK_OFFSET(0x186810D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETMANUALLYAIMRESULTINIDENTIFYRECT_OFFSET UNITYSDK_OFFSET(0x18680EF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHDETECTPOS_OFFSET UNITYSDK_OFFSET(0x1867FD90)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAGS_OFFSET UNITYSDK_OFFSET(0x18681710)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAG_OFFSET UNITYSDK_OFFSET(0x186818A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETROAMINGSTYLEFROMGRAPHMODE_OFFSET UNITYSDK_OFFSET(0x1867EFD0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOPATH_OFFSET UNITYSDK_OFFSET(0x18678780)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x18678A80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x186787D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKROAMINGCAMERAXANGLEPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x18679400)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_CACHEDDECALS_OFFSET UNITYSDK_OFFSET(0x186854A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ENABLETRACKMODE_OFFSET UNITYSDK_OFFSET(0x1867B6F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_EXITWHENPREVIEWDIALOGFINISH_OFFSET UNITYSDK_OFFSET(0x18681C30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_FUNCBTNMANAGER_OFFSET UNITYSDK_OFFSET(0x18681BA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INITLOOKATPOS_OFFSET UNITYSDK_OFFSET(0x18681C70)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INPUTMANAGER_OFFSET UNITYSDK_OFFSET(0x18681B80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISINTRIPODMODE_OFFSET UNITYSDK_OFFSET(0x1867D540)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISLOCKUIIDENTIFYHINT_OFFSET UNITYSDK_OFFSET(0x18681BC0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_LEVELGRAPHSTARTENTITYREF_OFFSET UNITYSDK_OFFSET(0x18681BF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_PHOTOGRAPHMODE_OFFSET UNITYSDK_OFFSET(0x18681BE0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_SKIPPHOTOPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x18681C10)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0x1867B700)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1867B720)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEFAKEAVATARPHOTO_OFFSET UNITYSDK_OFFSET(0x1867D550)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEFAKEPLAYERAVATARID_OFFSET UNITYSDK_OFFSET(0x1867D560)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEINITLOOKAT_OFFSET UNITYSDK_OFFSET(0x18681C50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_HASAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0x18665C00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_ISINTUTORIAL_OFFSET UNITYSDK_OFFSET(0x18680DA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_LOCKUIIDENTIFYHINT_OFFSET UNITYSDK_OFFSET(0x186811F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_OVERRIDEIDENTIFYRADIUS_OFFSET UNITYSDK_OFFSET(0x18680FC0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REFRESHPHOTOGRAPHAIMTARGET_OFFSET UNITYSDK_OFFSET(0x1867ED00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVEAIMNPCID_OFFSET UNITYSDK_OFFSET(0x1867FB50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVETAGOBJECT_OFFSET UNITYSDK_OFFSET(0x186815A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_RESTARTTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x18677DF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTEXTRACONFIG_OFFSET UNITYSDK_OFFSET(0x186749E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTTRIPODMODE_OFFSET UNITYSDK_OFFSET(0x1867D060)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SAVEDECALS_OFFSET UNITYSDK_OFFSET(0x1866C080)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITFOV_OFFSET UNITYSDK_OFFSET(0x18681070)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITLOOKATPOS_OFFSET UNITYSDK_OFFSET(0x18681120)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMAXIDENTIFYDISTANCE_OFFSET UNITYSDK_OFFSET(0x18681190)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMODELOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x18681020)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SETTRACKSTANDARDSPEED_OFFSET UNITYSDK_OFFSET(0x18677C30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_EXITWHENPREVIEWDIALOGFINISH_OFFSET UNITYSDK_OFFSET(0x18681C40)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_FUNCBTNMANAGER_OFFSET UNITYSDK_OFFSET(0x18681BB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INITLOOKATPOS_OFFSET UNITYSDK_OFFSET(0x18681C90)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INPUTMANAGER_OFFSET UNITYSDK_OFFSET(0x18681B90)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_ISLOCKUIIDENTIFYHINT_OFFSET UNITYSDK_OFFSET(0x18681BD0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_SKIPPHOTOPREVIEWDIALOG_OFFSET UNITYSDK_OFFSET(0x18681C20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0x1867B710)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOSTAGEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1867B730)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_USEINITLOOKAT_OFFSET UNITYSDK_OFFSET(0x18681C60)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SHOWIDENTIFYAIMRESULTSTATUS_OFFSET UNITYSDK_OFFSET(0x18680E80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTLISTENIDLESTATELEAVE_OFFSET UNITYSDK_OFFSET(0x1867CFA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x18675AB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_SWITCHTRACKPHOTOCAMERACONTROLACTIONOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1867B4A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TAKEPHOTO_OFFSET UNITYSDK_OFFSET(0x18665DC0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TICK_OFFSET UNITYSDK_OFFSET(0x18680120)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMENTITY_OFFSET UNITYSDK_OFFSET(0x1867F1E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMUNION_OFFSET UNITYSDK_OFFSET(0x1867F550)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYOVERRIDEIDENTIFYPANELTIP_OFFSET UNITYSDK_OFFSET(0x18680DF0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYPHOTOGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0x18680D40)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMENTITY_OFFSET UNITYSDK_OFFSET(0x1867F410)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMUNION_OFFSET UNITYSDK_OFFSET(0x1867F5C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYSTARTTRIPODMODE_OFFSET UNITYSDK_OFFSET(0x1867C5E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM_USEFAKEPLAYER_OFFSET UNITYSDK_OFFSET(0x1867B740)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ADDAIMNPCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1867FA30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__APPLYHIDEPET_OFFSET UNITYSDK_OFFSET(0x18674A40)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x186854B0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYINRANGE_OFFSET UNITYSDK_OFFSET(0x1867FF00)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0x18684370)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKISNPCEXTRASCORE_OFFSET UNITYSDK_OFFSET(0x1867A2E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECAMERAPOS_OFFSET UNITYSDK_OFFSET(0x1867BF50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECONFIG_OFFSET UNITYSDK_OFFSET(0x1867BED0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CLEARDECALSCACHE_OFFSET UNITYSDK_OFFSET(0x186851C0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1867D570)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__DISPOSEDECALSCACHE_OFFSET UNITYSDK_OFFSET(0x1867E3E0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__DOAPPLYEXTRACONFIG_OFFSET UNITYSDK_OFFSET(0x18673A60)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ENABLELOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x18684B40)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__EXITIDENTIFY_OFFSET UNITYSDK_OFFSET(0x1867F170)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__FINISHPHOTOGRAPH_OFFSET UNITYSDK_OFFSET(0x186832D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALIDWITHCHECKMAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x186807A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALID_OFFSET UNITYSDK_OFFSET(0x1867E990)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__LISTENIDLESTATELEAVE_OFFSET UNITYSDK_OFFSET(0x1867D430)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOTNONPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x18680840)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOT_OFFSET UNITYSDK_OFFSET(0x18680C90)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONDECALPUZZLECLEAR_OFFSET UNITYSDK_OFFSET(0x18685230)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCCREATED_OFFSET UNITYSDK_OFFSET(0x18684F30)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCDESTROY_OFFSET UNITYSDK_OFFSET(0x18685070)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPHOTOGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0x18683C50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPLAYERDANGERSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x18683CB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONFINISH_OFFSET UNITYSDK_OFFSET(0x18684E70)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONSTART_OFFSET UNITYSDK_OFFSET(0x18684C20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTRACKPHOTOSHOTEND_OFFSET UNITYSDK_OFFSET(0x18679570)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALFINISH_OFFSET UNITYSDK_OFFSET(0x18683E50)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALSTART_OFFSET UNITYSDK_OFFSET(0x18683DB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSETTARGETLOOKAT_OFFSET UNITYSDK_OFFSET(0x186751B0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_1_OFFSET UNITYSDK_OFFSET(0x18674AA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_OFFSET UNITYSDK_OFFSET(0x18674BA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWNPC_OFFSET UNITYSDK_OFFSET(0x18674CC0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHTRIGGERCHARACTERFREESTYLE_OFFSET UNITYSDK_OFFSET(0x186757A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1867DAB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__REMOVEAIMNPCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1867E530)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__SETNPCUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x18674E80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTIDENTIFY_OFFSET UNITYSDK_OFFSET(0x1867F030)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTPHOTOGRAPH_OFFSET UNITYSDK_OFFSET(0x18681CB0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHPHOTOGRAPHMODE_OFFSET UNITYSDK_OFFSET(0x18682620)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHTRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0x186794D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKCACHEDDECALSMOVEDESTROY_OFFSET UNITYSDK_OFFSET(0x18680660)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKIDLESHOW_OFFSET UNITYSDK_OFFSET(0x186805A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKLOOKATCAMERA_OFFSET UNITYSDK_OFFSET(0x186803F0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKTRACKPHOTO_OFFSET UNITYSDK_OFFSET(0x1867AE70)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRIGGERSWITCHCAMERAROAMINGMODEEVENT_OFFSET UNITYSDK_OFFSET(0x186841A0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYREVERTFAKEPLAYER_OFFSET UNITYSDK_OFFSET(0x1867BAE0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYREVERTTRIPODMODEONPHOTOGRAPHEXIT_OFFSET UNITYSDK_OFFSET(0x1867BC20)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYSETPLAYERFORWARDTOCAMERAFORWARD_OFFSET UNITYSDK_OFFSET(0x18683EA0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__UNREGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1867E0D0)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM__UPDATETRACKPHOTOIDENTIFYSTATE_OFFSET UNITYSDK_OFFSET(0x1867A4D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem_TypeDefinitionIndex = 61014;

	class PhotoGraphSystem : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_LeftStickUp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x16E30);
		}
		static ::System::String** StaticGet_LeftStickRight()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x16E38);
		}
		static ::System::String** StaticGet_LeftStickDown()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x16E40);
		}
		static ::System::String** StaticGet_LeftStickLeft()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x16E48);
		}
		static ::System::Int32* StaticGet__TripodCastLayerMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PhotoGraphSystem_TypeDefinitionIndex)->GetStaticField(0x8950);
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
		::System::Collections::Generic::List_1<::System::UInt32>* _TrackPhotoCacheTargets; // 0x10
		::RPG::Client::PhotoGraphModule* _PhotoGraphModuleRef; // 0x18
		::UnityEngine::GameObject* _TripodModeCollider; // 0x20
		::Class_1_E184AC50951905CE* _InputManager_k__BackingField; // 0x28
		::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* _TrackPhotoInstanceConfig; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* _CachedDecalList; // 0x38
		::System::Collections::Generic::List_1<::Class_1_58E5F1B9DB1659B4*>* _TrackPhotoEventTrigger; // 0x40
		::RPG::GameCore::GameWorld* _OwnerGameWorld; // 0x48
		::RPG::Client::PhotoGraphAimContainer* _CurPhotoGraphAimContainer; // 0x50
		::UnityEngine::Coroutine* _DelayShotCoro; // 0x58
		::Class_1_26344DF203E4572F* _PhotoGraphTagNotifyParam; // 0x60
		::Class_1_D50913C0AC7A262A* _FuncBtnManager_k__BackingField; // 0x68
		::RPG::GameCore::GameEntity* _StealTargetEntity; // 0x70
		::RPG::Client::AdventurePhase* _OwnerPhaseRef; // 0x78
		::UnityEngine::GameObject* _TrackPhotoPrevShadowCenterGo; // 0x80
		::RPG::GameCore::StartTrackPhoto* _TrackPhotoConfig; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::TrackPhotoShotParam>* _TrackPhotoShotParams; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* _photoGraphTagDict; // 0x98
		::UnityEngine::GameObject* _DecalPrefabAsset; // 0xA0
		::System::Collections::Generic::List_1<::Class_1_94FB79109AF2A6F5*>* _IdentifyTargetNpcInfo; // 0xA8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _HideProp; // 0xB0
		::UnityEngine::GameObject* _TrackAsset; // 0xB8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::TrackPhotoTrashCanConfigRow*>* _TrashPhotoConfig; // 0xC0
		::RPG::GameCore::TaskContext* _TrackPhotoContext; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_CC76D1702CC17C09_7*>* _TrackPhotoTargetCacheInfo; // 0xD0
		::RPG::GameCore::LevelGraphComponent* _PhotoGraphStartComponent; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _LastTakePhotoTargets; // 0xE0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* _TrackPhotoShotPairs; // 0xE8
		::RPG::Client::ActivityTrackPhotoStageInstance* _TrackPhotoStageInstance_k__BackingField; // 0xF0
		::Cinemachine::CinemachinePathBase* _CinemachinePath; // 0xF8
		::System::Collections::Generic::List_1<::System::UInt32>* _ShotNpcIds; // 0x100
		::Class_3_07C3C4D2990C49EE* _TrackPhotoRestartSeq; // 0x108
		::UnityEngine::GameObject* _TrackGo; // 0x110
		::Class_1_5B17A9E521FAC323* _PhotoGraphAimEntityContainer; // 0x118
		::System::UInt32 _TrackPhotoStageID; // 0x120
		::System::Single _MaxIdentifyDistance; // 0x124
		::System::UInt32 _UseFakeAvatarID; // 0x128
		::UnityEngine::Vector2 _TrackPhotoAimCacheRangeScale; // 0x12C
		::UnityEngine::Quaternion _PlayerOriRot; // 0x134
		::RPG::Client::CameraDataAndFlags_RoamingStyle _CurrentRoamingStyle; // 0x144
		::System::Boolean _InTripodMode; // 0x148
		::System::Boolean _ModeLockPlayerControl; // 0x149
		::System::Boolean _IsTrackPhotoFinished; // 0x14A
		::System::Boolean _IsInTrackPhotoRestart; // 0x14B
		::System::Single _TripodCameraYaw; // 0x14C
		::UnityEngine::Vector3 _TripodCameraPos; // 0x150
		::System::Boolean _IsInIdleShow; // 0x15C
		::System::Boolean _UseInitLookAt_k__BackingField; // 0x15D
		::System::Boolean _IsUseFakeAvatar; // 0x15E
		::System::Boolean _ExitWhenPreViewDialogFinish_k__BackingField; // 0x15F
		::System::Boolean _UseAnchorCameraForward; // 0x160
		::System::Boolean _IsInTutorial; // 0x161
		::System::Boolean _EnableTrackMode; // 0x162
		::System::Boolean _ModeLocked; // 0x163
		::UnityEngine::Vector3 _PlayerOriPos; // 0x164
		::System::Single _InitFov; // 0x170
		::RPG::Client::TrackPhotoIdentifyState _TrackPhotoIdentifyState_k__BackingField; // 0x174
		::RPG::GameCore::PhotoGraphModeType _PhotoGraphMode; // 0x178
		::UnityEngine::Vector3 _InitLookAtPos_k__BackingField; // 0x17C
		::System::Single _IdentifyRadiusOverride; // 0x188
		::System::Int32 _TrackPhotoHandle; // 0x18C
		::System::Boolean _CurPhotoGraphAimContainerDelayRefresh; // 0x190
		::System::Boolean _IsLockUIIdentifyHint_k__BackingField; // 0x191
		::System::Boolean _SkipPhotoPreviewDialog_k__BackingField; // 0x192
		::System::Boolean _CurPhotoGraphAimContainerDelayStart; // 0x193

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void ApplyExtraConfig(::RPG::GameCore::PhotoGraphModeExtraConfigSetting* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_APPLYEXTRACONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void RevertExtraConfig(::RPG::GameCore::PhotoGraphModeExtraConfigSetting* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REVERTEXTRACONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void _ApplyHidePet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__APPLYHIDEPET_OFFSET))(this, a1);
		}

		::System::Void _DoApplyExtraConfig(::RPG::GameCore::PhotoGraphModeExtraConfigSetting* a1, ::RPG::GameCore::TaskContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeExtraConfigSetting*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__DOAPPLYEXTRACONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PhotoGraphTriggerCharacterFreeStyle(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SimpleFreeStyleConfig* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SimpleFreeStyleConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHTRIGGERCHARACTERFREESTYLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PhotoGraphShowEntity(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::TaskContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PhotoGraphShowEntity_1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWENTITY_1_OFFSET))(this, a1, a2);
		}

		::System::Void _PhotoGraphShowNpc(::Il2CppArray<::RPG::GameCore::PhotoGraphFindNpc*>* a1, ::RPG::GameCore::TaskContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PhotoGraphFindNpc*>*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSHOWNPC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _SetNpcUniqueName(::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>* a1, ::RPG::GameCore::TaskContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*>*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__SETNPCUNIQUENAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _PhotoGraphSetTargetLookAt(::RPG::GameCore::TargetEvaluator* a1, ::RPG::GameCore::TaskContext* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__PHOTOGRAPHSETTARGETLOOKAT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartTrackPhoto(::RPG::GameCore::StartTrackPhoto* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StartTrackPhoto*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_STARTTRACKPHOTO_OFFSET))(this, a1, a2);
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

		::System::Void SetTrackStandardSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETTRACKSTANDARDSPEED_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachinePathBase* GetTrackPhotoPath()
		{
			return ((::Cinemachine::CinemachinePathBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOPATH_OFFSET))(this);
		}

		::System::UInt32 GetTrackPhotoTotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALSCORE_OFFSET))(this);
		}

		::System::Void GetTrackPhotoTotalCount(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>*& a1, ::System::UInt32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TrackPhotoCanType, ::System::UInt32>*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKPHOTOTOTALCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Single GetTrackRoamingCameraXAnglePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETTRACKROAMINGCAMERAXANGLEPERCENTAGE_OFFSET))(this);
		}

		::System::Void _SwitchTrackPhotoIdentifyState(::RPG::Client::TrackPhotoIdentifyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackPhotoIdentifyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHTRACKPHOTOIDENTIFYSTATE_OFFSET))(this, a1);
		}

		::System::Void _OnTrackPhotoShotEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTRACKPHOTOSHOTEND_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsNpcExtraScore(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKISNPCEXTRASCORE_OFFSET))(this, a1);
		}

		::System::Void _UpdateTrackPhotoIdentifyState(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__UPDATETRACKPHOTOIDENTIFYSTATE_OFFSET))(this, a1);
		}

		::System::Void _TickTrackPhoto(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKTRACKPHOTO_OFFSET))(this, a1);
		}

		::System::Void SwitchTrackPhotoCameraControlActionOverride(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SWITCHTRACKPHOTOCAMERACONTROLACTIONOVERRIDE_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableTrackMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ENABLETRACKMODE_OFFSET))(this);
		}

		::RPG::Client::TrackPhotoIdentifyState get_TrackPhotoIdentifyState()
		{
			return ((::RPG::Client::TrackPhotoIdentifyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOIDENTIFYSTATE_OFFSET))(this);
		}

		::System::Void set_TrackPhotoIdentifyState(::RPG::Client::TrackPhotoIdentifyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackPhotoIdentifyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOIDENTIFYSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityTrackPhotoStageInstance* get_TrackPhotoStageInstance()
		{
			return ((::RPG::Client::ActivityTrackPhotoStageInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_TRACKPHOTOSTAGEINSTANCE_OFFSET))(this);
		}

		::System::Void set_TrackPhotoStageInstance(::RPG::Client::ActivityTrackPhotoStageInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityTrackPhotoStageInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_TRACKPHOTOSTAGEINSTANCE_OFFSET))(this, a1);
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

		::System::Boolean _CheckTripModeCameraPos(::UnityEngine::RaycastHit& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKTRIPMODECAMERAPOS_OFFSET))(this, a1);
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

		::System::Void _ListenIdleStateLeave(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__LISTENIDLESTATELEAVE_OFFSET))(this, a1);
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

		::System::Void BindPhotoGraphAimContainer(::RPG::Client::PhotoGraphAimContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_BINDPHOTOGRAPHAIMCONTAINER_OFFSET))(this, a1);
		}

		::System::Void RefreshPhotoGraphAimTarget(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REFRESHPHOTOGRAPHAIMTARGET_OFFSET))(this, a1);
		}

		::RPG::Client::CameraDataAndFlags_RoamingStyle GetRoamingStyleFromGraphMode(::RPG::GameCore::PhotoGraphModeType a1)
		{
			return ((::RPG::Client::CameraDataAndFlags_RoamingStyle(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETROAMINGSTYLEFROMGRAPHMODE_OFFSET))(this, a1);
		}

		::System::Void _StartIdentify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTIDENTIFY_OFFSET))(this);
		}

		::System::Void _ExitIdentify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__EXITIDENTIFY_OFFSET))(this);
		}

		::System::Void TryAddAimEntity(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMENTITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TryRemoveAimEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMENTITY_OFFSET))(this, a1);
		}

		::System::Void TryAddAimUnion(::Class_1_2A2B2DC1DA1205FE* a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2A2B2DC1DA1205FE*, ::RPG::GameCore::PhotoGraphAimIdentifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYADDAIMUNION_OFFSET))(this, a1, a2);
		}

		::System::Void TryRemoveAimUnion(::Class_1_2A2B2DC1DA1205FE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2A2B2DC1DA1205FE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYREMOVEAIMUNION_OFFSET))(this, a1);
		}

		::System::Void AddAimNpcID(::System::UInt32 a1, ::RPG::GameCore::PhotoGraphAimIdentifyType a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDAIMNPCID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveAimNpcID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVEAIMNPCID_OFFSET))(this, a1);
		}

		::System::Boolean HasAimEntityInRange(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_HASAIMENTITYINRANGE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPhotoGraphDetectPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHDETECTPOS_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TICK_OFFSET))(this, a1);
		}

		::System::Void TakePhoto(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TAKEPHOTO_OFFSET))(this, a1);
		}

		::System::Void _NotifyShotNonPostProcess(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOTNONPOSTPROCESS_OFFSET))(this, a1);
		}

		::System::Void _NotifyShot(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__NOTIFYSHOT_OFFSET))(this, a1);
		}

		::System::Void TryPhotoGraphExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYPHOTOGRAPHEXIT_OFFSET))(this);
		}

		::System::Boolean IsInTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ISINTUTORIAL_OFFSET))(this);
		}

		::System::Void TryOverrideIdentifyPanelTip(::RPG::Client::TextID a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_TRYOVERRIDEIDENTIFYPANELTIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowIdentifyAimResultStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SHOWIDENTIFYAIMRESULTSTATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* GetManuallyAimResultInIdentifyRect()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETMANUALLYAIMRESULTINIDENTIFYRECT_OFFSET))(this);
		}

		::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* GetAutoAimResultInIdentifyRect()
		{
			return ((::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETAUTOAIMRESULTINIDENTIFYRECT_OFFSET))(this);
		}

		::System::Void OverrideIdentifyRadius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_OVERRIDEIDENTIFYRADIUS_OFFSET))(this, a1);
		}

		::System::Void SetModeLockPlayerControl(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMODELOCKPLAYERCONTROL_OFFSET))(this, a1);
		}

		::System::Void SetInitFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITFOV_OFFSET))(this, a1);
		}

		::System::Single GetInitFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETINITFOV_OFFSET))(this);
		}

		::System::Void SetInitLookAtPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETINITLOOKATPOS_OFFSET))(this, a1);
		}

		::System::Void SetMaxIdentifyDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SETMAXIDENTIFYDISTANCE_OFFSET))(this, a1);
		}

		::System::Void LockUIIdentifyHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_LOCKUIIDENTIFYHINT_OFFSET))(this);
		}

		::System::Void AddTagObject(::RPG::Client::PhotoGraphTag a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphTag, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_ADDTAGOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveTagObject(::RPG::Client::PhotoGraphTag a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphTag, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_REMOVETAGOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetPhotoGraphObjectsByTags(::Il2CppArray<::RPG::Client::PhotoGraphTag>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Il2CppArray<::RPG::Client::PhotoGraphTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetPhotoGraphObjectsByTag(::RPG::Client::PhotoGraphTag a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::RPG::Client::PhotoGraphTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETPHOTOGRAPHOBJECTSBYTAG_OFFSET))(this, a1);
		}

		static ::System::Boolean CheckTargetInRectRatioStatic(::UnityEngine::Vector3 a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIOSTATIC_OFFSET))(a1, a2, a3);
		}

		::System::Boolean CheckTargetInRectRatio(::UnityEngine::Vector3 a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_CHECKTARGETINRECTRATIO_OFFSET))(this, a1, a2, a3);
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

		::System::Void set_InputManager(::Class_1_E184AC50951905CE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E184AC50951905CE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INPUTMANAGER_OFFSET))(this, a1);
		}

		::Class_1_D50913C0AC7A262A* get_FuncBtnManager()
		{
			return ((::Class_1_D50913C0AC7A262A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_FUNCBTNMANAGER_OFFSET))(this);
		}

		::System::Void set_FuncBtnManager(::Class_1_D50913C0AC7A262A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D50913C0AC7A262A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_FUNCBTNMANAGER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLockUIIdentifyHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_ISLOCKUIIDENTIFYHINT_OFFSET))(this);
		}

		::System::Void set_IsLockUIIdentifyHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_ISLOCKUIIDENTIFYHINT_OFFSET))(this, a1);
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

		::System::Void set_SkipPhotoPreviewDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_SKIPPHOTOPREVIEWDIALOG_OFFSET))(this, a1);
		}

		::System::Boolean get_ExitWhenPreViewDialogFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_EXITWHENPREVIEWDIALOGFINISH_OFFSET))(this);
		}

		::System::Void set_ExitWhenPreViewDialogFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_EXITWHENPREVIEWDIALOGFINISH_OFFSET))(this, a1);
		}

		::System::Boolean get_UseInitLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_USEINITLOOKAT_OFFSET))(this);
		}

		::System::Void set_UseInitLookAt(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_USEINITLOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_InitLookAtPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_INITLOOKATPOS_OFFSET))(this);
		}

		::System::Void set_InitLookAtPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SET_INITLOOKATPOS_OFFSET))(this, a1);
		}

		::System::Void _RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _UnRegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__UNREGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _StartPhotoGraph(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__STARTPHOTOGRAPH_OFFSET))(this, a1);
		}

		::System::Void _FinishPhotoGraph(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__FINISHPHOTOGRAPH_OFFSET))(this, a1);
		}

		::System::Void _OnPhotoGraphExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPHOTOGRAPHEXIT_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerDangerStatusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONPLAYERDANGERSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTutorialStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALSTART_OFFSET))(this, a1);
		}

		::System::Void _OnTutorialFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONTUTORIALFINISH_OFFSET))(this, a1);
		}

		::System::Void _TrySetPlayerForwardToCameraForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TRYSETPLAYERFORWARDTOCAMERAFORWARD_OFFSET))(this);
		}

		::System::Void _SwitchPhotoGraphMode(::RPG::GameCore::PhotoGraphModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__SWITCHPHOTOGRAPHMODE_OFFSET))(this, a1);
		}

		::System::Void _TriggerSwitchCameraRoamingModeEvent(::RPG::Client::CameraDataAndFlags_RoamingStyle a1, ::RPG::Client::CameraDataAndFlags_RoamingStyle a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_RoamingStyle, ::RPG::Client::CameraDataAndFlags_RoamingStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TRIGGERSWITCHCAMERAROAMINGMODEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* _GetAimEntityInfoValidWithCheckMaxDistance(::System::Boolean& a1)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALIDWITHCHECKMAXDISTANCE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>* _GetAimEntityInfoValid()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_A27BF87A78CEBB28*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__GETAIMENTITYINFOVALID_OFFSET))(this);
		}

		::System::Single GetCheckRange(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GETCHECKRANGE_OFFSET))(this, a1);
		}

		::System::Boolean _CheckAimEntityInRange(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYINRANGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckAimEntityVisible(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__CHECKAIMENTITYVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _TickLookAtCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKLOOKATCAMERA_OFFSET))(this);
		}

		::System::Void _EnableLookAtCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ENABLELOOKATCAMERA_OFFSET))(this, a1);
		}

		::System::Void _TickIdleShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__TICKIDLESHOW_OFFSET))(this);
		}

		::System::Void _OnStealActionStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONSTART_OFFSET))(this, a1);
		}

		::System::Void _OnStealActionFinish(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONSTEALACTIONFINISH_OFFSET))(this, a1);
		}

		::System::Void _OnNpcCreated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCCREATED_OFFSET))(this, a1);
		}

		::System::Void _OnNpcDestroy(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONNPCDESTROY_OFFSET))(this, a1);
		}

		::System::Void _AddAimNpcNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ADDAIMNPCNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveAimNpcNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__REMOVEAIMNPCNOTIFY_OFFSET))(this);
		}

		::System::Void SaveDecals(::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_SAVEDECALS_OFFSET))(this, a1);
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

		::System::Void _OnDecalPuzzleClear(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM__ONDECALPUZZLECLEAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>* get_CachedDecals()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FreeDecal*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM_GET_CACHEDDECALS_OFFSET))(this);
		}
	};
}
