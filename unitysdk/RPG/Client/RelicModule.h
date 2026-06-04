#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_1_A6B0B39A319DDDE2_2;
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

#define RPG_CLIENT_RELICMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6DED80)
#define RPG_CLIENT_RELICMODULE_FETCHRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0xC6DF940)
#define RPG_CLIENT_RELICMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC6DE950)
#define RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xC6E0680)
#define RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xC6E0660)
#define RPG_CLIENT_RELICMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC6DEC90)
#define RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET UNITYSDK_OFFSET(0xC6DD930)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0xC6DD990)
#define RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET UNITYSDK_OFFSET(0xC6DDA00)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET UNITYSDK_OFFSET(0xC6DFC50)
#define RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET UNITYSDK_OFFSET(0xC6DFAA0)
#define RPG_CLIENT_RELICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC6DEDD0)
#define RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET UNITYSDK_OFFSET(0xC6DDC60)
#define RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET UNITYSDK_OFFSET(0xC6DFE70)
#define RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET UNITYSDK_OFFSET(0xC6DDBD0)
#define RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET UNITYSDK_OFFSET(0xC6E0690)
#define RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xC6E0670)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xC6DF430)
#define RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6DEF20)
#define RPG_CLIENT_RELICMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC6DE9B0)
#define RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0270)
#define RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0380)
#define RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0560)
#define RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E00D0)
#define RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0320)
#define RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6DFFE0)
#define RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0190)
#define RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC6E05E0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0AF0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E1890)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0FF0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E11C0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E08B0)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC6E1D60)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E1630)
#define RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET UNITYSDK_OFFSET(0xC6E0D70)
#define RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET UNITYSDK_OFFSET(0xC6DEE20)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET UNITYSDK_OFFSET(0xC6DE2F0)
#define RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICTYPELIST_OFFSET UNITYSDK_OFFSET(0xC6DE750)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6E2480)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC6E2400)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC6E2490)
#define RPG_CLIENT_RELICMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC6E24F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicModule_TypeDefinitionIndex = 62521;

	class RelicModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* ReforgingRelicDataList; // 0x10
		::RPG::Client::RelicSmartSuit::PinInfoRecorder* _PinInfoRecorder_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanDataGroup*>* _RelicFilterPlanPromise; // 0x20
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicSuitRecommendData*>* _RelicSuitRecommendPromise; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::RelicType>* ReforgingRelicTypeList; // 0x30
		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* _NewRelicPlanPromise; // 0x38
		::RPG::Client::RelicSuitRecommendData* _RecommendData; // 0x40
		::RPG::Client::RelicSmartSuit::PlanDataManager* _PlanDataManager_k__BackingField; // 0x48
		::RPG::Client::RelicPresetModel* RelicPresetModel; // 0x50
		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* _RelicPlanModifyPromise; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsInReforging(::RPG::Client::RelicItemData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISINREFORGING_OFFSET))(a1);
		}

		::System::Boolean IsSubAffixBlockerActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERACTIVE_OFFSET))(this);
		}

		::System::Void SetSubAffixBlockerActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SETSUBAFFIXBLOCKERACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean IsSubAffixBlockerFuncUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_ISSUBAFFIXBLOCKERFUNCUNLOCK_OFFSET))(this);
		}

		::System::Void ReportDataOnSwitchBlocker(::RPG::Client::RelicItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_REPORTDATAONSWITCHBLOCKER_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateReforgingRelicDataList(::System::Collections::Generic::IList_1<::Class_1_A6B0B39A319DDDE2_2*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_A6B0B39A319DDDE2_2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__UPDATEREFORGINGRELICDATALIST_OFFSET))(this, a1, a2);
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

		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* ModifyRelicFilterPlan(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>* ModifyRelicFilterPlan_1(::System::UInt32 a1, ::RPG::Client::RelicFilterPlanIconData* a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::IRelicFilterPlanModifyData*>*(*)(::PVOID, ::System::UInt32, ::RPG::Client::RelicFilterPlanIconData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_MODIFYRELICFILTERPLAN_1_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>* SendAddRelicFilterPlanCsReq(::RPG::Client::RelicFilterPlanData* a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::RelicFilterPlanData*>*(*)(::PVOID, ::RPG::Client::RelicFilterPlanData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SENDADDRELICFILTERPLANCSREQ_OFFSET))(this, a1);
		}

		::System::Void _OnCmdMarkRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDMARKRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDGETRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdModifyRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDMODIFYRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdAddRelicFilterPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDADDRELICFILTERPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLockRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDLOCKRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdDiscardRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDDISCARDRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetBagScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDGETBAGSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::RPG::Client::RelicSmartSuit::PlanDataManager* get_PlanDataManager()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_PLANDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_PlanDataManager(::RPG::Client::RelicSmartSuit::PlanDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_PLANDATAMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PinInfoRecorder* get_PinInfoRecorder()
		{
			return ((::RPG::Client::RelicSmartSuit::PinInfoRecorder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_GET_PININFORECORDER_OFFSET))(this);
		}

		::System::Void set_PinInfoRecorder(::RPG::Client::RelicSmartSuit::PinInfoRecorder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PinInfoRecorder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE_SET_PININFORECORDER_OFFSET))(this, a1);
		}

		::System::Void _OnReconnectForSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONRECONNECTFORSMARTSUIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlersForSmartSuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ADDPACKETHANDLERSFORSMARTSUIT_OFFSET))(this);
		}

		::System::Void _OnCmdRelicSmartWearGetPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearAddPlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARADDPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearDeletePlanScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPLANSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearGetPinRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARGETPINRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePinRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearDeletePinRelicScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARDELETEPINRELICSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdRelicSmartWearUpdatePinRelicScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICMODULE__ONCMDRELICSMARTWEARUPDATEPINRELICSCNOTIFY_OFFSET))(this, a1, a2);
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
