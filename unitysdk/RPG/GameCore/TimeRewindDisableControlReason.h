#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindDisableControlReason_TypeDefinitionIndex = 54908;

	enum class TimeRewindDisableControlReason : ::System::Int32
	{
		Debug = 1,
		TaskDisable = 2,
	};
}
