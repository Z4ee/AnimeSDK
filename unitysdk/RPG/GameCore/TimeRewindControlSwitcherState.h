#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindControlSwitcherState_TypeDefinitionIndex = 52990;

	enum class TimeRewindControlSwitcherState : ::System::Int32
	{
		Lock = 0,
		Close = 1,
		Open = 2,
	};
}
