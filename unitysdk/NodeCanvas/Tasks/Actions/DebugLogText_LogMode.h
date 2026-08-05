#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_LogMode_TypeDefinitionIndex = 29976;

	enum class DebugLogText_LogMode : ::System::Int32
	{
		Log = 0,
		Warning = 1,
		Error = 2,
	};
}
