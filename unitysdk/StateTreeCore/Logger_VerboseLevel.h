#pragma once
#include "unitysdk/unitysdk.h"

namespace StateTreeCore
{
	inline static constexpr unsigned int Logger_VerboseLevel_TypeDefinitionIndex = 30983;

	enum class Logger_VerboseLevel : ::System::Int32
	{
		Ignore = 0,
		Verbose = 1,
		VeryVerbose = 2,
	};
}
