#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverModifyType_TypeDefinitionIndex = 80905;

	enum class FeverModifyType : ::System::Int32
	{
		Other = 11,
		ReduceByTime = 0,
		DodgeSuccess = 8,
		KillOther = 7,
		StunResetOther2 = 4,
		BeingHit = 10,
		HitOther = 1,
		StunResetOther3 = 5,
		StunDestroyOther = 2,
		StunResetOther1 = 3,
		Ability = 9,
		QTE = 6,
	};
}
