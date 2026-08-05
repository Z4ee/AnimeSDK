#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdvancedCollisionConfigData_ResolutionStrategy_TypeDefinitionIndex = 42898;

	enum class AdvancedCollisionConfigData_ResolutionStrategy : ::System::Int32
	{
		PreserveCameraHeight = 1,
		PullCameraForward = 0,
		PreserveCameraDistance = 2,
	};
}
