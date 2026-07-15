#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockEntityStreamingReason_TypeDefinitionIndex = 54690;

	enum class LockEntityStreamingReason : ::System::Int32
	{
		Default = 0,
		StartPuzzle = 1,
		SpecialWayPath = 2,
	};
}
