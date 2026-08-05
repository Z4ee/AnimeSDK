#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOINOUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0x9D1CD0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOINOUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0x9D1CC0)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int ExpoInOut_TypeDefinitionIndex = 38378;

	struct alignas(1) ExpoInOut
	{
		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOINOUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOINOUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
