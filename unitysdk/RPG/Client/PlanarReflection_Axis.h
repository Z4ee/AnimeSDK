#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflection_Axis_TypeDefinitionIndex = 67024;

	enum class PlanarReflection_Axis : ::System::Int32
	{
		X = 0,
		Y = 1,
		Z = 2,
		NegX = 3,
		NegY = 4,
		NegZ = 5,
	};
}
