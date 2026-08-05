#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F79C340)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET UNITYSDK_OFFSET(0x1F79BD40)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL_INTEGRALINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F79BB80)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F79C370)

namespace Foundation
{
	inline static constexpr unsigned int Extension_AnimationCurveDetail_HermiteInterval_TypeDefinitionIndex = 8589;

	class Extension_AnimationCurveDetail_HermiteInterval : public ::System::Object
	{
	public:
		::Foundation::Unreal::Interval_1<::System::Single> _timeInterval; // 0x10
		::System::Single _integralZeroCache; // 0x20
		::System::Single _integralOneCache; // 0x24
		::Foundation::Function::FixedPolynomial _derivativePolynomial; // 0x28
		::Foundation::Function::FixedPolynomial _timeTransform; // 0x4C
		::Foundation::Function::FixedPolynomial _evaluatePolynomial; // 0x70
		::Foundation::Function::FixedPolynomial _integralPolynomial; // 0x94

		::System::Void _ctor(::UnityEngine::Keyframe& lhs, ::UnityEngine::Keyframe& rhs, ::System::Boolean inclusiveRight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL__CTOR_OFFSET))(this, lhs, rhs, inclusiveRight);
		}

		::System::Single IntegralInternal(::System::Single curveTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL_INTEGRALINTERNAL_OFFSET))(this, curveTime);
		}

		::System::Single Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Integral(::Foundation::Unreal::Interval_1<::System::Single>& interval)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET))(this, interval);
		}

		::System::Boolean Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Contains(::System::Single curveTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_HERMITEINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET))(this, curveTime);
		}
	};
}
