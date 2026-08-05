#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_DODERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1EBCB260)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1EBCB1E0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA5F8B0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA5F7F0)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int CircularIn_TypeDefinitionIndex = 38379;

	struct alignas(1) CircularIn
	{
		static ::System::Single DoProcess(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_DOPROCESS_OFFSET))(alpha);
		}

		static ::System::Single DoDerivative(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_DODERIVATIVE_OFFSET))(alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULARIN_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
