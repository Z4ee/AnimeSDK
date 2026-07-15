#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueUtil_DialogueTriggerReason_TypeDefinitionIndex = 54519;

	enum class DialogueUtil_DialogueTriggerReason : ::System::Int32
	{
		Undefined = 0,
		First = 1,
		Talk = 2,
		Mission = 3,
	};
}
