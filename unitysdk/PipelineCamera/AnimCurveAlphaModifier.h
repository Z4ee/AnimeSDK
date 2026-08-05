#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_ANIMCURVEALPHAMODIFIER_CURVE_OFFSET UNITYSDK_OFFSET(0x1EECF9A0)
#define PIPELINECAMERA_ANIMCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET UNITYSDK_OFFSET(0xA814C0)
#define PIPELINECAMERA_ANIMCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET UNITYSDK_OFFSET(0xA81450)
#define PIPELINECAMERA_ANIMCURVEALPHAMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace PipelineCamera
{
	inline static constexpr unsigned int AnimCurveAlphaModifier_TypeDefinitionIndex = 38335;

	struct alignas(8) AnimCurveAlphaModifier
	{
		::UnityEngine::AnimationCurve* _animationCurve; // 0x10

		::System::Void _ctor(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ANIMCURVEALPHAMODIFIER__CTOR_OFFSET))(this, curve);
		}

		static ::PipelineCamera::AnimCurveAlphaModifier Curve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::PipelineCamera::AnimCurveAlphaModifier(*)(::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ANIMCURVEALPHAMODIFIER_CURVE_OFFSET))(curve);
		}

		::System::Single PipelineCamera_IAlphaModifier_Process(::System::Single alpha)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ANIMCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_PROCESS_OFFSET))(this, alpha);
		}

		::System::Single PipelineCamera_IAlphaModifier_Derivative(::System::Single alpha, ::System::Single deltaStep)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_ANIMCURVEALPHAMODIFIER_PIPELINECAMERA_IALPHAMODIFIER_DERIVATIVE_OFFSET))(this, alpha, deltaStep);
		}
	};
}
