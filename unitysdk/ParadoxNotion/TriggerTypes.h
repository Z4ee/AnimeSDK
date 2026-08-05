#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int TriggerTypes_TypeDefinitionIndex = 30355;

	enum class TriggerTypes : ::System::Int32
	{
		TriggerExit = 1,
		TriggerStay = 2,
		TriggerEnter = 0,
	};
}
