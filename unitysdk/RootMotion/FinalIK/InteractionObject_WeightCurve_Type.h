#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_WeightCurve_Type_TypeDefinitionIndex = 38793;

	enum class InteractionObject_WeightCurve_Type : ::System::Int32
	{
		RotationWeight = 1,
		Pull = 5,
		BendGoalWeight = 11,
		PositionOffsetY = 3,
		Push = 8,
		PositionWeight = 0,
		Reach = 6,
		PositionOffsetZ = 4,
		PushParent = 9,
		PositionOffsetX = 2,
		PoserWeight = 10,
		RotateBoneWeight = 7,
	};
}
