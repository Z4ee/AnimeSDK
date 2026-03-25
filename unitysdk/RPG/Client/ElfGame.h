#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_610;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class ElfEnterNextDayHint; }
namespace RPG::Client { class ElfFacilityDataItem; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfHintToastManager; }
namespace RPG::Client { class ElfPrepareModelManager; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class ElfEntranceObjects; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ELFGAME_DISABLEENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0x95B3FF0)
#define RPG_CLIENT_ELFGAME_DISABLEPREPARETIONCAMERA_OFFSET UNITYSDK_OFFSET(0x95B3CE0)
#define RPG_CLIENT_ELFGAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95AF390)
#define RPG_CLIENT_ELFGAME_ENABLEENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0x95B3920)
#define RPG_CLIENT_ELFGAME_ENABLEPREPARETIONCAMERA_OFFSET UNITYSDK_OFFSET(0x95B45D0)
#define RPG_CLIENT_ELFGAME_ENTERNEXTDAY_OFFSET UNITYSDK_OFFSET(0x95B4DB0)
#define RPG_CLIENT_ELFGAME_GETHINTTEXTIDS_OFFSET UNITYSDK_OFFSET(0x95B4D60)
#define RPG_CLIENT_ELFGAME_GET_CAMERAGO_OFFSET UNITYSDK_OFFSET(0x95B3220)
#define RPG_CLIENT_ELFGAME_GET__ENTRANCECAMERA_OFFSET UNITYSDK_OFFSET(0x95B3530)
#define RPG_CLIENT_ELFGAME_GET__ENTRANCECONFIG_OFFSET UNITYSDK_OFFSET(0x95B5FB0)
#define RPG_CLIENT_ELFGAME_HANDLERECONNECT_OFFSET UNITYSDK_OFFSET(0x95B1C50)
#define RPG_CLIENT_ELFGAME_IMMEDIATECLEAR_OFFSET UNITYSDK_OFFSET(0x95B1BC0)
#define RPG_CLIENT_ELFGAME_PREPAREEXITELFUI_OFFSET UNITYSDK_OFFSET(0x95B0280)
#define RPG_CLIENT_ELFGAME_PREPARESHOWELFUIAFTERFINISHMISSION_OFFSET UNITYSDK_OFFSET(0x95AFC00)
#define RPG_CLIENT_ELFGAME_PREPARESHOWELFUI_OFFSET UNITYSDK_OFFSET(0x95AF420)
#define RPG_CLIENT_ELFGAME_RESET_OFFSET UNITYSDK_OFFSET(0x95AF3D0)
#define RPG_CLIENT_ELFGAME_SETTLEMANAGERESTAURANT_OFFSET UNITYSDK_OFFSET(0x95B4C50)
#define RPG_CLIENT_ELFGAME_STARTMANAGERRESTAURANT_OFFSET UNITYSDK_OFFSET(0x95B3160)
#define RPG_CLIENT_ELFGAME_TRYLEAVEENVAFTERMANAGE_OFFSET UNITYSDK_OFFSET(0x95B4D00)
#define RPG_CLIENT_ELFGAME_TRYRECYCLE_OFFSET UNITYSDK_OFFSET(0x95B5A20)
#define RPG_CLIENT_ELFGAME_TRYSHOWNEXTDAYHINT_OFFSET UNITYSDK_OFFSET(0x95B5010)
#define RPG_CLIENT_ELFGAME_TRYUPDATEENTRANCEELFS_OFFSET UNITYSDK_OFFSET(0x95B57E0)
#define RPG_CLIENT_ELFGAME_UNLOADANDDISABLECAMERA_OFFSET UNITYSDK_OFFSET(0x95B0B80)
#define RPG_CLIENT_ELFGAME_UNLOCKORUPGRADEFACILITY_OFFSET UNITYSDK_OFFSET(0x95B5840)
#define RPG_CLIENT_ELFGAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x95B6260)
#define RPG_CLIENT_ELFGAME__CLEARONRECONNECT_OFFSET UNITYSDK_OFFSET(0x95B0AE0)
#define RPG_CLIENT_ELFGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x95B6070)
#define RPG_CLIENT_ELFGAME__DISABLEELFLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x95B1640)
#define RPG_CLIENT_ELFGAME__DISABLEELFSTREAMING_OFFSET UNITYSDK_OFFSET(0x95B0C60)
#define RPG_CLIENT_ELFGAME__DISABLERECONNECT_OFFSET UNITYSDK_OFFSET(0x95B0840)
#define RPG_CLIENT_ELFGAME__ENABLEELFSTREAMING_OFFSET UNITYSDK_OFFSET(0x95B1CA0)
#define RPG_CLIENT_ELFGAME__ENABLERECONNECT_OFFSET UNITYSDK_OFFSET(0x95B0910)
#define RPG_CLIENT_ELFGAME__ENABLERESTAURANTLITTLEGAME_OFFSET UNITYSDK_OFFSET(0x95B26F0)
#define RPG_CLIENT_ELFGAME__GETRANDOMNUMBERS_OFFSET UNITYSDK_OFFSET(0x95B51F0)
#define RPG_CLIENT_ELFGAME__HIDEAUDIENCE_OFFSET UNITYSDK_OFFSET(0x95B0A60)
#define RPG_CLIENT_ELFGAME__HIDELOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x95B2E30)
#define RPG_CLIENT_ELFGAME__HIDEPETS_OFFSET UNITYSDK_OFFSET(0x95B2CF0)
#define RPG_CLIENT_ELFGAME__HIDETRANSITION_OFFSET UNITYSDK_OFFSET(0x95B3000)
#define RPG_CLIENT_ELFGAME__LOADENTRANCEELFS_OFFSET UNITYSDK_OFFSET(0x95B5400)
#define RPG_CLIENT_ELFGAME__LOCKELFFARMGROUP_OFFSET UNITYSDK_OFFSET(0x95B2520)
#define RPG_CLIENT_ELFGAME__LOCKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x95B2AB0)
#define RPG_CLIENT_ELFGAME__LOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x95B2C10)
#define RPG_CLIENT_ELFGAME__ONSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x95B5EE0)
#define RPG_CLIENT_ELFGAME__PAUSETOASTQUEUE_OFFSET UNITYSDK_OFFSET(0x95AF9F0)
#define RPG_CLIENT_ELFGAME__PREPARESHOWELFUI_B__2_0_OFFSET UNITYSDK_OFFSET(0x95B6270)
#define RPG_CLIENT_ELFGAME__RESOLVEWAITINGSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x95B1B00)
#define RPG_CLIENT_ELFGAME__RESUMETOASTQUEUE_OFFSET UNITYSDK_OFFSET(0x95B3070)
#define RPG_CLIENT_ELFGAME__SHOWAUDIENCE_OFFSET UNITYSDK_OFFSET(0x95B09E0)
#define RPG_CLIENT_ELFGAME__SHOWLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x95B1470)
#define RPG_CLIENT_ELFGAME__SHOWPETS_OFFSET UNITYSDK_OFFSET(0x95B1330)
#define RPG_CLIENT_ELFGAME__SHOWTRANSITION_OFFSET UNITYSDK_OFFSET(0x95AFAE0)
#define RPG_CLIENT_ELFGAME__SYNCCLIENTSTATUSTOSERVER_OFFSET UNITYSDK_OFFSET(0x95B5C50)
#define RPG_CLIENT_ELFGAME__TRYAPPLYBLEND_OFFSET UNITYSDK_OFFSET(0x95B42A0)
#define RPG_CLIENT_ELFGAME__UNLOADENTRANCEELFS_OFFSET UNITYSDK_OFFSET(0x95B1170)
#define RPG_CLIENT_ELFGAME__UNLOCKELFFARMGROUP_OFFSET UNITYSDK_OFFSET(0x95B17D0)
#define RPG_CLIENT_ELFGAME__UNLOCKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x95B19A0)
#define RPG_CLIENT_ELFGAME__UNLOCKPLAYERCONTROL_OFFSET UNITYSDK_OFFSET(0x95B16F0)
#define RPG_CLIENT_ELFGAME__UPDATECURRENTPREPARETIONCAMERA_OFFSET UNITYSDK_OFFSET(0x95B3650)
#define RPG_CLIENT_ELFGAME__WAITSUBMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x95B5D00)
#define RPG_CLIENT_ELFGAME___WAITSUBMISSIONFINISH_B__60_0_OFFSET UNITYSDK_OFFSET(0x95B6280)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfGame_TypeDefinitionIndex = 51737;

	class ElfGame : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_FarmGroupID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ElfGame_TypeDefinitionIndex)->GetStaticField(0x12570);
		}
		// static const ::System::String* _RestaurantStreamingSourceName; // 0x0
		// static const ::System::String* _EntranceStreamingSourceName; // 0x0
		// static const ::System::String* _ElfAddLightFCVName; // 0x0
		// static const ::System::String* _RegionStateFCVName; // 0x0
		// static const ::System::String* _VolumeFilterName; // 0x0
		// static const ::System::String* _ElfConfigPath; // 0x0
		// static const ::System::String* _ElfHoyoTag; // 0x0
		::UnityEngine::GameObject* _CameraPrefab; // 0x10
		::UnityEngine::GameObject* _CameraGO; // 0x18
		::RPG::Client::ElfHintToastManager* HintToastManager; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ProgressIDToElfGroupMap; // 0x28
		::Cinemachine::CinemachineVirtualCamera* _PreparetionCamera; // 0x30
		::RPG::Client::Promises::Promise* _WaitingSubMissionFinish; // 0x38
		::RPG::Client::ElfPrepareModelManager* PrepareModelManager; // 0x40
		::Cinemachine::CinemachineVirtualCamera* _CurrentCamera; // 0x48
		::RPG::Client::MonoEffect* _FacilitySelectEffect; // 0x50
		::Class_0_16E4307DCC419505_610* _EnterNextDayEvaluator; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EntranceElfs; // 0x60
		::System::UInt32 _WaitingSubMissionID; // 0x68
		::UnityEngine::Vector3 _RestaurantStreamingSourcePos; // 0x6C
		::System::Int32 _ElfEnvCount; // 0x78
		::System::UInt32 _ActivedElfGroupID; // 0x7C
		::UnityEngine::Vector3 _EntranceStreamingSourcePos; // 0x80
		::System::Boolean _AutoLeaveEnvAfterManage; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_DISPOSE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_RESET_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareShowElfUI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_PREPARESHOWELFUI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareShowElfUIAfterFinishMission(::System::Action* onTransitionStart, ::System::UInt32 requireFinishSubMission)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_PREPARESHOWELFUIAFTERFINISHMISSION_OFFSET))(this, onTransitionStart, requireFinishSubMission);
		}

		::RPG::Client::Promises::IPromise* PrepareExitElfUI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_PREPAREEXITELFUI_OFFSET))(this);
		}

		::System::Void _DisableReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__DISABLERECONNECT_OFFSET))(this);
		}

		::System::Void _EnableReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__ENABLERECONNECT_OFFSET))(this);
		}

		::System::Void _ShowAudience()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__SHOWAUDIENCE_OFFSET))(this);
		}

		::System::Void _HideAudience()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__HIDEAUDIENCE_OFFSET))(this);
		}

		::System::Void _ClearOnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__CLEARONRECONNECT_OFFSET))(this);
		}

		::System::Void ImmediateClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_IMMEDIATECLEAR_OFFSET))(this);
		}

		::System::Void HandleReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_HANDLERECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnableElfStreaming()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__ENABLEELFSTREAMING_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _DisableElfStreaming()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__DISABLEELFSTREAMING_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _LockElfFarmGroup()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__LOCKELFFARMGROUP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _UnLockElfFarmGroup()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__UNLOCKELFFARMGROUP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _EnableRestaurantLittleGame()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__ENABLERESTAURANTLITTLEGAME_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _DisableElfLittleGame()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__DISABLEELFLITTLEGAME_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _LockPerformance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__LOCKPERFORMANCE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _UnLockPerformance()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__UNLOCKPERFORMANCE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _LockPlayerControl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__LOCKPLAYERCONTROL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _UnlockPlayerControl()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__UNLOCKPLAYERCONTROL_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HidePets()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__HIDEPETS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowPets()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__SHOWPETS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HideLocalPlayer()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__HIDELOCALPLAYER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowLocalPlayer()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__SHOWLOCALPLAYER_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowTransition()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__SHOWTRANSITION_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HideTransition()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__HIDETRANSITION_OFFSET))(this);
		}

		::System::Void _PauseToastQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__PAUSETOASTQUEUE_OFFSET))(this);
		}

		::System::Void _ResumeToastQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__RESUMETOASTQUEUE_OFFSET))(this);
		}

		::System::Void StartManagerRestaurant(::System::Boolean clearOnFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_STARTMANAGERRESTAURANT_OFFSET))(this, clearOnFinish);
		}

		::UnityEngine::GameObject* get_CameraGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_GET_CAMERAGO_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCamera* get__EntranceCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_GET__ENTRANCECAMERA_OFFSET))(this);
		}

		::System::Void _UpdateCurrentPreparetionCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__UPDATECURRENTPREPARETIONCAMERA_OFFSET))(this);
		}

		::System::Void EnableEntranceCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_ENABLEENTRANCECAMERA_OFFSET))(this);
		}

		::System::Void DisableEntranceCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_DISABLEENTRANCECAMERA_OFFSET))(this);
		}

		::System::Void _TryApplyBlend(::System::String* configPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__TRYAPPLYBLEND_OFFSET))(this, configPath);
		}

		::System::Void EnablePreparetionCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_ENABLEPREPARETIONCAMERA_OFFSET))(this);
		}

		::System::Void DisablePreparetionCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_DISABLEPREPARETIONCAMERA_OFFSET))(this);
		}

		::System::Void UnLoadAndDisableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_UNLOADANDDISABLECAMERA_OFFSET))(this);
		}

		::System::Void SettleManageRestaurant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_SETTLEMANAGERESTAURANT_OFFSET))(this);
		}

		::System::Boolean TryLeaveEnvAfterManage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_TRYLEAVEENVAFTERMANAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfEnterNextDayHint*>* GetHintTextIDs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfEnterNextDayHint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_GETHINTTEXTIDS_OFFSET))(this);
		}

		::System::Void EnterNextDay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_ENTERNEXTDAY_OFFSET))(this);
		}

		::System::Void TryShowNextDayHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_TRYSHOWNEXTDAYHINT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _GetRandomNumbers(::System::Int32 newListLength, ::System::Int32 oldListLength)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__GETRANDOMNUMBERS_OFFSET))(this, newListLength, oldListLength);
		}

		::System::Void _LoadEntranceElfs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__LOADENTRANCEELFS_OFFSET))(this);
		}

		::System::Void _UnloadEntranceElfs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__UNLOADENTRANCEELFS_OFFSET))(this);
		}

		::System::Void TryUpdateEntranceElfs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_TRYUPDATEENTRANCEELFS_OFFSET))(this);
		}

		::System::Void UnlockOrUpgradeFacility(::RPG::Client::ElfFacilityDataItem* facility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFacilityDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_UNLOCKORUPGRADEFACILITY_OFFSET))(this, facility);
		}

		::System::Void TryRecycle(::RPG::Client::ElfFarmFieldData* field)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmFieldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_TRYRECYCLE_OFFSET))(this, field);
		}

		::System::Void _SyncClientStatusToServer(::System::Boolean isEnter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__SYNCCLIENTSTATUSTOSERVER_OFFSET))(this, isEnter);
		}

		::RPG::Client::Promises::IPromise* _WaitSubMissionFinish(::System::UInt32 subMissionID)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__WAITSUBMISSIONFINISH_OFFSET))(this, subMissionID);
		}

		::System::Void _OnSubMissionFinish(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__ONSUBMISSIONFINISH_OFFSET))(this, o);
		}

		::System::Void _ResolveWaitingSubMissionFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__RESOLVEWAITINGSUBMISSIONFINISH_OFFSET))(this);
		}

		::RPG::GameCore::ElfEntranceObjects* get__EntranceConfig()
		{
			return ((::RPG::GameCore::ElfEntranceObjects*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME_GET__ENTRANCECONFIG_OFFSET))(this);
		}

		::System::Void _PrepareShowElfUI_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME__PREPARESHOWELFUI_B__2_0_OFFSET))(this);
		}

		::System::Void __WaitSubMissionFinish_b__60_0(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFGAME___WAITSUBMISSIONFINISH_B__60_0_OFFSET))(this, subMissionData);
		}
	};
}
