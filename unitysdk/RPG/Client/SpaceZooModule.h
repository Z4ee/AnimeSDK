#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/SpaceZooQuestType.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::Client { class SpaceZooData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xC8E8DA0)
#define RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDTABINDEX_OFFSET UNITYSDK_OFFSET(0xC8F2A80)
#define RPG_CLIENT_SPACEZOOMODULE_GETNEWCATS_OFFSET UNITYSDK_OFFSET(0xC8F2D10)
#define RPG_CLIENT_SPACEZOOMODULE_GETNEWSPECIALCATS_OFFSET UNITYSDK_OFFSET(0xC8F3090)
#define RPG_CLIENT_SPACEZOOMODULE_GETSPACEZOOINFO_OFFSET UNITYSDK_OFFSET(0xC8F2970)
#define RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMCOST_OFFSET UNITYSDK_OFFSET(0xC8F3C50)
#define RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMID_OFFSET UNITYSDK_OFFSET(0xC8F3C30)
#define RPG_CLIENT_SPACEZOOMODULE_GET_ISRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0xC8F3D90)
#define RPG_CLIENT_SPACEZOOMODULE_GET_ISSPECIALEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0xC8F3C70)
#define RPG_CLIENT_SPACEZOOMODULE_GET_SPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xC8F3C10)
#define RPG_CLIENT_SPACEZOOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC8EFBF0)
#define RPG_CLIENT_SPACEZOOMODULE_ISSPACEZOOGOTOEVERYDATACTIVE_OFFSET UNITYSDK_OFFSET(0xC8E9330)
#define RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC8F25B0)
#define RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC8F2790)
#define RPG_CLIENT_SPACEZOOMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xC8F23D0)
#define RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMCOST_OFFSET UNITYSDK_OFFSET(0xC8F3C60)
#define RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMID_OFFSET UNITYSDK_OFFSET(0xC8F3C40)
#define RPG_CLIENT_SPACEZOOMODULE_SET_SPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xC8F3C20)
#define RPG_CLIENT_SPACEZOOMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8F02C0)
#define RPG_CLIENT_SPACEZOOMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8EFDB0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOBORNSCRSP_OFFSET UNITYSDK_OFFSET(0xC8F04E0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODATASCRSP_OFFSET UNITYSDK_OFFSET(0xC8F0420)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODELETECATSCRSP_OFFSET UNITYSDK_OFFSET(0xC8F0F50)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOEXCHANGEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xC8F10A0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOMUTATESCRSP_OFFSET UNITYSDK_OFFSET(0xC8F0C80)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOOPCATTERYSCRSP_OFFSET UNITYSDK_OFFSET(0xC8F0EC0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOTAKESCRSP_OFFSET UNITYSDK_OFFSET(0xC8F1100)
#define RPG_CLIENT_SPACEZOOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC8EFA50)
#define RPG_CLIENT_SPACEZOOMODULE__INITFUNCTIONUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xC8F3410)
#define RPG_CLIENT_SPACEZOOMODULE__INITMATERIALUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xC8F3600)
#define RPG_CLIENT_SPACEZOOMODULE__INITPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xC8F3920)
#define RPG_CLIENT_SPACEZOOMODULE__INITPHASESUBMISSION_OFFSET UNITYSDK_OFFSET(0xC8F39E0)
#define RPG_CLIENT_SPACEZOOMODULE__INITSPACEZOOSPECIALEVENTTIPMISSION_OFFSET UNITYSDK_OFFSET(0xC8F3780)
#define RPG_CLIENT_SPACEZOOMODULE__INITUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xC8EFD40)
#define RPG_CLIENT_SPACEZOOMODULE__ISCATNEEDHINT_OFFSET UNITYSDK_OFFSET(0xC8F1DD0)
#define RPG_CLIENT_SPACEZOOMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xC8F1E90)
#define RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC8F3B50)
#define RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xC8F3BB0)
#define RPG_CLIENT_SPACEZOOMODULE__ONSPACEZOOCATUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xC8F1370)
#define RPG_CLIENT_SPACEZOOMODULE__ONTRYNOTIFYNEWCATHINT_OFFSET UNITYSDK_OFFSET(0xC8F22A0)
#define RPG_CLIENT_SPACEZOOMODULE__REFRESHUNLOCKFEATUREPREF_OFFSET UNITYSDK_OFFSET(0xC8F0970)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC8F3EB0)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8F3F90)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC8F3F30)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooModule_TypeDefinitionIndex = 63594;

	class SpaceZooModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _MUTATE_ITEM_KEY; // 0x0
		// static const ::System::String* _SPECIAL_EVENT_UNLOCK_KEY; // 0x0
		// static const ::System::String* _RAID_UNLOCK_KEY; // 0x0
		// static const ::System::String* _PHASE_SUBMISSION_LIST_KEY; // 0x0
		// static const ::System::String* _FINIAL_MISSION_KEY; // 0x0
		::RPG::Client::Promises::Promise* _GetSpaceZooInfoPromise; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSubMissionIDs; // 0x18
		::RPG::Client::SpaceZooData* _SpaceZooData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotRewardList; // 0x28
		::RPG::Client::Promises::Promise* _UnlockMissionDataPromise; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewSpecialCats; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockMissionIDs; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* _WaitHintCats; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewCats; // 0x50
		::RPG::Client::Promises::Promise* _UnlockSubMissionDataPromise; // 0x58
		::System::UInt32 _BreedItemCost_k__BackingField; // 0x60
		::System::UInt32 _SpecialEventUnlockSubMissionID; // 0x64
		::System::UInt32 _SpaceZooFinishMissionID; // 0x68
		::System::UInt32 _BreedItemID_k__BackingField; // 0x6C
		::System::UInt32 _RaidUnlockMissionID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdSpaceZooDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSpaceZooBornScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOBORNSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSpaceZooMutateScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOMUTATESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSpaceZooOpCatteryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOOPCATTERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSpaceZooDeleteCatScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODELETECATSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSpaceZooExchangeItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOEXCHANGEITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdSpaceZooTakeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOTAKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSpaceZooCatUpdateNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONSPACEZOOCATUPDATENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnTryNotifyNewCatHint(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONTRYNOTIFYNEWCATHINT_OFFSET))(this, a1);
		}

		::System::Boolean _IsCatNeedHint(::RPG::Client::SpaceZooCatData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ISCATNEEDHINT_OFFSET))(this, a1);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockSubMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKSUBMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GetSpaceZooInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETSPACEZOOINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailActivityRewardTabIndex()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDTABINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailActivityRewardQuestIDList(::RPG::GameCore::SpaceZooQuestType a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::SpaceZooQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDQUESTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewCats()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETNEWCATS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewSpecialCats()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETNEWSPECIALCATS_OFFSET))(this);
		}

		::System::Boolean IsSpaceZooGoToEveryDatActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_ISSPACEZOOGOTOEVERYDATACTIVE_OFFSET))(this);
		}

		::System::Void _InitUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitFunctionUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITFUNCTIONUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitPhaseSubMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITPHASESUBMISSION_OFFSET))(this);
		}

		::System::Void _InitMaterialUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITMATERIALUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitSpaceZooSpecialEventTipMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITSPACEZOOSPECIALEVENTTIPMISSION_OFFSET))(this);
		}

		::System::Void _InitPhaseMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITPHASEMISSION_OFFSET))(this);
		}

		::System::Void _OnReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _OnReceiveUnlockSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKSUBMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockFeaturePref(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__REFRESHUNLOCKFEATUREPREF_OFFSET))(this, a1);
		}

		::RPG::Client::SpaceZooData* get_SpaceZooData()
		{
			return ((::RPG::Client::SpaceZooData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_SPACEZOODATA_OFFSET))(this);
		}

		::System::Void set_SpaceZooData(::RPG::Client::SpaceZooData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_SPACEZOODATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_BreedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMID_OFFSET))(this);
		}

		::System::Void set_BreedItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BreedItemCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMCOST_OFFSET))(this);
		}

		::System::Void set_BreedItemCost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMCOST_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSpecialEventUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_ISSPECIALEVENTUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsRaidUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_ISRAIDUNLOCK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
