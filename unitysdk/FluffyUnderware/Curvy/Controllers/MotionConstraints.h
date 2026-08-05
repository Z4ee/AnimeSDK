#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MotionConstraints_TypeDefinitionIndex = 39648;

	enum class MotionConstraints : ::System::Int32
	{
		FreezePositionZ = 4,
		None = 0,
		FreezeRotationY = 16,
		FreezeRotationZ = 32,
		FreezeRotationX = 8,
		FreezePositionY = 2,
		FreezePositionX = 1,
	};
}
