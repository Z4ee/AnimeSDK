#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHCHANGEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1893E1B0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcMath_MathChangedEvent_TypeDefinitionIndex = 34127;

	class BGCcMath_MathChangedEvent : public ::UnityEngine::Events::UnityEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCMATH_MATHCHANGEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
