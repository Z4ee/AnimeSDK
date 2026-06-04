#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_METHOD_3_6746E3C7FBAA991C_OFFSET UNITYSDK_OFFSET(0x19B5D920)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_METHOD_3_A8A0173AAD5C3AF5_OFFSET UNITYSDK_OFFSET(0x19B52CE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B52C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaStyleSelectConfig_TypeDefinitionIndex = 16987;

	class RogueModifierExecuteActionOnPersonaStyleSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6746E3C7FBAA991C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_METHOD_3_6746E3C7FBAA991C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8A0173AAD5C3AF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_METHOD_3_A8A0173AAD5C3AF5_OFFSET))(a1, a2);
		}
	};
}
