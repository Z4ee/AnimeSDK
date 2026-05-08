#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_LogMode_TypeDefinitionIndex = 27528;

	enum class DebugLogText_LogMode : ::System::Int32
	{
		Log = 0,
		Error = 2,
		Warning = 1,
	};
}
