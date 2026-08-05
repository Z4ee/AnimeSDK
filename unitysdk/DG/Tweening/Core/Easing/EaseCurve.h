#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define DG_TWEENING_CORE_EASING_EASECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1FACE180)
#define DG_TWEENING_CORE_EASING_EASECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FACE170)

namespace DG::Tweening::Core::Easing
{
	inline static constexpr unsigned int EaseCurve_TypeDefinitionIndex = 28608;

	class EaseCurve : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* _animCurve; // 0x10

		::System::Void _ctor(::UnityEngine::AnimationCurve* animCurve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_EASECURVE__CTOR_OFFSET))(this, animCurve);
		}

		::System::Single Evaluate(::System::Single time, ::System::Single duration, ::System::Single unusedOvershoot, ::System::Single unusedPeriod)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_EASECURVE_EVALUATE_OFFSET))(this, time, duration, unusedOvershoot, unusedPeriod);
		}
	};
}
