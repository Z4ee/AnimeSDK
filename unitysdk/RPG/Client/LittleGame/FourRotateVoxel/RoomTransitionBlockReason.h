#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int RoomTransitionBlockReason_TypeDefinitionIndex = 41560;

	enum class RoomTransitionBlockReason : ::System::Int32
	{
		None = 0,
		Rotating = 1,
		Reverting = 2,
		CameraCurve = 4,
		AutoRotating = 8,
		TransitionInProgress = 16,
		TwoDBrickRebinding = 32,
	};
}
