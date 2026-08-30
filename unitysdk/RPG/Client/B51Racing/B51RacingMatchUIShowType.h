#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingMatchUIShowType_TypeDefinitionIndex = 80588;

	enum class B51RacingMatchUIShowType : ::System::Int32
	{
		None = 0,
		DriftButton = 1,
		AttackButton = 2,
		ChargeBar = 4,
		Crosshair = 8,
		UltimateButton = 16,
		SpeedPanel = 32,
		MiniMap = 64,
		RoundHint = 128,
		DriftWorldEnergyBar = 256,
		AttackWorldEnergyBar = 512,
		AttackGroup = 526,
		DriftGroup = 257,
		FullRaceHud = 1023,
	};
}
