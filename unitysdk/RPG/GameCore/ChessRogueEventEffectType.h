#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueEventEffectType_TypeDefinitionIndex = 14173;

	enum class ChessRogueEventEffectType : ::System::Int32
	{
		None = 0,
		Move = 1,
	};
}
