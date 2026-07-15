#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBrain_BrainUpdateMethod_TypeDefinitionIndex = 37563;

	enum class CinemachineBrain_BrainUpdateMethod : ::System::Int32
	{
		FixedUpdate = 0,
		LateUpdate = 1,
	};
}
