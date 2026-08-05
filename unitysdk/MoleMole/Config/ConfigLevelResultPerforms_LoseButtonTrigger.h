#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseButtonTrigger_TypeDefinitionIndex = 73020;

	enum class ConfigLevelResultPerforms_LoseButtonTrigger : ::System::Int32
	{
		Init = 4,
		CountDown_Tick = 6,
		Analyze = 3,
		CountDown_TimeOut = 7,
		Rewind = 1,
		Retreat = 0,
		StartCount = 5,
		Replay = 2,
	};
}
