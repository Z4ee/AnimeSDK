#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskStatus_TypeDefinitionIndex = 28533;

	enum class UniTaskStatus : ::System::Int32
	{
		Pending = 0,
		Succeeded = 1,
		Faulted = 2,
		Canceled = 3,
	};
}
