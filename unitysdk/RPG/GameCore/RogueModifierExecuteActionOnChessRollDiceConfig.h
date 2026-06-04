#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_METHOD_3_2B0D0BF0FC74FD96_OFFSET UNITYSDK_OFFSET(0x19B51000)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_METHOD_3_A52DF3B8B8D1967F_OFFSET UNITYSDK_OFFSET(0x19B5C8A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B50FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnChessRollDiceConfig_TypeDefinitionIndex = 17057;

	class RogueModifierExecuteActionOnChessRollDiceConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A52DF3B8B8D1967F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_METHOD_3_A52DF3B8B8D1967F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2B0D0BF0FC74FD96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_METHOD_3_2B0D0BF0FC74FD96_OFFSET))(a1, a2);
		}
	};
}
