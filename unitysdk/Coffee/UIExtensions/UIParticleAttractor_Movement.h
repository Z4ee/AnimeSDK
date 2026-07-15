#pragma once
#include "unitysdk/unitysdk.h"

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleAttractor_Movement_TypeDefinitionIndex = 42354;

	enum class UIParticleAttractor_Movement : ::System::Int32
	{
		Linear = 0,
		Smooth = 1,
		Sphere = 2,
	};
}
