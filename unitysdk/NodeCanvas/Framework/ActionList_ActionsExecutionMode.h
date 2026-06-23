#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ActionList_ActionsExecutionMode_TypeDefinitionIndex = 30249;

	enum class ActionList_ActionsExecutionMode : ::System::Int32
	{
		ActionsRunInParallel = 1,
		ActionsRunInSequence = 0,
	};
}
