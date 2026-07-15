#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode_TypeDefinitionIndex = 67482;

	enum class Effect_InstanceDataGPUParticlesBehavior_InstanceDataRefreshMode : ::System::Int32
	{
		Once = 0,
		FixedInterval = 1,
		FixedPerFrame = 2,
	};
}
