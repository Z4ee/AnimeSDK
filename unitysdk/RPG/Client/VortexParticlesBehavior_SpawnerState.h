#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VortexParticlesBehavior_SpawnerState_TypeDefinitionIndex = 67229;

	enum class VortexParticlesBehavior_SpawnerState : ::System::Int32
	{
		Playing = 0,
		Paused = 1,
		Stopped = 2,
	};
}
