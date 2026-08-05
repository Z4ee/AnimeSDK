#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_DODERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1E9159F0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1E915980)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA431E0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA43130)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int SinIn_TypeDefinitionIndex = 38370;

	struct alignas(1) SinIn
	{
		static ::System::Single DoProcess(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_DOPROCESS_OFFSET))(alpha);
		}

		static ::System::Single DoDerivative(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_DODERIVATIVE_OFFSET))(alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_SININ_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
