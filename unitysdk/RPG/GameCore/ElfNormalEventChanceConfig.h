#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFNORMALEVENTCHANCECONFIG_METHOD_2_1FB6778FA88C16A1_OFFSET UNITYSDK_OFFSET(0x196DB590)
#define RPG_GAMECORE_ELFNORMALEVENTCHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196DB760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfNormalEventChanceConfig_TypeDefinitionIndex = 17569;

	class ElfNormalEventChanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single EventGenChanceBase; // 0x10
		::RPG::GameCore::RestaurantEmployeeAbility Ability; // 0x14
		::System::Single EventGenChanceAdd; // 0x18
		::System::Single EventGenChanceReset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFNORMALEVENTCHANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1FB6778FA88C16A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfNormalEventChanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfNormalEventChanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFNORMALEVENTCHANCECONFIG_METHOD_2_1FB6778FA88C16A1_OFFSET))(a1, a2);
		}
	};
}
