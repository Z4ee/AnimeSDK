#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_LogMode_TypeDefinitionIndex = 30300;

	enum class DebugLogText_LogMode : ::System::Int32
	{
		Warning = 1,
		Log = 0,
		Error = 2,
	};
}
