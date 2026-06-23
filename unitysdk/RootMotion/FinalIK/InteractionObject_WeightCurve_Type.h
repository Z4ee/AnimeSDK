#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_WeightCurve_Type_TypeDefinitionIndex = 38313;

	enum class InteractionObject_WeightCurve_Type : ::System::Int32
	{
		Push = 8,
		PushParent = 9,
		PositionWeight = 0,
		PoserWeight = 10,
		PositionOffsetX = 2,
		RotateBoneWeight = 7,
		BendGoalWeight = 11,
		RotationWeight = 1,
		Pull = 5,
		PositionOffsetZ = 4,
		PositionOffsetY = 3,
		Reach = 6,
	};
}
