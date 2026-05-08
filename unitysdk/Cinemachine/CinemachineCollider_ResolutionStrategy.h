#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_ResolutionStrategy_TypeDefinitionIndex = 32467;

	enum class CinemachineCollider_ResolutionStrategy : ::System::Int32
	{
		PullCameraForward = 0,
		PreserveCameraHeight = 1,
		PreserveCameraDistance = 2,
	};
}
