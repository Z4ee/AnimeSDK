#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_LoseButtonTrigger_TypeDefinitionIndex = 65849;

	enum class ConfigLevelResultPerforms_LoseButtonTrigger : ::System::Int32
	{
		Retreat = 0,
		CountDown_TimeOut = 7,
		Analyze = 3,
		Init = 4,
		Replay = 2,
		CountDown_Tick = 6,
		Rewind = 1,
		StartCount = 5,
	};
}
