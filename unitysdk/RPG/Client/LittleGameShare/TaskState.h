#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int TaskState_TypeDefinitionIndex = 35459;

	enum class TaskState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Success = 2,
		Fail = 3,
	};
}
