#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PuzzleEvent_TypeDefinitionIndex = 23711;

	enum class PuzzleEvent : ::System::Int32
	{
		Finish = 1,
		Reset = 2,
		Quit = 3,
		Fail = 4,
	};
}
