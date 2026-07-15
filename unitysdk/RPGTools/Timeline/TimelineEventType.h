#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineEventType_TypeDefinitionIndex = 46639;

	enum class TimelineEventType : ::System::Int32
	{
		SetTargetTransform = 0,
		HeightLimited = 1,
		ProcedureBehavior = 2,
	};
}
