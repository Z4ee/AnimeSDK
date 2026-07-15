#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Task_TaskStatus_TypeDefinitionIndex = 38444;

	enum class HEU_Task_TaskStatus : ::System::Int32
	{
		NONE = 0,
		PENDING_START = 1,
		STARTED = 2,
		REQUIRE_UPDATE = 3,
		PENDING_COMPLETE = 4,
		COMPLETED = 5,
		UNUSED = 6,
	};
}
