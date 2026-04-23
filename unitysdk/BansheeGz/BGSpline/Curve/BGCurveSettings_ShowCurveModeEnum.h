#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_ShowCurveModeEnum_TypeDefinitionIndex = 33826;

	enum class BGCurveSettings_ShowCurveModeEnum : ::System::Int32
	{
		CurveSelected = 0,
		CurveOrParentSelected = 1,
		Always = 2,
	};
}
