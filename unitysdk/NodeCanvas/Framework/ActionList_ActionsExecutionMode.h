#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ActionList_ActionsExecutionMode_TypeDefinitionIndex = 30769;

	enum class ActionList_ActionsExecutionMode : ::System::Int32
	{
		ActionsRunInSequence = 0,
		ActionsRunInParallel = 1,
	};
}
