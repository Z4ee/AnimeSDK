#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int MotionConstraints_TypeDefinitionIndex = 37275;

	enum class MotionConstraints : ::System::Int32
	{
		None = 0,
		FreezePositionX = 1,
		FreezePositionY = 2,
		FreezePositionZ = 4,
		FreezeRotationX = 8,
		FreezeRotationY = 16,
		FreezeRotationZ = 32,
	};
}
