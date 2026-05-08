#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPageConfig_MainCityQuestType_TypeDefinitionIndex = 62789;

	enum class UIInterKnotPageConfig_MainCityQuestType : ::System::Int32
	{
		CharacterQuest = 3,
		None = 0,
		MainQuest = 1,
		ActivityQuest = 6,
		MainFreePhase1 = 11,
		SideQuest = 2,
		CharacterMessageQuest = 31,
		DailyQuest = 5,
		MainFreePhase2 = 12,
	};
}
