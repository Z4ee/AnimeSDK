#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int DelayType_TypeDefinitionIndex = 42774;

	enum class DelayType : ::System::Int32
	{
		DeltaTime = 0,
		UnscaledDeltaTime = 1,
		Realtime = 2,
	};
}
