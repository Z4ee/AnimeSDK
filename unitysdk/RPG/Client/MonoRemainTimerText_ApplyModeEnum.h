#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimerText_ApplyModeEnum_TypeDefinitionIndex = 72527;

	enum class MonoRemainTimerText_ApplyModeEnum : ::System::Int32
	{
		None = 0,
		Entirety = 1,
		AsParam = 2,
	};
}
