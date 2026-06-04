#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockFaceEmotionMoveDirection_TypeDefinitionIndex = 23238;

	enum class ClockFaceEmotionMoveDirection : ::System::Int32
	{
		Near = 0,
		Clockwise = 1,
		Counterclockwise = 2,
	};
}
