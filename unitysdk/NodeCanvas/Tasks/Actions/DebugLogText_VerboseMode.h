#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_VerboseMode_TypeDefinitionIndex = 29977;

	enum class DebugLogText_VerboseMode : ::System::Int32
	{
		LogAndDisplayLabel = 0,
		DisplayLabelOnly = 2,
		LogOnly = 1,
	};
}
