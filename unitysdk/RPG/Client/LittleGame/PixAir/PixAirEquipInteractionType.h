#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirEquipInteractionType_TypeDefinitionIndex = 71811;

	enum class PixAirEquipInteractionType : ::System::Int32
	{
		Haste = 0,
		Charge = 1,
		Jam = 2,
		InstantUse = 3,
		Immune = 4,
		BoostDamage = 5,
		BoostShield = 6,
		BoostBurn = 7,
		BoostJam = 8,
		BoostMultiCast = 9,
		ReduceBaseCooldown = 10,
		DamageBoostPercent = 11,
		ShieldBoostPercent = 12,
		BurnBoostPercent = 13,
		DamageFromShieldPercent = 14,
		DamageFromBurnPercent = 15,
		ShieldFromDamagePercent = 16,
		ShieldFromBurnPercent = 17,
		BurnFromDamagePercent = 18,
		BurnFromShieldPercent = 19,
	};
}
