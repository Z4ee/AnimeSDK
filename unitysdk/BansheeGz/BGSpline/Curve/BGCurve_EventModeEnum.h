#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_EventModeEnum_TypeDefinitionIndex = 28166;

	enum class BGCurve_EventModeEnum : ::System::Int32
	{
		Update = 0,
		LateUpdate = 1,
		NoEvents = 2,
	};
}
