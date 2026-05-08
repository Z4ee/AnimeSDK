#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_RotationOffset_TypeDefinitionIndex = 36644;

	enum class IKSolverVR_RotationOffset : ::System::Int32
	{
		Pelvis = 0,
		Chest = 1,
		Head = 2,
	};
}
