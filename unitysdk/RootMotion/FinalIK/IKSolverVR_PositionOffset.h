#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverVR_PositionOffset_TypeDefinitionIndex = 38953;

	enum class IKSolverVR_PositionOffset : ::System::Int32
	{
		LeftHeel = 7,
		Head = 2,
		RightHand = 4,
		RightHeel = 8,
		Pelvis = 0,
		LeftFoot = 5,
		Chest = 1,
		LeftHand = 3,
		RightFoot = 6,
	};
}
