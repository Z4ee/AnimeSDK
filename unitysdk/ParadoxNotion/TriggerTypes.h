#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int TriggerTypes_TypeDefinitionIndex = 27555;

	enum class TriggerTypes : ::System::Int32
	{
		TriggerEnter = 0,
		TriggerStay = 2,
		TriggerExit = 1,
	};
}
