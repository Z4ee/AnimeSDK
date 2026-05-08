#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_DODERIVATIVE_OFFSET UNITYSDK_OFFSET(0x1B6C6F70)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_DOPROCESS_OFFSET UNITYSDK_OFFSET(0x1B6C6F00)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0x987910)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0x9879D0)
#define PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x2E7CE0)

namespace PipelineCamera::EasingAlphaModifier
{
	inline static constexpr unsigned int EaseIn_TypeDefinitionIndex = 36104;

	struct alignas(4) EaseIn
	{
		::System::Single _exp; // 0x10

		::System::Void _ctor(::System::Single exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN__CTOR_OFFSET))(this, exp);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		static ::System::Single DoProcess(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_DOPROCESS_OFFSET))(alpha, exp);
		}

		static ::System::Single DoDerivative(::System::Single alpha, ::System::Single exp)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EASINGALPHAMODIFIER_EASEIN_DODERIVATIVE_OFFSET))(alpha, exp);
		}
	};
}
