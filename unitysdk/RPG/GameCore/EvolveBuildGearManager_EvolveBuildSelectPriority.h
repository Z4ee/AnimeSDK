#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EvolveBuildSelectPriority_TypeDefinitionIndex = 53536;

	enum class EvolveBuildGearManager_EvolveBuildSelectPriority : ::System::Byte
	{
		Evolve = 0x5,
		Resonance = 0x4,
		Upgrade = 0x2,
		Normal = 0x1,
	};
}
