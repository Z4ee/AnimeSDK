#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_RotationOffset_TypeDefinitionIndex = 38950;

	enum class IKSolverVR_RotationOffset : ::System::Int32
	{
		Chest = 1,
		Head = 2,
		Pelvis = 0,
	};
}
