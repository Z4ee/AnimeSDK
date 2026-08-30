#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorSpeedMultiplyReason_TypeDefinitionIndex = 57176;

	enum class AnimatorSpeedMultiplyReason : ::System::Int32
	{
		BaseSpeed = 0,
		AdventureMoveState = 1,
		StoryMoveState = 2,
		FreezeFeature = 3,
		TimeLock = 4,
		Puzzle = 5,
		GroupControl = 6,
		FreezeDie = 7,
		StaticFrame = 8,
		Count = 9,
	};
}
