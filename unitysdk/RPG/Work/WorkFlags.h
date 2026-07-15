#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Work
{
	inline static constexpr unsigned int WorkFlags_TypeDefinitionIndex = 41395;

	enum class WorkFlags : ::System::Int32
	{
		None = 0,
		StartImmediately = 1,
		UseWorkerThread = 2,
		ExecuteWhenDependencyFail = 4,
		IgnoreByWorkCounter = 8,
	};
}
