#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175912A0)
#define RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17591470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixBaseValueRow_TypeDefinitionIndex = 10206;

	class RelicMainAffixBaseValueRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RelicAffixType Type; // 0x10
		::RPG::GameCore::AvatarPropertyType RelicMainAffix; // 0x14
		::System::Single ValuePerLevel; // 0x18
		::System::Single BaseValue; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RelicMainAffixBaseValueRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicMainAffixBaseValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
