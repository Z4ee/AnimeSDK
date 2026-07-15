#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FillInputActionPriority_TypeDefinitionIndex = 56388;

	enum class FillInputActionPriority : ::System::Int32
	{
		CommandRobot = 1,
		Fear = 2,
		Puzzle = 3,
		TrackCamera = 4,
		ForceMoveDirection = 5,
	};
}
