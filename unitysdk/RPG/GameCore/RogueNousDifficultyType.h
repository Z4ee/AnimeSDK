#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDifficultyType_TypeDefinitionIndex = 14135;

	enum class RogueNousDifficultyType : ::System::Int32
	{
		None = 0,
		AttributeDifficulty = 1,
		AdditionalDifficulty = 2,
	};
}
