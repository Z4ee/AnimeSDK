#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindRaycastType_TypeDefinitionIndex = 58113;

	enum class TimeRewindRaycastType : ::System::Int32
	{
		Sphere = 0,
		Box = 1,
		Capsule = 2,
	};
}
