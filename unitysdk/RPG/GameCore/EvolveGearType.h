#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveGearType_TypeDefinitionIndex = 11008;

	enum class EvolveGearType : ::System::Int32
	{
		Tool = 0,
		Plugin = 1,
		DuelForge = 2,
		UltraForge = 3,
		Forge = 9,
		Undefined = 10,
	};
}
