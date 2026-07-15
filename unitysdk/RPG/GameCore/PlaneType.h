#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaneType_TypeDefinitionIndex = 10218;

	enum class PlaneType : ::System::Int32
	{
		Unknown = 0,
		Town = 1,
		Maze = 2,
		Train = 3,
		Challenge = 4,
		Rogue = 5,
		Raid = 6,
		AetherDivide = 7,
		TrialActivity = 8,
	};
}
