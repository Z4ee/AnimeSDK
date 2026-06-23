#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeLinkerStatus_TypeDefinitionIndex = 30980;

	enum class StateTreeLinkerStatus : ::System::Int32
	{
		Succeeded = 0,
		Failed = 1,
	};
}
