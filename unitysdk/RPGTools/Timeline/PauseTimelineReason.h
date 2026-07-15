#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PauseTimelineReason_TypeDefinitionIndex = 46708;

	enum class PauseTimelineReason : ::System::Int32
	{
		Default = 1,
		LockModule = 2,
		PerformanceSimpleTalk = 4,
		PerformanceDebate = 8,
		PerformanceGamePlay = 16,
		PerformanceScreenTransfer = 32,
	};
}
