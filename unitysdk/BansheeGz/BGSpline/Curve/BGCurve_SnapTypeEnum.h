#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurve_SnapTypeEnum_TypeDefinitionIndex = 34441;

	enum class BGCurve_SnapTypeEnum : ::System::Int32
	{
		Off = 0,
		Points = 1,
		Curve = 2,
	};
}
