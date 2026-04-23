#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x186C7500)
#define RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186C82C0)
#define RPG_GAMECORE_AVATARPROMOTIONROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x186CA820)
#define RPG_GAMECORE_AVATARPROMOTIONROW_RESET_OFFSET UNITYSDK_OFFSET(0x186CA880)
#define RPG_GAMECORE_AVATARPROMOTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x186CA8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionRow_TypeDefinitionIndex = 12029;

	class AvatarPromotionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* PromotionCostList; // 0x10
		::RPG::GameCore::FixPoint CriticalChance; // 0x18
		::System::UInt32 PlayerLevelRequire; // 0x20
		::System::UInt32 MaxLevel; // 0x24
		::RPG::GameCore::FixPoint RankAttackBase; // 0x28
		::RPG::GameCore::FixPoint BaseAggro; // 0x30
		::RPG::GameCore::FixPoint RankHPBase; // 0x38
		::RPG::GameCore::FixPoint HPBase; // 0x40
		::RPG::GameCore::FixPoint RankCriticalChance; // 0x48
		::RPG::GameCore::FixPoint SpeedAdd; // 0x50
		::RPG::GameCore::FixPoint RankHPAdd; // 0x58
		::RPG::GameCore::FixPoint DefenceAdd; // 0x60
		::RPG::GameCore::FixPoint SpeedBase; // 0x68
		::RPG::GameCore::FixPoint AttackBase; // 0x70
		::RPG::GameCore::FixPoint RankSpeedAdd; // 0x78
		::RPG::GameCore::FixPoint CriticalDamage; // 0x80
		::System::UInt32 WorldLevelRequire; // 0x88
		::RPG::GameCore::FixPoint RankDefenceBase; // 0x90
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0x98
		::RPG::GameCore::FixPoint DefenceBase; // 0xA0
		::RPG::GameCore::FixPoint RankCriticalDamage; // 0xA8
		::RPG::GameCore::FixPoint RankSpeedBase; // 0xB0
		::System::UInt32 Promotion; // 0xB8
		::System::UInt32 AvatarID; // 0xBC
		::RPG::GameCore::FixPoint RankAttackAdd; // 0xC0
		::RPG::GameCore::FixPoint AttackAdd; // 0xC8
		::RPG::GameCore::FixPoint RankDefenceAdd; // 0xD0
		::RPG::GameCore::FixPoint HPAdd; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPromotionRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarPromotionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarPromotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
