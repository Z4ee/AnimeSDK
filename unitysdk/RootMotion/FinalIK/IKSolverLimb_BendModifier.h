#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_BendModifier_TypeDefinitionIndex = 38981;

	enum class IKSolverLimb_BendModifier : ::System::Int32
	{
		Target = 1,
		Parent = 2,
		Arm = 3,
		Animation = 0,
		Goal = 4,
	};
}
