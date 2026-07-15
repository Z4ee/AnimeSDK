#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinPreCalcPhase_TypeDefinitionIndex = 53442;

	enum class FateRinPreCalcPhase : ::System::Byte
	{
		Begin = 0x0,
		LightTeamRecover = 0x1,
		LightTeamAttack = 0x2,
		DarkTeamRecover = 0x3,
		DarkTeamAttack = 0x4,
		HandDiscard = 0x5,
		End = 0x6,
		Count = 0x7,
	};
}
