#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticlesBehavior_MotionHandleMode_TypeDefinitionIndex = 73594;

	enum class SkinnedGPUParticlesBehavior_MotionHandleMode : ::System::Int32
	{
		None = 0,
		ReprojectionAlways = 1,
		ReprojectionWhenOverLimit = 2,
		CullWhenOverLimit = 3,
	};
}
