#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPageConfig_MainCityQuestType_TypeDefinitionIndex = 88680;

	enum class UIInterKnotPageConfig_MainCityQuestType : ::System::Int32
	{
		CharacterMessageQuest = 31,
		MainFreePhase1 = 11,
		ActivityQuest = 6,
		CharacterQuest = 3,
		SideQuest = 2,
		None = 0,
		DailyQuest = 5,
		MainQuest = 1,
		MainFreePhase2 = 12,
	};
}
