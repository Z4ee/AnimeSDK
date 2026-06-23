#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPopWindowController_EHandBookTab_TypeDefinitionIndex = 53602;

	enum class UIHandBookPopWindowController_EHandBookTab : ::System::Int32
	{
		DailyQuest = 1,
		HardQuest = 3,
		NormalQuest = 2,
		MAX = 5,
		None = -1,
		ProxyQuest = 0,
		Tactics = 4,
	};
}
