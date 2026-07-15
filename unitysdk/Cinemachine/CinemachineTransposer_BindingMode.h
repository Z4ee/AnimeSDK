#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineTransposer_BindingMode_TypeDefinitionIndex = 37637;

	enum class CinemachineTransposer_BindingMode : ::System::Int32
	{
		LockToTargetOnAssign = 0,
		LockToTargetWithWorldUp = 1,
		LockToTargetNoRoll = 2,
		LockToTarget = 3,
		WorldSpace = 4,
		SimpleFollowWithWorldUp = 5,
	};
}
