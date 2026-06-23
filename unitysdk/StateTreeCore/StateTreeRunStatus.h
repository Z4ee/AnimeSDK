#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeRunStatus_TypeDefinitionIndex = 30934;

	enum class StateTreeRunStatus : ::System::Byte
	{
		Unset = 0x0,
		Running = 0x1,
		Failed = 0x2,
		Succeeded = 0x3,
		Stopped = 0x4,
	};
}
