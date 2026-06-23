#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_BendModifier_TypeDefinitionIndex = 38323;

	enum class IKSolverLimb_BendModifier : ::System::Int32
	{
		Target = 1,
		Goal = 4,
		Animation = 0,
		Arm = 3,
		Parent = 2,
	};
}
