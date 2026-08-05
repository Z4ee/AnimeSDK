#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventTriggerResult_TypeDefinitionIndex = 13606;

	enum class EEventTriggerResult : ::System::Int16
	{
		NotTrigger = 0,
		NotFinish = -1,
		Finish = 2,
		All = 3,
		Trigger = 1,
	};
}
