#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TaskState_TypeDefinitionIndex = 50536;

	enum class TaskState : ::System::Int32
	{
		Ready = 30583,
		Executing = 34952,
		Success = 39321,
		Fail = 43690,
	};
}
