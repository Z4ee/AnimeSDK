#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcTrs_RotationInterpolationEnum_TypeDefinitionIndex = 34510;

	enum class BGCcTrs_RotationInterpolationEnum : ::System::Int32
	{
		None = 0,
		Lerp = 1,
		Slerp = 2,
	};
}
