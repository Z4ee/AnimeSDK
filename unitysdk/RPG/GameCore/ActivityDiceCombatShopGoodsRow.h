#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATSHOPGOODSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C9F4420)
#define RPG_GAMECORE_ACTIVITYDICECOMBATSHOPGOODSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F4690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatShopGoodsRow_TypeDefinitionIndex = 11231;

	class ActivityDiceCombatShopGoodsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockTipsList; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ItemCost; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x20
		::System::UInt32 DiceShopGoodsID; // 0x28
		::System::UInt32 GoodsSortID; // 0x2C
		::System::UInt32 ItemID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSHOPGOODSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatShopGoodsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATSHOPGOODSROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
