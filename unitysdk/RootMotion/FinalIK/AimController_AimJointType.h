#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimController_AimJointType_TypeDefinitionIndex = 38935;

	enum class AimController_AimJointType : ::System::Int32
	{
		None = 0,
		Spherical = 1,
		HingerYawPitch = 2,
	};
}
