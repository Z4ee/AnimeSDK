#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior_RuntimeState_TypeDefinitionIndex = 67247;

	enum class Eff_VoxelUnidirOcclusionBehavior_RuntimeState : ::System::Int32
	{
		Suppressed = 0,
		Active = 1,
		Building = 2,
	};
}
