#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int Logger_StateTreeLogInstanceMode_TypeDefinitionIndex = 31589;

	enum class Logger_StateTreeLogInstanceMode : ::System::Int32
	{
		SpecificInstance = 0,
		NoneInstance = -1,
		AllInstance = -2,
	};
}
