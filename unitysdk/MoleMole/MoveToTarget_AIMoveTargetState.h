#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MoveToTarget_AIMoveTargetState_TypeDefinitionIndex = 70250;

	enum class MoveToTarget_AIMoveTargetState : ::System::Int32
	{
		Stop = 1,
		MovingToTarget = 0,
	};
}
