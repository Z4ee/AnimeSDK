#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_UpdateMethod_TypeDefinitionIndex = 37562;

	enum class CinemachineBrain_UpdateMethod : ::System::Int32
	{
		FixedUpdate = 0,
		LateUpdate = 1,
		SmartUpdate = 2,
		ManualUpdate = 3,
	};
}
