#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_1_E14A0A1A8B1F847C_4;
namespace RPG::Client { class IRelicFilterPlanModifyData; }
namespace RPG::Client { class RelicFilterPlanData; }
namespace RPG::Client { class RelicFilterPlanDataGroup; }
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicPresetModel; }
namespace RPG::Client { class RelicSuitRecommendData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class PlanDataManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF979F0)
#define RPG_CLIENT_RELICMODULE_FETCHRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0xAF97C80)
#define RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAF928F0)
#define RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xAF98A50)
#define RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xAF98A30)
#define RPG_CLIENT_RELICMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAF97900)
#define RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET UNITYSDK_OFFSET(0xAF96AA0)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0xAF96B00)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0xAF96B70)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET UNITYSDK_OFFSET(0xAF97FE0)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0xAF97DE0)
#define RPG_CLIENT_RELICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xAF97A40)
#define RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET UNITYSDK_OFFSET(0xAF96DD0)
#define RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET UNITYSDK_OFFSET(0xAF98200)
#define RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0xAF96D40)
#define RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xAF98A60)
#define RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xAF98A40)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xAF98DF0)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF97A90)
#define RPG_CLIENT_RELICMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAF97870)
#define RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98600)
#define RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98710)
#define RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98930)
#define RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98460)
#define RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xAF986B0)
#define RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98370)
#define RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98520)
#define RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAF989B0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF99220)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xAF99FB0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF99700)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xAF998D0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF98FE0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAF9A3C0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xAF99D50)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xAF99490)
#define RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xAF98A70)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET UNITYSDK_OFFSET(0xAF97370)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET UNITYSDK_OFFSET(0xAF976C0)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAF9AB30)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAF9AAA0)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xAF9AB40)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAF9ABA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule_TypeDefinitionIndex = 61588;

	class RelicModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::RelicSuitRecommendData* _RecommendData; // 0x10
		::RPG::Client::RelicSmartSuit::PlanDataManager* _PlanDataManager_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>* _RelicFilterPlanPromise; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::RelicType>* ReforgingRelicTypeList; // 0x28
		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* _RelicPlanModifyPromise; // 0x30
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* _NewRelicPlanPromise; // 0x38
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicSuitRecommendData*>* _RelicSuitRecommendPromise; // 0x40
		::RPG::Client::RelicSmartSuit::PinInfoRecorder* _PinInfoRecorder_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* ReforgingRelicDataList; // 0x50
		::RPG::Client::RelicPresetModel* RelicPresetModel; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsInReforging(::RPG::Client::RelicItemData* relicData)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET))(relicData);
		}

		::System::Boolean IsSubAffixBlockerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET))(this);
		}

		::System::Void SetSubAffixBlockerActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET))(this, active);
		}

		::System::Boolean IsSubAffixBlockerFuncUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET))(this);
		}

		::System::Void ReportDataOnSwitchBlocker(::RPG::Client::RelicItemData* relicItemData, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET))(this, relicItemData, active);
		}

		::System::Void _UpdateReforgingRelicDataList(::System::Collections::Generic::IList_1<::Class_1_E14A0A1A8B1F847C_4*>* relicList, ::System::Boolean isAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_E14A0A1A8B1F847C_4*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET))(this, relicList, isAll);
		}

		::System::Void _UpdateReforgingRelicTypeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET))(this);
		}

		static ::RPG::Client::RelicModule* get_Instance()
		{
			return ((::RPG::Client::RelicModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>* FetchRelicFilterPlan()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_FETCHRELICFILTERPLAN_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* ModifyRelicFilterPlan(::System::UInt32 slotIndex, ::System::String* name)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET))(this, slotIndex, name);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* ModifyRelicFilterPlan_1(::System::UInt32 slotIndex, ::RPG::Client::RelicFilterPlanIconData* iconData)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicFilterPlanIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET))(this, slotIndex, iconData);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* SendAddRelicFilterPlanCsReq(::RPG::Client::RelicFilterPlanData* planData)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>*(*)(::PVOID, ::RPG::Client::RelicFilterPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET))(this, planData);
		}

		::System::Void _OnCmdMarkRelicFilterPlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetRelicFilterPlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdModifyRelicFilterPlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAddRelicFilterPlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLockRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdDiscardRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetBagScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::RelicSmartSuit::PlanDataManager* get_PlanDataManager()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_PlanDataManager(::RPG::Client::RelicSmartSuit::PlanDataManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET))(this);
		}

		::System::Void set_PinInfoRecorder(::RPG::Client::RelicSmartSuit::PinInfoRecorder* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinInfoRecorder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET))(this, value);
		}

		::System::Void _OnReconnectForSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlersForSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET))(this);
		}

		::System::Void _OnCmdRelicSmartWearGetPlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearAddPlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearDeletePlanScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearGetPinRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePinRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearDeletePinRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePinRelicScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
