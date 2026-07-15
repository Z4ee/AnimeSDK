#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorObjectRotate_RotationUpEnum_TypeDefinitionIndex = 34491;

	enum class BGCcCursorObjectRotate_RotationUpEnum : ::System::Int32
	{
		WorldUp = 0,
		WorldCustom = 1,
		LocalUp = 2,
		LocalCustom = 3,
		TargetParentUp = 4,
		TargetParentUpCustom = 5,
	};
}
