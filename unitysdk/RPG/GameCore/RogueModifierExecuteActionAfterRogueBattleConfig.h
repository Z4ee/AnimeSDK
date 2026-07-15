#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_22EE5B58C8805F93_OFFSET UNITYSDK_OFFSET(0x1CFBFAE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_666FE5BB922D17D7_OFFSET UNITYSDK_OFFSET(0x1CFBFB30)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterRogueBattleConfig_TypeDefinitionIndex = 17215;

	class RogueModifierExecuteActionAfterRogueBattleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22EE5B58C8805F93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_22EE5B58C8805F93_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_666FE5BB922D17D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_666FE5BB922D17D7_OFFSET))(a1, a2);
		}
	};
}
