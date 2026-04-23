#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_01DD31E93F43D2DE_OFFSET UNITYSDK_OFFSET(0x18D3C670)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_666FE5BB922D17D7_OFFSET UNITYSDK_OFFSET(0x18D34720)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D346D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterRogueBattleConfig_TypeDefinitionIndex = 17040;

	class RogueModifierExecuteActionAfterRogueBattleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_01DD31E93F43D2DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_01DD31E93F43D2DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_666FE5BB922D17D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_METHOD_3_666FE5BB922D17D7_OFFSET))(a1, a2);
		}
	};
}
