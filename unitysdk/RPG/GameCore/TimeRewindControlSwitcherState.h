#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindControlSwitcherState_TypeDefinitionIndex = 57643;

	enum class TimeRewindControlSwitcherState : ::System::Int32
	{
		Lock = 0,
		Close = 1,
		Open = 2,
	};
}
