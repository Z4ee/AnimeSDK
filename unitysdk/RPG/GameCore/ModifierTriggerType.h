#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierTriggerType_TypeDefinitionIndex = 10231;

	enum class ModifierTriggerType : ::System::Int32
	{
		None = 0,
		EnterChessRogueCell = 1,
		EnterChessRogueRow = 2,
	};
}
