#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CircleDetectDirection_TypeDefinitionIndex = 67905;

	enum class CircleDetectDirection : ::System::Int32
	{
		CenterToSide = 0,
		Clockwise = 1,
		Counterclockwise = 2,
	};
}
