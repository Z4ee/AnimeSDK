#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EEventTriggerResult_TypeDefinitionIndex = 12840;

	enum class EEventTriggerResult : ::System::Int16
	{
		Trigger = 1,
		NotTrigger = 0,
		Finish = 2,
		All = 3,
		NotFinish = -1,
	};
}
