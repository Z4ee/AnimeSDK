#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int InjectPlayerLoopTimings_TypeDefinitionIndex = 31842;

	enum class InjectPlayerLoopTimings : ::System::Int32
	{
		All = 16383,
		Standard = 13653,
		Minimum = 8464,
		Initialization = 1,
		LastInitialization = 2,
		EarlyUpdate = 4,
		LastEarlyUpdate = 8,
		FixedUpdate = 16,
		LastFixedUpdate = 32,
		PreUpdate = 64,
		LastPreUpdate = 128,
		Update = 256,
		LastUpdate = 512,
		PreLateUpdate = 1024,
		LastPreLateUpdate = 2048,
		PostLateUpdate = 4096,
		LastPostLateUpdate = 8192,
	};
}
