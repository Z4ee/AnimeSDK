#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ScreenSpaceGPUParticles
{
	inline static constexpr unsigned int ScreenSpaceGPUParticlesEmitter_Shape_TypeDefinitionIndex = 73600;

	enum class ScreenSpaceGPUParticlesEmitter_Shape : ::System::Int32
	{
		None = 0,
		Cube = 1,
		Sphere = 2,
		Cylinder = 3,
	};
}
