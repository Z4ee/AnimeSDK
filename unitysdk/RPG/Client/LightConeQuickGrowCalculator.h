#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LightConeQuickGrowCalculator_GrowSimState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E0B808936AD386AC;
namespace Proto { class ItemCost; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class ItemCostCalculator; }
namespace RPG::Client { class LightConeGrowPlanResult; }
namespace RPG::Client { class LightConeQuickGrowCalculator_ExpItemPlan; }
namespace RPG::Client { class LightConeQuickGrowCalculator_ExpSourceRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_CLEARRULECONTEXT_OFFSET UNITYSDK_OFFSET(0x16C6D830)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x16C6D600)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x16C6D760)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_SETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x16C6D6E0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_SETRULECONTEXT_OFFSET UNITYSDK_OFFSET(0x16C6D7A0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__APPENDPILEEQUIPMENTITEMCOSTS_OFFSET UNITYSDK_OFFSET(0x16C702E0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPPLAN_OFFSET UNITYSDK_OFFSET(0x16C6FE10)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPSOURCEBYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x16C71360)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPSOURCEBYEXPITEM_OFFSET UNITYSDK_OFFSET(0x16C71100)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPSOURCES_OFFSET UNITYSDK_OFFSET(0x16C6DE50)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDLEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0x16C6FBE0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDPROMOTIONCOSTLIST_OFFSET UNITYSDK_OFFSET(0x16C6FCF0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CALCULATETOTALLIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0x16C71A30)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CALCULATE_OFFSET UNITYSDK_OFFSET(0x16C6D8A0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C71C00)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CEILDIV_OFFSET UNITYSDK_OFFSET(0x16C70190)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__COLLECTPILEEQUIPMENTS_OFFSET UNITYSDK_OFFSET(0x16C71680)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CREATEPILEITEMCOST_OFFSET UNITYSDK_OFFSET(0x16C70550)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6D4A0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__DETERMINELEVELTARGET_OFFSET UNITYSDK_OFFSET(0x16C705E0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FILLEXPUSAGESUMMARY_OFFSET UNITYSDK_OFFSET(0x16C6EF10)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FILLPREVIEWCOSTS_OFFSET UNITYSDK_OFFSET(0x16C6F110)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FILLREQCOSTLISTS_OFFSET UNITYSDK_OFFSET(0x16C6EA10)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FINDEXPSOURCE_OFFSET UNITYSDK_OFFSET(0x16C701F0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETAVAILABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x16C70960)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETEXPCOSTFORLEVELS_OFFSET UNITYSDK_OFFSET(0x16C70770)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETLEVELMAXEXP_OFFSET UNITYSDK_OFFSET(0x16C70B40)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETPROMOTIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x16C6E240)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETREMAININGEXPTOPROMOTIONCAP_OFFSET UNITYSDK_OFFSET(0x16C70100)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETTARGETPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x16C6E170)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETTOTALAVAILABLEEXP_OFFSET UNITYSDK_OFFSET(0x16C6E2C0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__ISPILEENABLED_OFFSET UNITYSDK_OFFSET(0x16C715E0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__RESOLVEFARMDEMAND_OFFSET UNITYSDK_OFFSET(0x16C6F730)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__SIMULATEGROW_OFFSET UNITYSDK_OFFSET(0x16C6E3A0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__SUMMARIZEPILELIGHTCONES_OFFSET UNITYSDK_OFFSET(0x16C70C20)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__TRIMEXPOVERFLOW_OFFSET UNITYSDK_OFFSET(0x16C70E50)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__TRYPROMOTION_OFFSET UNITYSDK_OFFSET(0x16C707F0)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__TRYRECALCULATE_OFFSET UNITYSDK_OFFSET(0x16C6D680)
#define RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___CALCULATE_B__21_0_OFFSET UNITYSDK_OFFSET(0x16C71C10)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeQuickGrowCalculator_TypeDefinitionIndex = 62798;

	class LightConeQuickGrowCalculator : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__CoinItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LightConeQuickGrowCalculator_TypeDefinitionIndex)->GetStaticField(0x8C40);
		}
		::System::Collections::Generic::List_1<::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow*>* _ExpSources; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PileConfigIDs; // 0x18
		::RPG::Client::EquipmentItemData* _Equipment; // 0x20
		::RPG::Client::LightConeGrowPlanResult* _Result; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::EquipmentItemData*>*>* _PileEquipmentByConfig; // 0x30
		::System::UInt32 _RulePlayerLevel; // 0x38
		::System::Int32 _LightConeCanConvertCount; // 0x3C
		::System::UInt32 _HighestNonPileExpProvide; // 0x40
		::System::UInt32 _HighestNonPileExpItemID; // 0x44
		::System::Boolean _IsDirty; // 0x48
		::System::UInt32 _RuleWorldLevel; // 0x4C

		::System::Void _ctor(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CCTOR_OFFSET))();
		}

		::RPG::Client::LightConeGrowPlanResult* get_Result()
		{
			return ((::RPG::Client::LightConeGrowPlanResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_GET_RESULT_OFFSET))(this);
		}

		::System::Void SetEquipment(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_SETEQUIPMENT_OFFSET))(this, a1);
		}

		::System::Void SetRuleContext(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_SETRULECONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearRuleContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_CLEARRULECONTEXT_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR_MARKDIRTY_OFFSET))(this);
		}

		::System::Void _TryRecalculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__TRYRECALCULATE_OFFSET))(this);
		}

		::RPG::Client::LightConeGrowPlanResult* _Calculate()
		{
			return ((::RPG::Client::LightConeGrowPlanResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CALCULATE_OFFSET))(this);
		}

		::System::Void _FillReqCostLists(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::Class_1_E0B808936AD386AC* a3, ::RPG::Client::LightConeGrowPlanResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FILLREQCOSTLISTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _FillExpUsageSummary(::Class_1_E0B808936AD386AC* a1, ::Class_1_E0B808936AD386AC* a2, ::RPG::Client::LightConeGrowPlanResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FILLEXPUSAGESUMMARY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ResolveFarmDemand(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::Class_1_E0B808936AD386AC* a3, ::RPG::Client::LightConeGrowPlanResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__RESOLVEFARMDEMAND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _FillPreviewCosts(::Class_1_E0B808936AD386AC* a1, ::Class_1_E0B808936AD386AC* a2, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState a3, ::RPG::Client::LightConeGrowPlanResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState, ::RPG::Client::LightConeGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FILLPREVIEWCOSTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _BuildLevelupCostsForReq(::Class_1_E0B808936AD386AC* a1)
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID, ::Class_1_E0B808936AD386AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDLEVELUPCOSTSFORREQ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _BuildPromotionCostList(::Class_1_E0B808936AD386AC* a1)
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID, ::Class_1_E0B808936AD386AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDPROMOTIONCOSTLIST_OFFSET))(this, a1);
		}

		::System::Void _AppendPileEquipmentItemCosts(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__APPENDPILEEQUIPMENTITEMCOSTS_OFFSET))(this, a1, a2, a3);
		}

		static ::Proto::ItemCost* _CreatePileItemCost(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Proto::ItemCost*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CREATEPILEITEMCOST_OFFSET))(a1, a2);
		}

		::RPG::Client::LightConeQuickGrowCalculator_GrowSimState _SimulateGrow(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::Class_1_E0B808936AD386AC* a3, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::RPG::Client::LightConeGrowPlanResult* a8)
		{
			return ((::RPG::Client::LightConeQuickGrowCalculator_GrowSimState(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LightConeGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__SIMULATEGROW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _DetermineLevelTarget(::Class_1_E0B808936AD386AC* a1, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__DETERMINELEVELTARGET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 _GetExpCostForLevels(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETEXPCOSTFORLEVELS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTotalAvailableExp(::Class_1_E0B808936AD386AC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_E0B808936AD386AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETTOTALAVAILABLEEXP_OFFSET))(this, a1);
		}

		::System::Boolean _TryPromotion(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::LightConeQuickGrowCalculator_GrowSimState&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__TRYPROMOTION_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _GetTargetPromotionLevel(::RPG::Client::EquipmentItemData* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETTARGETPROMOTIONLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _GetPromotionMaxLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETPROMOTIONMAXLEVEL_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetLevelMaxExp(::RPG::Client::EquipmentItemData* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::EquipmentItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETLEVELMAXEXP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetRemainingExpToPromotionCap(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETREMAININGEXPTOPROMOTIONCAP_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _CeilDiv(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CEILDIV_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LightConeQuickGrowCalculator_ExpItemPlan* _BuildExpPlan(::Class_1_E0B808936AD386AC* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::LightConeQuickGrowCalculator_ExpItemPlan*(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPPLAN_OFFSET))(this, a1, a2);
		}

		::System::Void _TrimExpOverflow(::RPG::Client::LightConeQuickGrowCalculator_ExpItemPlan* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeQuickGrowCalculator_ExpItemPlan*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__TRIMEXPOVERFLOW_OFFSET))(this, a1, a2);
		}

		::System::Void _SummarizePileLightCones(::RPG::Client::LightConeQuickGrowCalculator_ExpItemPlan* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LightConeQuickGrowCalculator_ExpItemPlan*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__SUMMARIZEPILELIGHTCONES_OFFSET))(this, a1);
		}

		::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow* _FindExpSource(::System::UInt32 a1)
		{
			return ((::RPG::Client::LightConeQuickGrowCalculator_ExpSourceRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__FINDEXPSOURCE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAvailableItemCount(::System::UInt32 a1, ::Class_1_E0B808936AD386AC* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_1_E0B808936AD386AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__GETAVAILABLEITEMCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void _BuildExpSources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPSOURCES_OFFSET))(this);
		}

		::System::Void _BuildExpSourceByExpItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPSOURCEBYEXPITEM_OFFSET))(this);
		}

		::System::Void _BuildExpSourceByEquipment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__BUILDEXPSOURCEBYEQUIPMENT_OFFSET))(this);
		}

		::System::Boolean _IsPileEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__ISPILEENABLED_OFFSET))(this);
		}

		::System::Void _CollectPileEquipments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__COLLECTPILEEQUIPMENTS_OFFSET))(this);
		}

		::System::Void _CalculateTotalLightConeCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR__CALCULATETOTALLIGHTCONECOUNT_OFFSET))(this);
		}

		::System::Boolean __Calculate_b__21_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEQUICKGROWCALCULATOR___CALCULATE_B__21_0_OFFSET))(this, a1);
		}
	};
}
