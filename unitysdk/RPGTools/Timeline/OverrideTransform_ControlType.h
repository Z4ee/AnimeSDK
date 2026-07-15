#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransform_ControlType_TypeDefinitionIndex = 46735;

	enum class OverrideTransform_ControlType : ::System::Int32
	{
		Switch = 0,
		SteerTo = 1,
		Steer = 2,
		Move = 3,
		Arrangement = 4,
		Animation = 5,
		Attach = 6,
		Clear = 7,
		PropMove = 8,
	};
}
