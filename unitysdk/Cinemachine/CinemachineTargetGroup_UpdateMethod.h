#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTargetGroup_UpdateMethod_TypeDefinitionIndex = 34052;

	enum class CinemachineTargetGroup_UpdateMethod : ::System::Int32
	{
		Update = 0,
		FixedUpdate = 1,
		LateUpdate = 2,
	};
}
