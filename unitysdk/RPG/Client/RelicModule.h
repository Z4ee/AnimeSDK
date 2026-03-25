#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_1_E14A0A1A8B1F847C_3;
namespace RPG::Client { class IRelicFilterPlanModifyData; }
namespace RPG::Client { class RelicFilterPlanData; }
namespace RPG::Client { class RelicFilterPlanDataGroup; }
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicSuitRecommendData; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::RelicSmartSuit { class PinInfoRecorder; }
namespace RPG::Client::RelicSmartSuit { class PlanDataManager; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICMODULE_FETCHRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0xA2A78E0)
#define RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA2A7060)
#define RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xA2A8680)
#define RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xA2A8660)
#define RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET UNITYSDK_OFFSET(0xA2A6290)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0xA2A62F0)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0xA2A6360)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET UNITYSDK_OFFSET(0xA2A7C10)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0xA2A7A40)
#define RPG_CLIENT_RELICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA2A73A0)
#define RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET UNITYSDK_OFFSET(0xA2A65C0)
#define RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET UNITYSDK_OFFSET(0xA2A7E30)
#define RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0xA2A6530)
#define RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xA2A8690)
#define RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xA2A8670)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xA2A76F0)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA2A7500)
#define RPG_CLIENT_RELICMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2A70C0)
#define RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8230)
#define RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8340)
#define RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8560)
#define RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8090)
#define RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A82E0)
#define RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A7FA0)
#define RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8150)
#define RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA2A85E0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8B50)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A9900)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A9050)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A9220)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8910)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA2A9D10)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A96A0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xA2A8DD0)
#define RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xA2A73F0)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET UNITYSDK_OFFSET(0xA2A6B60)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET UNITYSDK_OFFSET(0xA2A6EB0)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA2AA3F0)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA2AA450)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule_TypeDefinitionIndex = 54400;

	class RelicModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* ReforgingRelicDataList; // 0x10
		::RPG::Client::RelicSuitRecommendData* _RecommendData; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicSuitRecommendData*>* _RelicSuitRecommendPromise; // 0x20
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* _NewRelicPlanPromise; // 0x28
		::RPG::Client::RelicSmartSuit::PlanDataManager* _PlanDataManager_k__BackingField; // 0x30
		::RPG::Client::RelicSmartSuit::PinInfoRecorder* _PinInfoRecorder_k__BackingField; // 0x38
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>* _RelicFilterPlanPromise; // 0x40
		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* _RelicPlanModifyPromise; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::RelicType>* ReforgingRelicTypeList; // 0x50

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

		::System::Void _UpdateReforgingRelicDataList(::System::Collections::Generic::IList_1<::Class_1_E14A0A1A8B1F847C_3*>* relicList, ::System::Boolean isAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_E14A0A1A8B1F847C_3*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET))(this, relicList, isAll);
		}

		::System::Void _UpdateReforgingRelicTypeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET))(this);
		}

		static ::RPG::Client::RelicModule* get_Instance()
		{
			return ((::RPG::Client::RelicModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET))();
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
