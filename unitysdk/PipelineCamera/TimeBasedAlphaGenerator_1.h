#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/TimeBasedAlphaGenerator.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int TimeBasedAlphaGenerator_1_TypeDefinitionIndex = 37676;

	template <typename T>
	class TimeBasedAlphaGenerator_1 : public ::PipelineCamera::TimeBasedAlphaGenerator
	{
	public:
		::System::Single _startTimestamp; // 0x0
		::System::Single _duration; // 0x0
		T _alphaModifier; // 0x0
	};
}
