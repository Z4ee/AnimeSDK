#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindUIControlMode_TypeDefinitionIndex = 58100;

	enum class TimeRewindUIControlMode : ::System::Int32
	{
		Normal = 0,
		Performance = 1,
	};
}
