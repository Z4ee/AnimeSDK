#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Events/UnityEvent_1.h"

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1838DE00)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorChangeLinear_PointReachedEvent_TypeDefinitionIndex = 35348;

	class BGCcCursorChangeLinear_PointReachedEvent : public ::UnityEngine::Events::UnityEvent_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_POINTREACHEDEVENT__CTOR_OFFSET))(this);
		}
	};
}
