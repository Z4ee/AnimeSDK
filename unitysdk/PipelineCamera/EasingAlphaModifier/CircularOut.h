#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_DODERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1D4CEB60)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1D4CEAE0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0x9F0590)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0x9F04D0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT__PROCESS_OFFSET UNITYSDK_OFFSET(0x9F0410)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int CircularOut_TypeDefinitionIndex = 37719;

	struct alignas(1) CircularOut
	{
		::System::Single _Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT__PROCESS_OFFSET))(this, alpha);
		}

		static ::System::Single DoProcess(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_DOPROCESS_OFFSET))(alpha);
		}

		static ::System::Single DoDerivative(::System::Single alpha)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_DODERIVATIVE_OFFSET))(alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_CIRCULAROUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
