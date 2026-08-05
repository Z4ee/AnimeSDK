#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int TargetComponent_TypeDefinitionIndex = 39554;

	enum class TargetComponent : ::System::Int32
	{
		KinematicRigidbody = 1,
		Transform = 0,
		KinematicRigidbody2D = 2,
	};
}
