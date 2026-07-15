#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TrajectoryBehavior_Axis_TypeDefinitionIndex = 67405;

	enum class Effect_TrajectoryBehavior_Axis : ::System::Int32
	{
		None = 0,
		X = 1,
		Y = 2,
		Z = 4,
	};
}
