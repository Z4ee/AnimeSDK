#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICMAINAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C9DD30)
#define RPG_GAMECORE_RELICMAINAFFIXCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18C9E460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixConfigRow_TypeDefinitionIndex = 13832;

	class RelicMainAffixConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BaseValue; // 0x10
		::RPG::GameCore::FixPoint LevelAdd; // 0x18
		::RPG::GameCore::AvatarPropertyType Property; // 0x20
		::System::UInt32 AffixID; // 0x24
		::System::UInt32 GroupID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicMainAffixConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicMainAffixConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
