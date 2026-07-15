#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineDollyCart_UpdateMethod_TypeDefinitionIndex = 37578;

	enum class CinemachineDollyCart_UpdateMethod : ::System::Int32
	{
		Update = 0,
		FixedUpdate = 1,
		LateUpdate = 2,
		ManualUpdate = 3,
	};
}
