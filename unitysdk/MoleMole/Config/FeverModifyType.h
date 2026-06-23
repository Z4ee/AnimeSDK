#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverModifyType_TypeDefinitionIndex = 63448;

	enum class FeverModifyType : ::System::Int32
	{
		Ability = 9,
		QTE = 6,
		DodgeSuccess = 8,
		HitOther = 1,
		ReduceByTime = 0,
		Other = 11,
		KillOther = 7,
		StunDestroyOther = 2,
		StunResetOther2 = 4,
		StunResetOther3 = 5,
		BeingHit = 10,
		StunResetOther1 = 3,
	};
}
