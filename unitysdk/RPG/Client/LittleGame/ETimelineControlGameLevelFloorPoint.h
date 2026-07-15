#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ETimelineControlGameLevelFloorPoint_TypeDefinitionIndex = 40342;

	enum class ETimelineControlGameLevelFloorPoint : ::System::Int32
	{
		TopCenter = 0,
		TopForward = 2,
		TopRight = 4,
		TopBack = 6,
		TopLeft = 8,
		BottomCenter = 1,
		BottomForward = 3,
		BottomRight = 5,
		BottomBack = 7,
		BottomLeft = 9,
	};
}
