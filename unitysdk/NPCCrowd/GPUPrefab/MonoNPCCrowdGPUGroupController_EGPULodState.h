#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_EGPULodState_TypeDefinitionIndex = 47431;

	enum class MonoNPCCrowdGPUGroupController_EGPULodState : ::System::Byte
	{
		Hide = 0x2,
		Detail = 0x0,
		Simple = 0x1,
	};
}
