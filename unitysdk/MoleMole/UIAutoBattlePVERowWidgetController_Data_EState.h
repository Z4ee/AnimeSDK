#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController_Data_EState_TypeDefinitionIndex = 75613;

	enum class UIAutoBattlePVERowWidgetController_Data_EState : ::System::Int32
	{
		Empty = 0,
		NotFinished = 2,
		Finished = 3,
		Lock = 1,
	};
}
