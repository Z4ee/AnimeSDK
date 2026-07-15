#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveSettings_HandlesTypeEnum_TypeDefinitionIndex = 34478;

	enum class BGCurveSettings_HandlesTypeEnum : ::System::Int32
	{
		Configurable = 0,
		Standard = 1,
		FreeMove = 2,
	};
}
