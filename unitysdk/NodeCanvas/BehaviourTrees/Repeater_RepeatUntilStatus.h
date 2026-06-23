#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_RepeatUntilStatus_TypeDefinitionIndex = 30182;

	enum class Repeater_RepeatUntilStatus : ::System::Int32
	{
		Success = 1,
		Failure = 0,
	};
}
