#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_CANNOTDIRECTGROW_OFFSET UNITYSDK_OFFSET(0x193DD0D0)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_FARMABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x193DD110)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_FARMABLEITEMID_OFFSET UNITYSDK_OFFSET(0x193DD0F0)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_HASACTUALPROGRESS_OFFSET UNITYSDK_OFFSET(0x193DD0B0)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_LEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x193DD010)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_LEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0x193DD070)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_MATERIALSWILLCOST_OFFSET UNITYSDK_OFFSET(0x193DD050)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_PROMOTIONCOSTFORREQ_OFFSET UNITYSDK_OFFSET(0x193DD090)
#define RPG_CLIENT_AVATARGROWPLANRESULT_GET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x193DD030)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_CANNOTDIRECTGROW_OFFSET UNITYSDK_OFFSET(0x193DD0E0)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_FARMABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x193DD120)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_FARMABLEITEMID_OFFSET UNITYSDK_OFFSET(0x193DD100)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_HASACTUALPROGRESS_OFFSET UNITYSDK_OFFSET(0x193DD0C0)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_LEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x193DD020)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_LEVELUPCOSTSFORREQ_OFFSET UNITYSDK_OFFSET(0x193DD080)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_MATERIALSWILLCOST_OFFSET UNITYSDK_OFFSET(0x193DD060)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_PROMOTIONCOSTFORREQ_OFFSET UNITYSDK_OFFSET(0x193DD0A0)
#define RPG_CLIENT_AVATARGROWPLANRESULT_SET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET UNITYSDK_OFFSET(0x193DD040)
#define RPG_CLIENT_AVATARGROWPLANRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x193DD130)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGrowPlanResult_TypeDefinitionIndex = 62550;

	class AvatarGrowPlanResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _MaterialsWillCost_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _PromotionCostForReq_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _LevelUpCostsForReq_k__BackingField; // 0x20
		::System::UInt32 _FarmableItemID_k__BackingField; // 0x28
		::System::Boolean _HasActualProgress_k__BackingField; // 0x2C
		::System::Boolean _CannotDirectGrow_k__BackingField; // 0x2D
		::System::UInt32 _FarmableItemCount_k__BackingField; // 0x30
		::System::UInt32 _PromotionLevelAfterQuickGrow_k__BackingField; // 0x34
		::System::UInt32 _LevelAfterQuickGrow_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LevelAfterQuickGrow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_LEVELAFTERQUICKGROW_OFFSET))(this);
		}

		::System::Void set_LevelAfterQuickGrow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_LEVELAFTERQUICKGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_PromotionLevelAfterQuickGrow()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET))(this);
		}

		::System::Void set_PromotionLevelAfterQuickGrow(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_PROMOTIONLEVELAFTERQUICKGROW_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_MaterialsWillCost()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_MATERIALSWILLCOST_OFFSET))(this);
		}

		::System::Void set_MaterialsWillCost(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_MATERIALSWILLCOST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_LevelUpCostsForReq()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_LEVELUPCOSTSFORREQ_OFFSET))(this);
		}

		::System::Void set_LevelUpCostsForReq(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_LEVELUPCOSTSFORREQ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_PromotionCostForReq()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_PROMOTIONCOSTFORREQ_OFFSET))(this);
		}

		::System::Void set_PromotionCostForReq(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_PROMOTIONCOSTFORREQ_OFFSET))(this, a1);
		}

		::System::Boolean get_HasActualProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_HASACTUALPROGRESS_OFFSET))(this);
		}

		::System::Void set_HasActualProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_HASACTUALPROGRESS_OFFSET))(this, a1);
		}

		::System::Boolean get_CannotDirectGrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_CANNOTDIRECTGROW_OFFSET))(this);
		}

		::System::Void set_CannotDirectGrow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_CANNOTDIRECTGROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmableItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_FARMABLEITEMID_OFFSET))(this);
		}

		::System::Void set_FarmableItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_FARMABLEITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FarmableItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_GET_FARMABLEITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_FarmableItemCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGROWPLANRESULT_SET_FARMABLEITEMCOUNT_OFFSET))(this, a1);
		}
	};
}
