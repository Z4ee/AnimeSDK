#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdvancedCollisionConfigData_ResolutionStrategy_TypeDefinitionIndex = 68256;

	enum class AdvancedCollisionConfigData_ResolutionStrategy : ::System::Int32
	{
		PreserveCameraDistance = 2,
		PreserveCameraHeight = 1,
		PullCameraForward = 0,
	};
}
