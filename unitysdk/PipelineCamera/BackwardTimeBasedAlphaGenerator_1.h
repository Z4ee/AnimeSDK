#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/TimeBasedAlphaGenerator.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int BackwardTimeBasedAlphaGenerator_1_TypeDefinitionIndex = 36069;

	template <typename T>
	class BackwardTimeBasedAlphaGenerator_1 : public ::PipelineCamera::TimeBasedAlphaGenerator
	{
	public:
		::System::Single _startTimestamp; // 0x0
		::System::Single _duration; // 0x0
		T _forwardAlphaModifier; // 0x0
	};
}
