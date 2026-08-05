#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverModifyType_TypeDefinitionIndex = 80465;

	enum class FeverModifyType : ::System::Int32
	{
		HitOther = 1,
		QTE = 6,
		BeingHit = 10,
		Other = 11,
		Ability = 9,
		StunResetOther3 = 5,
		KillOther = 7,
		StunResetOther1 = 3,
		ReduceByTime = 0,
		StunResetOther2 = 4,
		DodgeSuccess = 8,
		StunDestroyOther = 2,
	};
}
