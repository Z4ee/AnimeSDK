#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int BlockVisionState_TypeDefinitionIndex = 68036;

	enum class BlockVisionState : ::System::Int32
	{
		Init = 0,
		InVision = 1,
		TransitionInVision = 2,
		OutVision = 3,
		LeaveOutVision = 4,
		Hide = 5,
		PreFocus = 6,
		Focus = 7,
	};
}
