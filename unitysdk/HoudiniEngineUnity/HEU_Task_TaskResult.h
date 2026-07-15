#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Task_TaskResult_TypeDefinitionIndex = 38445;

	enum class HEU_Task_TaskResult : ::System::Int32
	{
		NONE = 0,
		SUCCESS = 1,
		FAILED = 2,
		KILLED = 3,
	};
}
