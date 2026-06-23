#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { class TimeBasedAlphaGenerator; }

#define PIPELINECAMERA_TIMEBASEDALPHAGENERATORBUILDER_BACKWARD_OFFSET UNITYSDK_OFFSET(0x1DC31590)
#define PIPELINECAMERA_TIMEBASEDALPHAGENERATORBUILDER_FORWARD_OFFSET UNITYSDK_OFFSET(0x1DC314E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int TimeBasedAlphaGeneratorBuilder_TypeDefinitionIndex = 37678;

	struct alignas(4) TimeBasedAlphaGeneratorBuilder
	{
		::System::Single _startTimestamp; // 0x10
		::System::Single _duration; // 0x14
		::System::Boolean _isForward; // 0x18

		static ::PipelineCamera::TimeBasedAlphaGeneratorBuilder Forward(::System::Single startTimestamp, ::System::Single duration, ::System::Single timeAlpha)
		{
			return ((::PipelineCamera::TimeBasedAlphaGeneratorBuilder(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATORBUILDER_FORWARD_OFFSET))(startTimestamp, duration, timeAlpha);
		}

		static ::PipelineCamera::TimeBasedAlphaGeneratorBuilder Backward(::System::Single currentTimestamp, ::System::Single startTimestamp, ::System::Single forwardStartTimestamp, ::System::Single duration, ::System::Single forwardTimeAlpha)
		{
			return ((::PipelineCamera::TimeBasedAlphaGeneratorBuilder(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TIMEBASEDALPHAGENERATORBUILDER_BACKWARD_OFFSET))(currentTimestamp, startTimestamp, forwardStartTimestamp, duration, forwardTimeAlpha);
		}
	};
}
