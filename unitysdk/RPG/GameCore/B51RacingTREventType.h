#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingTREventType_TypeDefinitionIndex = 10933;

	enum class B51RacingTREventType : ::System::Int32
	{
		None = 0,
		RaceStart = 1,
		LastLap = 2,
		PlayerTakeFirst = 3,
		SharpCurveAhead = 4,
		PerfectDriftThroughCurve = 5,
		BoostFullRelease = 6,
		AttackHit = 7,
		AttackCooldownReady = 8,
		UltimateChargeHit = 9,
		UltimateChargeReady = 10,
		RearCarApproaching = 11,
		OvertakeEnemy = 12,
		OvertakenByEnemy = 13,
		BadSituation = 14,
		FlySlope = 15,
	};
}
