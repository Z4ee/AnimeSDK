#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class EaseFunction; }

#define DG_TWEENING_EASEFACTORY___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2972B0)
#define DG_TWEENING_EASEFACTORY___C__DISPLAYCLASS2_0__STOPMOTION_B__0_OFFSET UNITYSDK_OFFSET(0x1C2972C0)

namespace DG::Tweening
{
	inline static constexpr unsigned int EaseFactory___c__DisplayClass2_0_TypeDefinitionIndex = 25350;

	class EaseFactory___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::DG::Tweening::EaseFunction* customEase; // 0x10
		::System::Single motionDelay; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFACTORY___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Single _StopMotion_b__0(::System::Single time, ::System::Single duration, ::System::Single overshootOrAmplitude, ::System::Single period)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_EASEFACTORY___C__DISPLAYCLASS2_0__STOPMOTION_B__0_OFFSET))(this, time, duration, overshootOrAmplitude, period);
		}
	};
}
