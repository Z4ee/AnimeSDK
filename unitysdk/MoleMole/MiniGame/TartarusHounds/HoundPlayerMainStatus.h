#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerMainStatus_TypeDefinitionIndex = 67500;

	enum class HoundPlayerMainStatus : ::System::Int32
	{
		Diving = 5,
		ClimbStart = 21,
		Respawn = 2,
		InjuredFinish = 15,
		Climb = 20,
		Move = 100,
		Attack = 105,
		Max = 201,
		None = 200,
		PerformFall = 0,
		MoveAttack = 104,
		ClimbPre = 22,
		FallLanding = 110,
		Idle = 130,
		FallSlipLeft = 91,
		FallSlipRight = 92,
		Dead = 1,
		ProtectAttack = 106,
		Push = 7,
		FakeJump = 108,
		Falling = 95,
		Injured = 3,
		DivingFinish = 4,
	};
}
