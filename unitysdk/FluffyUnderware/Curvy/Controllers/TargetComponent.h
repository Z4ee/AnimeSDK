#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TargetComponent_TypeDefinitionIndex = 37283;

	enum class TargetComponent : ::System::Int32
	{
		Transform = 0,
		KinematicRigidbody = 1,
		KinematicRigidbody2D = 2,
	};
}
