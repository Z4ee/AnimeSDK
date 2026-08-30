#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_METHOD_3_09BEE4EE18EDE670_OFFSET UNITYSDK_OFFSET(0x1EEF7B90)
#define RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_METHOD_3_FE7B22D4AC2C5C74_OFFSET UNITYSDK_OFFSET(0x1EEF7B40)
#define RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierCavitySystemModelConfig_TypeDefinitionIndex = 17541;

	class RogueModifierCavitySystemModelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE7B22D4AC2C5C74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierCavitySystemModelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierCavitySystemModelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_METHOD_3_FE7B22D4AC2C5C74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_09BEE4EE18EDE670(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierCavitySystemModelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierCavitySystemModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCAVITYSYSTEMMODELCONFIG_METHOD_3_09BEE4EE18EDE670_OFFSET))(a1, a2);
		}
	};
}
