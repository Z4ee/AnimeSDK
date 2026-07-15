#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEventType_TypeDefinitionIndex = 15609;

	enum class PixAirEventType : ::System::Int32
	{
		Invalid = 0,
		EquipmentUse = 4301,
		GameStart = 4302,
		OnBurnApplied = 4303,
		OnDamageApplied = 4304,
		OnJamApplied = 4305,
		OnChargeApplied = 4306,
		OnHasteApplied = 4307,
		HealthPercentageLowerThan = 4308,
		OnProjectileHit = 4309,
		ApplyBurn = 4310,
		ApplyDamage = 4311,
		ApplyJam = 4312,
		ApplyCharge = 4313,
		ApplyHaste = 4314,
		OnShieldApplied = 4315,
		ApplyShield = 4316,
		OnBoostApplied = 4320,
		EquipmentInteract = 4317,
		EquipmentCD = 4318,
		EquipmentEnchant = 4319,
		EquipmentSpawned = 4321,
	};
}
