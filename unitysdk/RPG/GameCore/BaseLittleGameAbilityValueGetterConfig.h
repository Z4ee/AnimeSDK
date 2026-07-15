#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_METHOD_2_214B4ACB3746C180_OFFSET UNITYSDK_OFFSET(0x1A3E1170)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_METHOD_2_B66DFCD117707735_OFFSET UNITYSDK_OFFSET(0x1A3E0CC0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E11D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityValueGetterConfig_TypeDefinitionIndex = 20585;

	class BaseLittleGameAbilityValueGetterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B66DFCD117707735(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_METHOD_2_B66DFCD117707735_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_214B4ACB3746C180(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_METHOD_2_214B4ACB3746C180_OFFSET))(a1, a2);
		}
	};
}
