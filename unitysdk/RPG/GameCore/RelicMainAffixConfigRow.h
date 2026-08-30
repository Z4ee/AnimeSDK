#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICMAINAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB87960)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB88060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixConfigRow_TypeDefinitionIndex = 14468;

	class RelicMainAffixConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BaseValue; // 0x10
		::System::UInt32 AffixID; // 0x18
		::RPG::GameCore::FixPoint LevelAdd; // 0x20
		::System::UInt32 GroupID; // 0x28
		::RPG::GameCore::AvatarPropertyType Property; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicMainAffixConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicMainAffixConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
