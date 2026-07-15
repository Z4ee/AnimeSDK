#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_EQUIPMENTPROMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C05BFE0)
#define RPG_GAMECORE_EQUIPMENTPROMOTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C05C9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentPromotionRow_TypeDefinitionIndex = 12741;

	class EquipmentPromotionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* PromotionCostList; // 0x10
		::RPG::GameCore::FixPoint BaseHPAdd; // 0x18
		::RPG::GameCore::FixPoint BaseAttack; // 0x20
		::RPG::GameCore::FixPoint BaseDefence; // 0x28
		::System::UInt32 PlayerLevelRequire; // 0x30
		::RPG::GameCore::FixPoint BaseDefenceAdd; // 0x38
		::System::UInt32 EquipmentID; // 0x40
		::System::UInt32 WorldLevelRequire; // 0x44
		::RPG::GameCore::FixPoint BaseAttackAdd; // 0x48
		::System::UInt32 Promotion; // 0x50
		::System::UInt32 MaxLevel; // 0x54
		::RPG::GameCore::FixPoint BaseHP; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EquipmentPromotionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EquipmentPromotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTPROMOTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
