#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TargetComponent_TypeDefinitionIndex = 39023;

	enum class TargetComponent : ::System::Int32
	{
		KinematicRigidbody = 1,
		KinematicRigidbody2D = 2,
		Transform = 0,
	};
}
