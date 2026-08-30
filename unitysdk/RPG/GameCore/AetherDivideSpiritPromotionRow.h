#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE04670)
#define RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE050D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritPromotionRow_TypeDefinitionIndex = 10890;

	class AetherDivideSpiritPromotionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialSkillList; // 0x10
		::RPG::GameCore::FixPoint HPBase; // 0x18
		::RPG::GameCore::FixPoint DefenceBase; // 0x20
		::RPG::GameCore::FixPoint CriticalDamage; // 0x28
		::System::UInt32 Exp; // 0x30
		::System::UInt32 AvatarID; // 0x34
		::System::UInt32 Slot; // 0x38
		::RPG::GameCore::FixPoint CriticalChance; // 0x40
		::RPG::GameCore::FixPoint SpeedBase; // 0x48
		::RPG::GameCore::FixPoint AttackBase; // 0x50
		::System::UInt32 RewardID; // 0x58
		::System::UInt32 Promotion; // 0x5C
		::RPG::GameCore::FixPoint BaseAggro; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideSpiritPromotionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritPromotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITPROMOTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
