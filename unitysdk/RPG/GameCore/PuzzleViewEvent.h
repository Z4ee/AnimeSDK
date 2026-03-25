#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleViewEvent_TypeDefinitionIndex = 20162;

	enum class PuzzleViewEvent : ::System::Int32
	{
		FinishSound = 1,
	};
}
