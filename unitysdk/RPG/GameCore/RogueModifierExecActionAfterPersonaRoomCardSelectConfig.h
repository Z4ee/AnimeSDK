#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_METHOD_3_2100775FC6C41546_OFFSET UNITYSDK_OFFSET(0x1762E8B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_METHOD_3_B867A8352294F1EF_OFFSET UNITYSDK_OFFSET(0x1762E7E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762E860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionAfterPersonaRoomCardSelectConfig_TypeDefinitionIndex = 16378;

	class RogueModifierExecActionAfterPersonaRoomCardSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B867A8352294F1EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_METHOD_3_B867A8352294F1EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2100775FC6C41546(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionAfterPersonaRoomCardSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONAFTERPERSONAROOMCARDSELECTCONFIG_METHOD_3_2100775FC6C41546_OFFSET))(a1, a2);
		}
	};
}
