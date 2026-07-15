#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueEventTriggerType_TypeDefinitionIndex = 14172;

	enum class ChessRogueEventTriggerType : ::System::Int32
	{
		None = 0,
		EnterCell = 1,
	};
}
