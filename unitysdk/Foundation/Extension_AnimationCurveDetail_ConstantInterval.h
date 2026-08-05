#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CONSTANTINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1FC0B870)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CONSTANTINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET UNITYSDK_OFFSET(0x1FC0B780)
#define FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CONSTANTINTERVAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC0B8A0)

namespace Foundation
{
	inline static constexpr unsigned int Extension_AnimationCurveDetail_ConstantInterval_TypeDefinitionIndex = 8588;

	class Extension_AnimationCurveDetail_ConstantInterval : public ::System::Object
	{
	public:
		::System::Single _value; // 0x10
		::Foundation::Unreal::Interval_1<::System::Single> _timeInterval; // 0x14

		::System::Void _ctor(::UnityEngine::Keyframe& lhs, ::UnityEngine::Keyframe& rhs, ::System::Boolean inclusiveRight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe&, ::UnityEngine::Keyframe&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CONSTANTINTERVAL__CTOR_OFFSET))(this, lhs, rhs, inclusiveRight);
		}

		::System::Single Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Integral(::Foundation::Unreal::Interval_1<::System::Single>& interval)
		{
			return ((::System::Single(*)(::PVOID, ::Foundation::Unreal::Interval_1<::System::Single>&))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CONSTANTINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_INTEGRAL_OFFSET))(this, interval);
		}

		::System::Boolean Foundation_Extension_AnimationCurveDetail_IKeyFrameInterval_Contains(::System::Single curveTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_CONSTANTINTERVAL_FOUNDATION_EXTENSION_ANIMATIONCURVEDETAIL_IKEYFRAMEINTERVAL_CONTAINS_OFFSET))(this, curveTime);
		}
	};
}
