#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREMOVECONFIG_METHOD_3_5938F297F077F65F_OFFSET UNITYSDK_OFFSET(0x19B52B20)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREMOVECONFIG_METHOD_3_CCDEEC1A29EA71E6_OFFSET UNITYSDK_OFFSET(0x19B5D820)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B52AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardRemoveConfig_TypeDefinitionIndex = 16914;

	class RogueModifierExecuteActionOnPersonaRoomCardRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CCDEEC1A29EA71E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREMOVECONFIG_METHOD_3_CCDEEC1A29EA71E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5938F297F077F65F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDREMOVECONFIG_METHOD_3_5938F297F077F65F_OFFSET))(a1, a2);
		}
	};
}
