#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchorState_TypeDefinitionIndex = 70683;

	enum class AlleyPackAnchorState : ::System::Int32
	{
		None = 0,
		Available = 1,
		Occupied = 2,
		Disable = 3,
		WaitingAttach = 4,
	};
}
