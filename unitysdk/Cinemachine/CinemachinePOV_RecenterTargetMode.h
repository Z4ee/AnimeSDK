#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachinePOV_RecenterTargetMode_TypeDefinitionIndex = 37631;

	enum class CinemachinePOV_RecenterTargetMode : ::System::Int32
	{
		None = 0,
		FollowTargetForward = 1,
		LookAtTargetForward = 2,
	};
}
