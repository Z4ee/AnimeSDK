#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackAnchorViewState_TypeDefinitionIndex = 73983;

	enum class AlleyPackAnchorViewState : ::System::Int32
	{
		Idle = 0,
		Appear = 1,
		Disappear = 2,
		Match = 3,
		Mismatch = 4,
		Select = 5,
		UnSelect = 6,
	};
}
