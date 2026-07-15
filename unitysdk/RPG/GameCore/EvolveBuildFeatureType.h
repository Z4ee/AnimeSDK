#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildFeatureType_TypeDefinitionIndex = 23761;

	enum class EvolveBuildFeatureType : ::System::Int32
	{
		None = 0,
		MinLvGearLvUpOnWave = 1,
		Lv6IsLvMax = 2,
		GearInitLv2 = 4,
		BigTreasure = 8,
		GetPluginResonance = 16,
		AutoForge = 32,
		AddWeaponSlot = 64,
	};
}
