#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityAttributeType_TypeDefinitionIndex = 23697;

	enum class LittleGameAbilityAttributeType : ::System::Int32
	{
		Invalid = 0,
		Health = 1,
		MaxHealth = 2,
		Attack = 3,
		Shield = 4,
		CoolDown = 5,
		CurrentCoolDown = 6,
		InitialHealth = 7,
		DamagePower = 4301,
		SheildPower = 4302,
		BurnPower = 4303,
		MultiCastPower = 4304,
		HastePower = 4305,
		ChargePower = 4306,
		JamPower = 4307,
		BurnCount = 4308,
		HasteRemainingTime = 4309,
		JamRemainingTime = 4310,
		JamImmune = 4311,
		AdditionalDamagePower = 4312,
		AdditionalShieldPower = 4313,
		AdditionalBurnPower = 4314,
		AdditionalMultiCastPower = 4315,
		DamageBoostPercent = 4316,
		ShieldBoostPercent = 4317,
		BurnBoostPercent = 4318,
		DamageFromShieldPercent = 4319,
		DamageFromBurnPercent = 4320,
		ShieldFromDamagePercent = 4321,
		ShieldFromBurnPercent = 4322,
		BurnFromDamagePercent = 4323,
		BurnFromShieldPercent = 4324,
		BaseCooldownReduction = 4326,
		AdditionalJamPower = 4327,
	};
}
