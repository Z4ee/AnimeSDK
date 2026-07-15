#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger
{
	inline static constexpr unsigned int DefaultTabs_TypeDefinitionIndex = 36418;

	enum class DefaultTabs : ::System::Int32
	{
		SystemInformation = 0,
		CommonOptions = 1,
		Console = 2,
		Profiler = 3,
		BugReporter = 4,
		AdventureOptions = 5,
		BattleOptions = 6,
		StoryOptions = 7,
		PerformanceInformation = 8,
		NetworkOptions = 9,
		CloudOptions = 10,
		PreferredOptions = 12,
		MultiplayerOptions = 13,
		BattlePerformOptions = 14,
	};
}
