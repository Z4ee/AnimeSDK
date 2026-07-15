#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStoryMoveData_MoveStopMode_TypeDefinitionIndex = 46228;

	enum class CharacterStoryMoveData_MoveStopMode : ::System::Int32
	{
		DoNothing = 0,
		Scale = 1,
		Lerp = 2,
		ScaleAndLerp = 3,
		NoStop = 4,
		DoNothingBetter = 5,
	};
}
