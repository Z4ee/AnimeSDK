#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueMainStoryToastType_TypeDefinitionIndex = 14176;

	enum class ChessRogueMainStoryToastType : ::System::Int32
	{
		None = 0,
		Effect = 1,
		Buff = 2,
	};
}
