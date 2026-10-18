#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D955400)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D955B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSubAffixConfigRow_TypeDefinitionIndex = 14635;

	class RelicSubAffixConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BaseValue; // 0x10
		::RPG::GameCore::FixPoint StepValue; // 0x18
		::System::UInt32 StepNum; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 AffixID; // 0x28
		::RPG::GameCore::AvatarPropertyType Property; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicSubAffixConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSubAffixConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
