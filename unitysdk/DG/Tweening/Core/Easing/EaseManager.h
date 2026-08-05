#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class EaseFunction; }
namespace DG::Tweening { class Tween; }

#define DG_TWEENING_CORE_EASING_EASEMANAGER_EVALUATE_1_OFFSET UNITYSDK_OFFSET(0x1F9CC150)
#define DG_TWEENING_CORE_EASING_EASEMANAGER_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1F9CC100)
#define DG_TWEENING_CORE_EASING_EASEMANAGER_ISFLASHEASE_OFFSET UNITYSDK_OFFSET(0x1F9CDE60)
#define DG_TWEENING_CORE_EASING_EASEMANAGER_TOEASEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1F9CCFC0)

namespace DG::Tweening::Core::Easing
{
	inline static constexpr unsigned int EaseManager_TypeDefinitionIndex = 28606;

	class EaseManager : public ::System::Object
	{
	public:
		// static const ::System::Single _PiOver2; // 0x0
		// static const ::System::Single _TwoPi; // 0x0

		static ::System::Single Evaluate(::DG::Tweening::Tween* t, ::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::DG::Tweening::Tween*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_EASEMANAGER_EVALUATE_OFFSET))(t, time, duration, overshootOrAmplitude, period);
		}

		static ::System::Single Evaluate_1(::DG::Tweening::Ease easeType, ::DG::Tweening::EaseFunction* customEase, ::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::DG::Tweening::Ease, ::DG::Tweening::EaseFunction*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_EASEMANAGER_EVALUATE_1_OFFSET))(easeType, customEase, time, duration, overshootOrAmplitude, period);
		}

		static ::DG::Tweening::EaseFunction* ToEaseFunction(::DG::Tweening::Ease ease)
		{
			return ((::DG::Tweening::EaseFunction*(*)(::DG::Tweening::Ease))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_EASEMANAGER_TOEASEFUNCTION_OFFSET))(ease);
		}

		static ::System::Boolean IsFlashEase(::DG::Tweening::Ease ease)
		{
			return ((::System::Boolean(*)(::DG::Tweening::Ease))((::PBYTE)hIl2Cpp + DG_TWEENING_CORE_EASING_EASEMANAGER_ISFLASHEASE_OFFSET))(ease);
		}
	};
}
