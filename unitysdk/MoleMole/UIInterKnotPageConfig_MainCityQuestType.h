#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPageConfig_MainCityQuestType_TypeDefinitionIndex = 61204;

	enum class UIInterKnotPageConfig_MainCityQuestType : ::System::Int32
	{
		None = 0,
		MainFreePhase2 = 12,
		MainFreePhase1 = 11,
		MainQuest = 1,
		SideQuest = 2,
		CharacterMessageQuest = 31,
		ActivityQuest = 6,
		DailyQuest = 5,
		CharacterQuest = 3,
	};
}
