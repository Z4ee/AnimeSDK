#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarQuickGrowCalculator_GrowSimState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_E0B808936AD386AC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarGrowPlanResult; }
namespace RPG::Client { class AvatarQuickGrowCalculator_ExpItemPlan; }
namespace RPG::Client { class ItemCostCalculator; }
namespace RPG::GameCore { class AvatarExpItemConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_CLEARRULECONTEXT_OFFSET UNITYSDK_OFFSET(0xC70AB60)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xC70A930)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0xC70AA90)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_SETAVATAR_OFFSET UNITYSDK_OFFSET(0xC70AA10)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR_SETRULECONTEXT_OFFSET UNITYSDK_OFFSET(0xC70AAD0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__BUILDEXPPLAN_OFFSET UNITYSDK_OFFSET(0xC70C620)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CALCULATE_OFFSET UNITYSDK_OFFSET(0xC70ABD0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xC70DD50)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CEILDIV_OFFSET UNITYSDK_OFFSET(0xC70DCB0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xC70A920)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__DETERMINELEVELTARGET_OFFSET UNITYSDK_OFFSET(0xC70C410)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__ENSUREAVATAREXPROWS_OFFSET UNITYSDK_OFFSET(0xC70AFF0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__FILLPREVIEWCOSTS_OFFSET UNITYSDK_OFFSET(0xC70D350)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__FILLREQCOSTLISTS_OFFSET UNITYSDK_OFFSET(0xC70CFF0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__FINALIZERESULT_OFFSET UNITYSDK_OFFSET(0xC70C200)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETAVAILABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xC70CD60)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETDISPLAYMAXPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC70C310)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETEFFECTIVERULECONTEXT_OFFSET UNITYSDK_OFFSET(0xC70B7C0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETEXPCOSTFORLEVELS_OFFSET UNITYSDK_OFFSET(0xC70CB60)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETLEVELUPCOINCOST_OFFSET UNITYSDK_OFFSET(0xC70CE90)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETMAXLEVELOFPROMOTION_OFFSET UNITYSDK_OFFSET(0xC70BB00)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETTARGETPROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC70B920)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETTOTALAVAILABLEEXP_OFFSET UNITYSDK_OFFSET(0xC70BB80)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__RESOLVEFARMDEMAND_OFFSET UNITYSDK_OFFSET(0xC70D960)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__SIMULATEGROW_OFFSET UNITYSDK_OFFSET(0xC70BD30)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__TRYPROMOTION_OFFSET UNITYSDK_OFFSET(0xC70CBC0)
#define RPG_CLIENT_AVATARQUICKGROWCALCULATOR__TRYRECALCULATE_OFFSET UNITYSDK_OFFSET(0xC70A9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarQuickGrowCalculator_TypeDefinitionIndex = 62468;

	class AvatarQuickGrowCalculator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarExpItemConfigRow*>** StaticGet__AvatarExpRows()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::AvatarExpItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator_TypeDefinitionIndex)->GetStaticField(0x5C360);
		}
		static ::System::UInt32* StaticGet__HighestExpProvide()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator_TypeDefinitionIndex)->GetStaticField(0x13F70);
		}
		static ::System::UInt32* StaticGet__HighestExpItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator_TypeDefinitionIndex)->GetStaticField(0x13F74);
		}
		static ::System::UInt32* StaticGet__CoinItemID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AvatarQuickGrowCalculator_TypeDefinitionIndex)->GetStaticField(0x13F78);
		}
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::RPG::Client::AvatarGrowPlanResult* _Result; // 0x18
		::System::UInt32 _RulePlayerLevel; // 0x20
		::System::Boolean _IsDirty; // 0x24
		::System::UInt32 _RuleWorldLevel; // 0x28

		::System::Void _ctor(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CCTOR_OFFSET))();
		}

		::RPG::Client::AvatarGrowPlanResult* get_Result()
		{
			return ((::RPG::Client::AvatarGrowPlanResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_GET_RESULT_OFFSET))(this);
		}

		::System::Void SetAvatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_SETAVATAR_OFFSET))(this, a1);
		}

		::System::Void SetRuleContext(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_SETRULECONTEXT_OFFSET))(this, a1, a2);
		}

		::System::Void ClearRuleContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_CLEARRULECONTEXT_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR_MARKDIRTY_OFFSET))(this);
		}

		::System::Void _TryRecalculate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__TRYRECALCULATE_OFFSET))(this);
		}

		::RPG::Client::AvatarGrowPlanResult* _Calculate()
		{
			return ((::RPG::Client::AvatarGrowPlanResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CALCULATE_OFFSET))(this);
		}

		::System::Void _EnsureAvatarExpRows()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__ENSUREAVATAREXPROWS_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _GetEffectiveRuleContext()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETEFFECTIVERULECONTEXT_OFFSET))(this);
		}

		::System::UInt32 _GetTargetPromotionLevel(::RPG::AvatarSystem::IAvatar* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETTARGETPROMOTIONLEVEL_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 _GetMaxLevelOfPromotion(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETMAXLEVELOFPROMOTION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AvatarQuickGrowCalculator_GrowSimState _SimulateGrow(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::Class_1_E0B808936AD386AC* a3, ::RPG::Client::AvatarQuickGrowCalculator_GrowSimState a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::RPG::Client::AvatarQuickGrowCalculator_GrowSimState(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::AvatarQuickGrowCalculator_GrowSimState, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__SIMULATEGROW_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> _DetermineLevelTarget(::Class_1_E0B808936AD386AC* a1, ::RPG::Client::AvatarQuickGrowCalculator_GrowSimState a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::RPG::Client::AvatarQuickGrowCalculator_GrowSimState, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__DETERMINELEVELTARGET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 _GetExpCostForLevels(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETEXPCOSTFORLEVELS_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetTotalAvailableExp(::Class_1_E0B808936AD386AC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_E0B808936AD386AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETTOTALAVAILABLEEXP_OFFSET))(this, a1);
		}

		::System::Boolean _TryPromotion(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__TRYPROMOTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _FinalizeResult(::RPG::Client::AvatarGrowPlanResult* a1, ::RPG::Client::ItemCostCalculator* a2, ::Class_1_E0B808936AD386AC* a3, ::Class_1_E0B808936AD386AC* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowPlanResult*, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__FINALIZERESULT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _FillReqCostLists(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::Class_1_E0B808936AD386AC* a3, ::RPG::Client::AvatarGrowPlanResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::AvatarGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__FILLREQCOSTLISTS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ResolveFarmDemand(::RPG::Client::ItemCostCalculator* a1, ::Class_1_E0B808936AD386AC* a2, ::Class_1_E0B808936AD386AC* a3, ::RPG::Client::AvatarGrowPlanResult* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemCostCalculator*, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::RPG::Client::AvatarGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__RESOLVEFARMDEMAND_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _FillPreviewCosts(::Class_1_E0B808936AD386AC* a1, ::Class_1_E0B808936AD386AC* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5, ::RPG::Client::AvatarGrowPlanResult* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::Class_1_E0B808936AD386AC*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::AvatarGrowPlanResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__FILLPREVIEWCOSTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 _GetDisplayMaxPromotionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETDISPLAYMAXPROMOTIONLEVEL_OFFSET))(this);
		}

		::System::UInt32 _GetLevelUpCoinCost(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETLEVELUPCOINCOST_OFFSET))(this, a1);
		}

		::System::UInt32 _CeilDiv(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__CEILDIV_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AvatarQuickGrowCalculator_ExpItemPlan* _BuildExpPlan(::Class_1_E0B808936AD386AC* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::AvatarQuickGrowCalculator_ExpItemPlan*(*)(::PVOID, ::Class_1_E0B808936AD386AC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__BUILDEXPPLAN_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetAvailableItemCount(::System::UInt32 a1, ::Class_1_E0B808936AD386AC* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_1_E0B808936AD386AC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARQUICKGROWCALCULATOR__GETAVAILABLEITEMCOUNT_OFFSET))(this, a1, a2);
		}
	};
}
