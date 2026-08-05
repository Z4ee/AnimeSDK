#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopTiming_TypeDefinitionIndex = 31841;

	enum class PlayerLoopTiming : ::System::Int32
	{
		Initialization = 0,
		LastInitialization = 1,
		EarlyUpdate = 2,
		LastEarlyUpdate = 3,
		FixedUpdate = 4,
		LastFixedUpdate = 5,
		PreUpdate = 6,
		LastPreUpdate = 7,
		Update = 8,
		LastUpdate = 9,
		PreLateUpdate = 10,
		LastPreLateUpdate = 11,
		PostLateUpdate = 12,
		LastPostLateUpdate = 13,
	};
}
