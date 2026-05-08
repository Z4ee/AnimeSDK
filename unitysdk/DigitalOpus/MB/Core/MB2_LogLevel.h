#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB2_LogLevel_TypeDefinitionIndex = 85033;

	enum class MB2_LogLevel : ::System::Int32
	{
		none = 0,
		error = 1,
		warn = 2,
		info = 3,
		debug = 4,
		trace = 5,
	};
}
