#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_DODERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1EC12CE0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1EC12C40)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA65830)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA65750)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int ExpoOut_TypeDefinitionIndex = 38377;

	struct alignas(1) ExpoOut
	{
		static ::System::Single DoProcess(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_DOPROCESS_OFFSET))(alpha);
		}

		static ::System::Single DoDerivative(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_DODERIVATIVE_OFFSET))(alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EXPOOUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
