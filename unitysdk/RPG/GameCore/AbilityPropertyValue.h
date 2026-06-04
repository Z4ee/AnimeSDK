#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ABILITYPROPERTYVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193C65F0)
#define RPG_GAMECORE_ABILITYPROPERTYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x193C6740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyValue_TypeDefinitionIndex = 12145;

	class AbilityPropertyValue : public ::System::Object
	{
	public:
		::RPG::GameCore::AbilityProperty PropertyType; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbilityPropertyValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbilityPropertyValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYVALUE_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
