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

#define RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0xA4AC3A0)
#define RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDTABINDEX_OFFSET UNITYSDK_OFFSET(0xA4ABE00)
#define RPG_CLIENT_SPACEZOOMODULE_GETNEWCATS_OFFSET UNITYSDK_OFFSET(0xA4AC950)
#define RPG_CLIENT_SPACEZOOMODULE_GETNEWSPECIALCATS_OFFSET UNITYSDK_OFFSET(0xA4ACCB0)
#define RPG_CLIENT_SPACEZOOMODULE_GETSPACEZOOINFO_OFFSET UNITYSDK_OFFSET(0xA4ABCF0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMCOST_OFFSET UNITYSDK_OFFSET(0xA4ADCA0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMID_OFFSET UNITYSDK_OFFSET(0xA4ADC80)
#define RPG_CLIENT_SPACEZOOMODULE_GET_ISRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4ADDD0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_ISSPECIALEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0xA4ADCC0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_SPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xA4ADC60)
#define RPG_CLIENT_SPACEZOOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA4A95C0)
#define RPG_CLIENT_SPACEZOOMODULE_ISSPACEZOOGOTOEVERYDATACTIVE_OFFSET UNITYSDK_OFFSET(0xA4AD010)
#define RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA4AB950)
#define RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA4ABB20)
#define RPG_CLIENT_SPACEZOOMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xA4AB770)
#define RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMCOST_OFFSET UNITYSDK_OFFSET(0xA4ADCB0)
#define RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMID_OFFSET UNITYSDK_OFFSET(0xA4ADC90)
#define RPG_CLIENT_SPACEZOOMODULE_SET_SPACEZOODATA_OFFSET UNITYSDK_OFFSET(0xA4ADC70)
#define RPG_CLIENT_SPACEZOOMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4A9970)
#define RPG_CLIENT_SPACEZOOMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4A9780)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOBORNSCRSP_OFFSET UNITYSDK_OFFSET(0xA4A9B50)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODATASCRSP_OFFSET UNITYSDK_OFFSET(0xA4A9A90)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODELETECATSCRSP_OFFSET UNITYSDK_OFFSET(0xA4AA430)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOEXCHANGEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA4AA580)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOMUTATESCRSP_OFFSET UNITYSDK_OFFSET(0xA4AA1F0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOOPCATTERYSCRSP_OFFSET UNITYSDK_OFFSET(0xA4AA3A0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOTAKESCRSP_OFFSET UNITYSDK_OFFSET(0xA4AA5E0)
#define RPG_CLIENT_SPACEZOOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A9420)
#define RPG_CLIENT_SPACEZOOMODULE__INITFUNCTIONUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xA4AD4F0)
#define RPG_CLIENT_SPACEZOOMODULE__INITMATERIALUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xA4AD6E0)
#define RPG_CLIENT_SPACEZOOMODULE__INITPHASEMISSION_OFFSET UNITYSDK_OFFSET(0xA4AD980)
#define RPG_CLIENT_SPACEZOOMODULE__INITPHASESUBMISSION_OFFSET UNITYSDK_OFFSET(0xA4ADA20)
#define RPG_CLIENT_SPACEZOOMODULE__INITSPACEZOOSPECIALEVENTTIPMISSION_OFFSET UNITYSDK_OFFSET(0xA4AD820)
#define RPG_CLIENT_SPACEZOOMODULE__INITUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xA4A9710)
#define RPG_CLIENT_SPACEZOOMODULE__ISCATNEEDHINT_OFFSET UNITYSDK_OFFSET(0xA4AB1E0)
#define RPG_CLIENT_SPACEZOOMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA4AB2A0)
#define RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA4ADBA0)
#define RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xA4ADC00)
#define RPG_CLIENT_SPACEZOOMODULE__ONSPACEZOOCATUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xA4AA7A0)
#define RPG_CLIENT_SPACEZOOMODULE__ONTRYNOTIFYNEWCATHINT_OFFSET UNITYSDK_OFFSET(0xA4AB650)
#define RPG_CLIENT_SPACEZOOMODULE__REFRESHUNLOCKFEATUREPREF_OFFSET UNITYSDK_OFFSET(0xA4A9F70)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA4ADF20)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4AE010)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA4ADFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooModule_TypeDefinitionIndex = 55468;

	class SpaceZooModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _MUTATE_ITEM_KEY; // 0x0
		// static const ::System::String* _SPECIAL_EVENT_UNLOCK_KEY; // 0x0
		// static const ::System::String* _RAID_UNLOCK_KEY; // 0x0
		// static const ::System::String* _PHASE_SUBMISSION_LIST_KEY; // 0x0
		// static const ::System::String* _FINIAL_MISSION_KEY; // 0x0
		::RPG::Client::Promises::Promise* _UnlockMissionDataPromise; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewCats; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* _WaitHintCats; // 0x20
		::RPG::Client::Promises::Promise* _GetSpaceZooInfoPromise; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewSpecialCats; // 0x30
		::RPG::Client::Promises::Promise* _UnlockSubMissionDataPromise; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockMissionIDs; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSubMissionIDs; // 0x48
		::RPG::Client::SpaceZooData* _SpaceZooData_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotRewardList; // 0x58
		::System::UInt32 _RaidUnlockMissionID; // 0x60
		::System::UInt32 _BreedItemCost_k__BackingField; // 0x64
		::System::UInt32 _SpecialEventUnlockSubMissionID; // 0x68
		::System::UInt32 _SpaceZooFinishMissionID; // 0x6C
		::System::UInt32 _BreedItemID_k__BackingField; // 0x70

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

		::System::Void _CmdSpaceZooDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooBornScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOBORNSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooMutateScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOMUTATESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooOpCatteryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOOPCATTERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooDeleteCatScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODELETECATSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooExchangeItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOEXCHANGEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooTakeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOTAKESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSpaceZooCatUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONSPACEZOOCATUPDATENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTryNotifyNewCatHint(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONTRYNOTIFYNEWCATHINT_OFFSET))(this, arg);
		}

		::System::Boolean _IsCatNeedHint(::RPG::Client::SpaceZooCatData* catData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ISCATNEEDHINT_OFFSET))(this, catData);
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

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailActivityRewardQuestIDList(::RPG::GameCore::SpaceZooQuestType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::SpaceZooQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDQUESTIDLIST_OFFSET))(this, type);
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

		::System::Void _OnReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _OnReceiveUnlockSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKSUBMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _RefreshUnlockFeaturePref(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* featuresID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__REFRESHUNLOCKFEATUREPREF_OFFSET))(this, featuresID);
		}

		::RPG::Client::SpaceZooData* get_SpaceZooData()
		{
			return ((::RPG::Client::SpaceZooData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_SPACEZOODATA_OFFSET))(this);
		}

		::System::Void set_SpaceZooData(::RPG::Client::SpaceZooData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_SPACEZOODATA_OFFSET))(this, value);
		}

		::System::UInt32 get_BreedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMID_OFFSET))(this);
		}

		::System::Void set_BreedItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_BreedItemCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMCOST_OFFSET))(this);
		}

		::System::Void set_BreedItemCost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMCOST_OFFSET))(this, value);
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
