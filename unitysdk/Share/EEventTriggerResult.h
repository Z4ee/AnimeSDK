#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventTriggerResult_TypeDefinitionIndex = 16024;

	enum class EEventTriggerResult : ::System::Int16
	{
		Finish = 2,
		NotTrigger = 0,
		NotFinish = -1,
		All = 3,
		Trigger = 1,
	};
}
