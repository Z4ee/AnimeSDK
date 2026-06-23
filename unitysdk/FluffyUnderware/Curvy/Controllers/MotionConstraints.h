#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MotionConstraints_TypeDefinitionIndex = 39043;

	enum class MotionConstraints : ::System::Int32
	{
		FreezeRotationX = 8,
		FreezePositionZ = 4,
		FreezePositionY = 2,
		None = 0,
		FreezeRotationZ = 32,
		FreezeRotationY = 16,
		FreezePositionX = 1,
	};
}
