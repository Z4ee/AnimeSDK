#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubResonanceUIStageEnum_TypeDefinitionIndex = 60175;

	enum class BoxingClubResonanceUIStageEnum : ::System::Int32
	{
		SelectResonanceBuff = 1,
		EditTeamMode = 2,
		SelectOptionalBuff = 3,
		WaitingBattle = 4,
	};
}
