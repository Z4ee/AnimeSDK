#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int TriggerTypes_TypeDefinitionIndex = 29156;

	enum class TriggerTypes : ::System::Int32
	{
		TriggerStay = 2,
		TriggerExit = 1,
		TriggerEnter = 0,
	};
}
