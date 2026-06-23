#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_RotationOffset_TypeDefinitionIndex = 38337;

	enum class IKSolverVR_RotationOffset : ::System::Int32
	{
		Chest = 1,
		Pelvis = 0,
		Head = 2,
	};
}
