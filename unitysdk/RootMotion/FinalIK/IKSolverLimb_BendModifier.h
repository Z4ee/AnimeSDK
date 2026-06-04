#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_BendModifier_TypeDefinitionIndex = 41839;

	enum class IKSolverLimb_BendModifier : ::System::Int32
	{
		Animation = 0,
		Target = 1,
		Parent = 2,
		Arm = 3,
		Goal = 4,
	};
}
