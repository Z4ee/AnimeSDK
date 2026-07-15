#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Logging
{
	inline static constexpr unsigned int LogLevel_TypeDefinitionIndex = 43469;

	enum class LogLevel : ::System::Int32
	{
		Off = 0,
		Fatal = 100,
		Error = 200,
		Warning = 300,
		Info = 400,
		Verbose = 500,
		VeryVerbose = 600,
	};
}
