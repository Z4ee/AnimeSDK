#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideDataStatus_TypeDefinitionIndex = 58648;

	enum class ActivityAetherDivideDataStatus : ::System::Int32
	{
		UnKnow = 0,
		Locked = 1,
		IsStart = 2,
		Completed = 3,
	};
}
