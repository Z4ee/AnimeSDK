#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerMainStatus_TypeDefinitionIndex = 53346;

	enum class HoundPlayerMainStatus : ::System::Int32
	{
		InjuredFinish = 15,
		Idle = 130,
		Injured = 3,
		PerformFall = 0,
		DivingFinish = 4,
		Falling = 95,
		Diving = 5,
		Max = 201,
		Dead = 1,
		Push = 7,
		ClimbStart = 21,
		ProtectAttack = 106,
		Move = 100,
		Attack = 105,
		MoveAttack = 104,
		FallSlipRight = 92,
		None = 200,
		Respawn = 2,
		ClimbPre = 22,
		FallSlipLeft = 91,
		FallLanding = 110,
		Climb = 20,
		FakeJump = 108,
	};
}
