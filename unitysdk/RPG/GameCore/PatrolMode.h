#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PatrolMode_TypeDefinitionIndex = 23596;

	enum class PatrolMode : ::System::Int32
	{
		SameTask = 0,
		PerWaypointTask = 1,
	};
}
