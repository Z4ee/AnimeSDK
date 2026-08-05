#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace DG::Tweening { class TweenCallback; }
namespace DG::Tweening { class Tweener; }
namespace DG::Tweening { template <typename T> class TweenCallback_1; }
namespace UnityEngine { class AnimationCurve; }

#define DG_TWEENING_DOVIRTUAL_DELAYEDCALL_OFFSET UNITYSDK_OFFSET(0x1FBBF270)
#define DG_TWEENING_DOVIRTUAL_EASEDVALUE_1_OFFSET UNITYSDK_OFFSET(0x1FBBF040)
#define DG_TWEENING_DOVIRTUAL_EASEDVALUE_2_OFFSET UNITYSDK_OFFSET(0x1FBBF120)
#define DG_TWEENING_DOVIRTUAL_EASEDVALUE_3_OFFSET UNITYSDK_OFFSET(0x1FBBF180)
#define DG_TWEENING_DOVIRTUAL_EASEDVALUE_OFFSET UNITYSDK_OFFSET(0x1FBBEF80)
#define DG_TWEENING_DOVIRTUAL_FLOAT_OFFSET UNITYSDK_OFFSET(0x1FBBEDB0)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOVirtual_TypeDefinitionIndex = 28441;

	class DOVirtual : public ::System::Object
	{
	public:
		static ::DG::Tweening::Tweener* Float(::System::Single from, ::System::Single to, ::System::Single duration, ::DG::Tweening::TweenCallback_1<::System::Single>* onVirtualUpdate)
		{
			return ((::DG::Tweening::Tweener*(*)(::System::Single, ::System::Single, ::System::Single, ::DG::Tweening::TweenCallback_1<::System::Single>*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL_FLOAT_OFFSET))(from, to, duration, onVirtualUpdate);
		}

		static ::System::Single EasedValue(::System::Single from, ::System::Single to, ::System::Single lifetimePercentage, ::DG::Tweening::Ease easeType)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::DG::Tweening::Ease))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL_EASEDVALUE_OFFSET))(from, to, lifetimePercentage, easeType);
		}

		static ::System::Single EasedValue_1(::System::Single from, ::System::Single to, ::System::Single lifetimePercentage, ::DG::Tweening::Ease easeType, ::System::Single overshoot)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::DG::Tweening::Ease, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL_EASEDVALUE_1_OFFSET))(from, to, lifetimePercentage, easeType, overshoot);
		}

		static ::System::Single EasedValue_2(::System::Single from, ::System::Single to, ::System::Single lifetimePercentage, ::DG::Tweening::Ease easeType, ::System::Single amplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::DG::Tweening::Ease, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL_EASEDVALUE_2_OFFSET))(from, to, lifetimePercentage, easeType, amplitude, period);
		}

		static ::System::Single EasedValue_3(::System::Single from, ::System::Single to, ::System::Single lifetimePercentage, ::UnityEngine::AnimationCurve* easeCurve)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL_EASEDVALUE_3_OFFSET))(from, to, lifetimePercentage, easeCurve);
		}

		static ::DG::Tweening::Tween* DelayedCall(::System::Single delay, ::DG::Tweening::TweenCallback* callback, ::System::Boolean ignoreTimeScale)
		{
			return ((::DG::Tweening::Tween*(*)(::System::Single, ::DG::Tweening::TweenCallback*, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_DOVIRTUAL_DELAYEDCALL_OFFSET))(delay, callback, ignoreTimeScale);
		}
	};
}
