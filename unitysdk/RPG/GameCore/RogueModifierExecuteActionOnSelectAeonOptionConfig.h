#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_METHOD_3_3A5323EAFC2C47CF_OFFSET UNITYSDK_OFFSET(0x18D3E890)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_METHOD_3_E6E2779D39337EA6_OFFSET UNITYSDK_OFFSET(0x18D3E960)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3E910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnSelectAeonOptionConfig_TypeDefinitionIndex = 16791;

	class RogueModifierExecuteActionOnSelectAeonOptionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A5323EAFC2C47CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_METHOD_3_3A5323EAFC2C47CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E6E2779D39337EA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnSelectAeonOptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONSELECTAEONOPTIONCONFIG_METHOD_3_E6E2779D39337EA6_OFFSET))(a1, a2);
		}
	};
}
