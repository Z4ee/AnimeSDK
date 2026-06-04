#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEONEBATTLECONFIG_METHOD_3_D837661728E35C16_OFFSET UNITYSDK_OFFSET(0x19B5C2A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEONEBATTLECONFIG_METHOD_3_F276C2F7E5084B4F_OFFSET UNITYSDK_OFFSET(0x19B50580)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEONEBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B50530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterRogueOneBattleConfig_TypeDefinitionIndex = 17052;

	class RogueModifierExecuteActionAfterRogueOneBattleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEONEBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D837661728E35C16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueOneBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueOneBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEONEBATTLECONFIG_METHOD_3_D837661728E35C16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F276C2F7E5084B4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueOneBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueOneBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEONEBATTLECONFIG_METHOD_3_F276C2F7E5084B4F_OFFSET))(a1, a2);
		}
	};
}
