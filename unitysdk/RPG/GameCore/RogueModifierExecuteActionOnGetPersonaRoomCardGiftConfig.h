#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_920FF09131C0D687_OFFSET UNITYSDK_OFFSET(0x1CFC0670)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_C67977B3D6BF7303_OFFSET UNITYSDK_OFFSET(0x1CFC0620)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig_TypeDefinitionIndex = 17144;

	class RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C67977B3D6BF7303(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_C67977B3D6BF7303_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_920FF09131C0D687(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnGetPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONGETPERSONAROOMCARDGIFTCONFIG_METHOD_3_920FF09131C0D687_OFFSET))(a1, a2);
		}
	};
}
