#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MoveToTarget_AIMoveTargetState_TypeDefinitionIndex = 79600;

	enum class MoveToTarget_AIMoveTargetState : ::System::Int32
	{
		Stop = 1,
		MovingToTarget = 0,
	};
}
