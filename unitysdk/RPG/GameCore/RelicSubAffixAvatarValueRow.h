#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AC5560)
#define RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC58B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSubAffixAvatarValueRow_TypeDefinitionIndex = 10478;

	class RelicSubAffixAvatarValueRow : public ::System::Object
	{
	public:
		::System::Single BreakDamage; // 0x10
		::System::Single CriticalDamage; // 0x14
		::System::Single CriticalChance; // 0x18
		::System::Single Attack; // 0x1C
		::System::Single StatusResistance; // 0x20
		::System::Single Speed; // 0x24
		::System::Single HP; // 0x28
		::System::UInt32 AvatarID; // 0x2C
		::System::Single Defence; // 0x30
		::System::Single StatusProbability; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicSubAffixAvatarValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSubAffixAvatarValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
