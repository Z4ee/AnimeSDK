#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineEventArgument_ParamType_TypeDefinitionIndex = 46641;

	enum class TimelineEventArgument_ParamType : ::System::Int32
	{
		Str = 0,
		Int = 1,
		Float = 2,
		Vector3 = 3,
	};
}
