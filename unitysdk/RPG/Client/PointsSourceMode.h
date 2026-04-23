#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PointsSourceMode_TypeDefinitionIndex = 65109;

	enum class PointsSourceMode : ::System::Int32
	{
		Dynamic = 0,
		Static = 1,
	};
}
