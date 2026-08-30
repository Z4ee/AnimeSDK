#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachState_TypeDefinitionIndex = 42791;

	enum class WhenEachState : ::System::Byte
	{
		NotRunning = 0x0,
		Running = 0x1,
		Completed = 0x2,
	};
}
