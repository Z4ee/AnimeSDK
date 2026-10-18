#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PreReleaseScheduleState_TypeDefinitionIndex = 66705;

	enum class PreReleaseScheduleState : ::System::Int32
	{
		None = 0,
		NotStarted = 1,
		InSchedule = 2,
		Expired = 3,
	};
}
