#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int AimController_AimJointType_TypeDefinitionIndex = 38318;

	enum class AimController_AimJointType : ::System::Int32
	{
		Spherical = 1,
		None = 0,
		HingerYawPitch = 2,
	};
}
