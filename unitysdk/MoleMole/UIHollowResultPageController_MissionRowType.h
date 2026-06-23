#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController_MissionRowType_TypeDefinitionIndex = 57529;

	enum class UIHollowResultPageController_MissionRowType : ::System::Int32
	{
		Mission = 0,
		CompleteItem = 5,
		Statistics = 1,
		AbyssPeriod = 3,
		Custom = 6,
		TheGun = 7,
		Empty = 2,
		Challenge = 4,
	};
}
