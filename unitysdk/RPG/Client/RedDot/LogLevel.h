#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int LogLevel_TypeDefinitionIndex = 79170;

	enum class LogLevel : ::System::Int32
	{
		Info = 0,
		Warning = 1,
		Error = 2,
	};
}
