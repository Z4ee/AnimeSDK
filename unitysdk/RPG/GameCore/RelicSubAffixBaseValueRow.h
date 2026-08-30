#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RELICSUBAFFIXBASEVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB8A6D0)
#define RPG_GAMECORE_RELICSUBAFFIXBASEVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8A860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSubAffixBaseValueRow_TypeDefinitionIndex = 10865;

	class RelicSubAffixBaseValueRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RelicAffixType Type; // 0x10
		::RPG::GameCore::AvatarPropertyType RelicSubAffix; // 0x14
		::System::Single BaseValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXBASEVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RelicSubAffixBaseValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RelicSubAffixBaseValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXBASEVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
