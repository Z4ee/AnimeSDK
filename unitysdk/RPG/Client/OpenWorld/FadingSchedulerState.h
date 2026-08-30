#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingSchedulerState_TypeDefinitionIndex = 73838;

	enum class FadingSchedulerState : ::System::Int32
	{
		PendingAdd = 0,
		Active = 1,
		ResolvingImmediateFinish = 2,
		Ticking = 3,
		PendingRemove = 4,
		Removed = 5,
	};
}
