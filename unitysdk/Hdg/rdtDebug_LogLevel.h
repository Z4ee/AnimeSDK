#pragma once
#include "unitysdk/unitysdk.h"

namespace Hdg
{
	inline static constexpr unsigned int rdtDebug_LogLevel_TypeDefinitionIndex = 45174;

	enum class rdtDebug_LogLevel : ::System::Int32
	{
		Debug = 0,
		Info = 1,
		Warning = 2,
		Error = 3,
	};
}
