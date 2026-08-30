#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RedDot
{
	inline static constexpr unsigned int LogLevel_TypeDefinitionIndex = 78692;

	enum class LogLevel : ::System::Int32
	{
		Normal = 0,
		Warning = 1,
		Error = 2,
	};
}
