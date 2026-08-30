#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFFOODEVENTCONFIG_METHOD_2_A787CE09D77BAF01_OFFSET UNITYSDK_OFFSET(0x1DB29620)
#define RPG_GAMECORE_ELFFOODEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB297A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFoodEventConfig_TypeDefinitionIndex = 18257;

	class ElfFoodEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::RestaurantEmployeeAbility Ability; // 0x10
		::System::Single Chance; // 0x14
		::System::UInt32 AbilityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFOODEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A787CE09D77BAF01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfFoodEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfFoodEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFOODEVENTCONFIG_METHOD_2_A787CE09D77BAF01_OFFSET))(a1, a2);
		}
	};
}
