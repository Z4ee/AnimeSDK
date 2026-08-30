#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1CE43A20)
#define RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE447F0)
#define RPG_GAMECORE_AVATARPROMOTIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1CE46CD0)
#define RPG_GAMECORE_AVATARPROMOTIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x1CE46D30)
#define RPG_GAMECORE_AVATARPROMOTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE46D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionRow_TypeDefinitionIndex = 12642;

	class AvatarPromotionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* PromotionCostList; // 0x10
		::RPG::GameCore::FixPoint CriticalChance; // 0x18
		::RPG::GameCore::FixPoint RankDefenceAdd; // 0x20
		::RPG::GameCore::FixPoint RankAttackBase; // 0x28
		::RPG::GameCore::FixPoint DefenceBase; // 0x30
		::RPG::GameCore::FixPoint RankSpeedBase; // 0x38
		::RPG::GameCore::FixPoint RankCriticalChance; // 0x40
		::System::UInt32 MaxLevel; // 0x48
		::System::UInt32 Promotion; // 0x4C
		::RPG::GameCore::FixPoint HPBase; // 0x50
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0x58
		::RPG::GameCore::FixPoint RankHPBase; // 0x60
		::RPG::GameCore::FixPoint RankHPAdd; // 0x68
		::RPG::GameCore::FixPoint SpeedBase; // 0x70
		::RPG::GameCore::FixPoint RankSpeedAdd; // 0x78
		::RPG::GameCore::FixPoint AttackAdd; // 0x80
		::RPG::GameCore::FixPoint CriticalDamage; // 0x88
		::RPG::GameCore::FixPoint HPAdd; // 0x90
		::RPG::GameCore::FixPoint RankAttackAdd; // 0x98
		::System::UInt32 WorldLevelRequire; // 0xA0
		::System::UInt32 AvatarID; // 0xA4
		::System::UInt32 PlayerLevelRequire; // 0xA8
		::RPG::GameCore::FixPoint AttackBase; // 0xB0
		::RPG::GameCore::FixPoint BaseAggro; // 0xB8
		::RPG::GameCore::FixPoint SpeedAdd; // 0xC0
		::RPG::GameCore::FixPoint DefenceAdd; // 0xC8
		::RPG::GameCore::FixPoint RankCriticalDamage; // 0xD0
		::RPG::GameCore::FixPoint RankDefenceBase; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarPromotionRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarPromotionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPromotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
