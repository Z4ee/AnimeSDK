#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int LogMessageType_TypeDefinitionIndex = 37136;

	enum class LogMessageType : ::System::Int32
	{
		Info = 0,
		Warning = 1,
		Error = 2,
	};
}
