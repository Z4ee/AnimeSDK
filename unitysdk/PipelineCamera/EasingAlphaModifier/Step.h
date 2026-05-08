#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_STEP_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0x9507C0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_STEP_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0x950730)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_STEP__CTOR_OFFSET UNITYSDK_OFFSET(0x950880)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int Step_TypeDefinitionIndex = 36100;

	struct alignas(4) Step
	{
		::System::Single _steps; // 0x10

		::System::Void _ctor(::System::Int32 steps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_STEP__CTOR_OFFSET))(this, steps);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_STEP_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_STEP_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
