#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Function/FixedPolynomial.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_BUILDCONVERTERFROMUTOT_OFFSET UNITYSDK_OFFSET(0x1F0CAFC0)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1F0CC9D0)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET UNITYSDK_OFFSET(0x1F0CB1A0)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_INTEGRALINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F0CA990)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CCA00)

namespace Foundation
{
	inline static constexpr unsigned int Extension_AnimationCurveDetail_BezierInterval_TypeDefinitionIndex = 8587;

	class Extension_AnimationCurveDetail_BezierInterval : public ::System::Object
	{
	public:
		::System::Single _integralZeroCache; // 0x10
		::Foundation::Function::FixedPolynomial _converterDerivative; // 0x14
		::Foundation::Function::FixedPolynomial _integralPolynomial; // 0x38
		::System::Single _rhsInWeight; // 0x5C
		::Foundation::Function::FixedPolynomial _bezierDerivative; // 0x60
		::Foundation::Unreal::Interval_1<::System::Single> _timeInterval; // 0x84
		::System::Single _lhsOutWeight; // 0x94
		::Foundation::Function::FixedPolynomial _timeTransform; // 0x98
		::System::Single _integralOneCache; // 0xBC
		::Foundation::Function::FixedPolynomial _evaluatePolynomial; // 0xC0

		::System::Void _ctor(::UnityEngine::Keyframe& lhs, ::UnityEngine::Keyframe& rhs, ::System::Boolean inclusiveRight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL__CTOR_OFFSET))(this, lhs, rhs, inclusiveRight);
		}

		::System::Single IntegralInternal(::System::Single curveTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_INTEGRALINTERNAL_OFFSET))(this, curveTime);
		}

		static ::Foundation::Function::FixedPolynomial BuildConverterFromUToT(::System::Single leftOutWeight, ::System::Single rightInWeight)
		{
			return ((::Foundation::Function::FixedPolynomial(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_BUILDCONVERTERFROMUTOT_OFFSET))(leftOutWeight, rightInWeight);
		}

		::System::Single Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Integral(::Foundation::Unreal::Interval_1<::System::Single>& interval)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET))(this, interval);
		}

		::System::Boolean Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Contains(::System::Single curveTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_BEZIERINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET))(this, curveTime);
		}
	};
}
