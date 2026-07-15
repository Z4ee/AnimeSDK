#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialSubmitterState_TypeDefinitionIndex = 59050;

	enum class MaterialSubmitterState : ::System::Int32
	{
		Closed = 0,
		Hidden = 1,
		Shown = 2,
		Started = 3,
		Unlocked = 4,
		Submitted = 5,
		Finished = 6,
	};
}
