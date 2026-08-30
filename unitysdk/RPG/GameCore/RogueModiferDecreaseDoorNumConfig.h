#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_METHOD_3_79A88E540E1759EB_OFFSET UNITYSDK_OFFSET(0x1EEF7530)
#define RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_METHOD_3_BEA6470C373FACEF_OFFSET UNITYSDK_OFFSET(0x1EEF7580)
#define RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModiferDecreaseDoorNumConfig_TypeDefinitionIndex = 17572;

	class RogueModiferDecreaseDoorNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_79A88E540E1759EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_METHOD_3_79A88E540E1759EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEA6470C373FACEF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModiferDecreaseDoorNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFERDECREASEDOORNUMCONFIG_METHOD_3_BEA6470C373FACEF_OFFSET))(a1, a2);
		}
	};
}
