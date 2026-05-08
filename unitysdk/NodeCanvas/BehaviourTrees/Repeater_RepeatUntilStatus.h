#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_RepeatUntilStatus_TypeDefinitionIndex = 27692;

	enum class Repeater_RepeatUntilStatus : ::System::Int32
	{
		Failure = 0,
		Success = 1,
	};
}
