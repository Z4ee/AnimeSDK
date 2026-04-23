#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_METHOD_3_33BEC7301AA7004E_OFFSET UNITYSDK_OFFSET(0x18D3CBF0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_METHOD_3_C225DB6AC2A032C7_OFFSET UNITYSDK_OFFSET(0x18D350C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnBattleCountConfig_TypeDefinitionIndex = 17081;

	class RogueModifierExecuteActionOnBattleCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33BEC7301AA7004E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_METHOD_3_33BEC7301AA7004E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C225DB6AC2A032C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_METHOD_3_C225DB6AC2A032C7_OFFSET))(a1, a2);
		}
	};
}
