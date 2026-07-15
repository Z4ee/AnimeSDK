#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueUtil_TalkSourceType_TypeDefinitionIndex = 54518;

	enum class DialogueUtil_TalkSourceType : ::System::Int32
	{
		NPC = 0,
		Prop = 1,
		NPCMonster = 2,
	};
}
