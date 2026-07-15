#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesSummaryNominateType_TypeDefinitionIndex = 11807;

	enum class PlanetFesSummaryNominateType : ::System::Int32
	{
		None = 0,
		FinishBusinessDay = 1,
		ActiveCard = 2,
		EventAvatarVisit = 3,
		EventPamCargo = 4,
		UseSkillPoint = 5,
		SendCard = 6,
		EventBonusAll = 7,
		EventBonusLarge = 8,
		NoneFinish = 9,
	};
}
