#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19AC1800)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC20A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixAvatarValueRow_TypeDefinitionIndex = 10474;

	class RelicMainAffixAvatarValueRow : public ::System::Object
	{
	public:
		::System::Single DamageAddedRatio; // 0x10
		::System::Single BreakDamage; // 0x14
		::System::Single HealRatio; // 0x18
		::System::Single SPRatio; // 0x1C
		::System::Single CriticalChance; // 0x20
		::System::UInt32 AvatarID; // 0x24
		::System::Single StatusProbability; // 0x28
		::System::Single HP; // 0x2C
		::System::Single Defence; // 0x30
		::System::Single CriticalDamage; // 0x34
		::System::Single Attack; // 0x38
		::System::Single Speed; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicMainAffixAvatarValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicMainAffixAvatarValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
