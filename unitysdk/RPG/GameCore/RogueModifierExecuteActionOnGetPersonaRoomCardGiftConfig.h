#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_50EB6FB34CE4A00E_OFFSET UNITYSDK_OFFSET(0x19B5D120)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_920FF09131C0D687_OFFSET UNITYSDK_OFFSET(0x19B51EE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B51E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig_TypeDefinitionIndex = 16982;

	class RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50EB6FB34CE4A00E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_50EB6FB34CE4A00E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_920FF09131C0D687(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_920FF09131C0D687_OFFSET))(a1, a2);
		}
	};
}
