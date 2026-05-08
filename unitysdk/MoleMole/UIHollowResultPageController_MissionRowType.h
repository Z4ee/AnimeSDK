#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_MissionRowType_TypeDefinitionIndex = 80799;

	enum class UIHollowResultPageController_MissionRowType : ::System::Int32
	{
		Challenge = 4,
		CompleteItem = 5,
		Custom = 6,
		TheGun = 7,
		AbyssPeriod = 3,
		Mission = 0,
		Statistics = 1,
		Empty = 2,
	};
}
