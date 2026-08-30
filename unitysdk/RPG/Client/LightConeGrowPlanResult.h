#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemCost; }
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_ADDITIONEXP_OFFSET UNITYSDK_OFFSET(0xD43E780)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_CANNOTDIRECTGROW_OFFSET UNITYSDK_OFFSET(0xD43E800)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD43E840)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMID_OFFSET UNITYSDK_OFFSET(0xD43E820)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FIRSTSELECTEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xD43E760)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_HASACTUALPROGRESS_OFFSET UNITYSDK_OFFSET(0xD43E7E0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0xD43E6C0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0xD43E7A0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_MATERIALSWILLCOST_OFFSET UNITYSDK_OFFSET(0xD43E700)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONCOSTFORREQ_OFFSET UNITYSDK_OFFSET(0xD43E7C0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0xD43E6E0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0xD43E740)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_USEDLIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0xD43E720)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_ADDITIONEXP_OFFSET UNITYSDK_OFFSET(0xD43E790)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_CANNOTDIRECTGROW_OFFSET UNITYSDK_OFFSET(0xD43E810)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD43E850)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMID_OFFSET UNITYSDK_OFFSET(0xD43E830)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FIRSTSELECTEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xD43E770)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_HASACTUALPROGRESS_OFFSET UNITYSDK_OFFSET(0xD43E7F0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0xD43E6D0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0xD43E7B0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_MATERIALSWILLCOST_OFFSET UNITYSDK_OFFSET(0xD43E710)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONCOSTFORREQ_OFFSET UNITYSDK_OFFSET(0xD43E7D0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0xD43E6F0)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0xD43E750)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_USEDLIGHTCONECOUNT_OFFSET UNITYSDK_OFFSET(0xD43E730)
#define RPG_CLIENT_LIGHTCONEGROWPLANRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xD43E860)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowPlanResult_TypeDefinitionIndex = 65782;

	class LightConeGrowPlanResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _PromotionCostForReq_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* _LevelUpCostsForReq_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _MaterialsWillCost_k__BackingField; // 0x20
		::RPG::Client::ItemData* _FirstSelectedLightCone_k__BackingField; // 0x28
		::System::UInt32 _FarmableItemID_k__BackingField; // 0x30
		::System::UInt32 _LevelAfterQuickGrow_k__BackingField; // 0x34
		::System::Int32 _TotalConvertableLightConeCount_k__BackingField; // 0x38
		::System::UInt32 _FarmableItemCount_k__BackingField; // 0x3C
		::System::Boolean _HasActualProgress_k__BackingField; // 0x40
		::System::Boolean _CannotDirectGrow_k__BackingField; // 0x41
		::System::UInt32 _PromotionLevelAfterQuickGrow_k__BackingField; // 0x44
		::System::UInt32 _AdditionExp_k__BackingField; // 0x48
		::System::UInt32 _UsedLightConeCount_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelAfterQuickGrow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELAFTERQUICKGROW_OFFSET))(this);
		}

		::System::Void set_LevelAfterQuickGrow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELAFTERQUICKGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_PromotionLevelAfterQuickGrow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET))(this);
		}

		::System::Void set_PromotionLevelAfterQuickGrow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_MaterialsWillCost()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_MATERIALSWILLCOST_OFFSET))(this);
		}

		::System::Void set_MaterialsWillCost(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_MATERIALSWILLCOST_OFFSET))(this, a1);
		}

		::System::UInt32 get_UsedLightConeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_USEDLIGHTCONECOUNT_OFFSET))(this);
		}

		::System::Void set_UsedLightConeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_USEDLIGHTCONECOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalConvertableLightConeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET))(this);
		}

		::System::Void set_TotalConvertableLightConeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_TOTALCONVERTABLELIGHTCONECOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_FirstSelectedLightCone()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FIRSTSELECTEDLIGHTCONE_OFFSET))(this);
		}

		::System::Void set_FirstSelectedLightCone(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FIRSTSELECTEDLIGHTCONE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AdditionExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_ADDITIONEXP_OFFSET))(this);
		}

		::System::Void set_AdditionExp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_ADDITIONEXP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_LevelUpCostsForReq()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_LEVELUPCOSTSFORREQ_OFFSET))(this);
		}

		::System::Void set_LevelUpCostsForReq(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_LEVELUPCOSTSFORREQ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_PromotionCostForReq()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_PROMOTIONCOSTFORREQ_OFFSET))(this);
		}

		::System::Void set_PromotionCostForReq(::System::Collections::Generic::List_1<::Proto::ItemCost*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Proto::ItemCost*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_PROMOTIONCOSTFORREQ_OFFSET))(this, a1);
		}

		::System::Boolean get_HasActualProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_HASACTUALPROGRESS_OFFSET))(this);
		}

		::System::Void set_HasActualProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_HASACTUALPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_CannotDirectGrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_CANNOTDIRECTGROW_OFFSET))(this);
		}

		::System::Void set_CannotDirectGrow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_CANNOTDIRECTGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmableItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMID_OFFSET))(this);
		}

		::System::Void set_FarmableItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmableItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_GET_FARMABLEITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_FarmableItemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWPLANRESULT_SET_FARMABLEITEMCOUNT_OFFSET))(this, a1);
		}
	};
}
