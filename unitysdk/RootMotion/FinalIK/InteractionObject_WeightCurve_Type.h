#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_WeightCurve_Type_TypeDefinitionIndex = 36656;

	enum class InteractionObject_WeightCurve_Type : ::System::Int32
	{
		PositionWeight = 0,
		RotationWeight = 1,
		PositionOffsetX = 2,
		PositionOffsetY = 3,
		PositionOffsetZ = 4,
		Pull = 5,
		Reach = 6,
		RotateBoneWeight = 7,
		Push = 8,
		PushParent = 9,
		PoserWeight = 10,
		BendGoalWeight = 11,
	};
}
