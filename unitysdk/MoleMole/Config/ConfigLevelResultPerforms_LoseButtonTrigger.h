#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseButtonTrigger_TypeDefinitionIndex = 70814;

	enum class ConfigLevelResultPerforms_LoseButtonTrigger : ::System::Int32
	{
		Replay = 2,
		Rewind = 1,
		StartCount = 5,
		Init = 4,
		CountDown_Tick = 6,
		Retreat = 0,
		Analyze = 3,
		CountDown_TimeOut = 7,
	};
}
