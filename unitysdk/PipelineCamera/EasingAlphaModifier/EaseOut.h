#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_DODERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1DF28620)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1DF28590)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA4CF90)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA4CEB0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x55FE60)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int EaseOut_TypeDefinitionIndex = 37713;

	struct alignas(4) EaseOut
	{
		::System::Single _exp; // 0x10

		::System::Void _ctor(::System::Single exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT__CTOR_OFFSET))(this, exp);
		}

		static ::System::Single DoProcess(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_DOPROCESS_OFFSET))(alpha, exp);
		}

		static ::System::Single DoDerivative(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_DODERIVATIVE_OFFSET))(alpha, exp);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEOUT_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
