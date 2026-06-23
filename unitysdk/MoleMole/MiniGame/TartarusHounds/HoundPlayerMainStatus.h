#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniGame::TartarusHounds
{
	inline static constexpr unsigned int HoundPlayerMainStatus_TypeDefinitionIndex = 47806;

	enum class HoundPlayerMainStatus : ::System::Int32
	{
		Injured = 3,
		FallLanding = 110,
		Climb = 20,
		FallSlipLeft = 91,
		Respawn = 2,
		Max = 201,
		InjuredFinish = 15,
		Idle = 130,
		ClimbStart = 21,
		ProtectAttack = 106,
		Dead = 1,
		Diving = 5,
		Attack = 105,
		Falling = 95,
		FallSlipRight = 92,
		Push = 7,
		FakeJump = 108,
		Move = 100,
		PerformFall = 0,
		DivingFinish = 4,
		ClimbPre = 22,
		None = 200,
		MoveAttack = 104,
	};
}
