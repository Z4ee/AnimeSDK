#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ResidentActivityState_TypeDefinitionIndex = 59032;

	enum class ResidentActivityState : ::System::Int32
	{
		None = 0,
		Hide = 1,
		Locked = 2,
		PreConditionNotMet = 3,
		Available = 4,
		Guide = 5,
		InProgress = 6,
		Finished = 7,
	};
}
