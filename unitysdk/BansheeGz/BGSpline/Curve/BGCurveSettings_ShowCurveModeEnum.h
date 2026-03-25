#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_ShowCurveModeEnum_TypeDefinitionIndex = 28202;

	enum class BGCurveSettings_ShowCurveModeEnum : ::System::Int32
	{
		CurveSelected = 0,
		CurveOrParentSelected = 1,
		Always = 2,
	};
}
