#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVERowWidgetController_Data_EState_TypeDefinitionIndex = 73103;

	enum class UIAutoBattlePVERowWidgetController_Data_EState : ::System::Int32
	{
		NotFinished = 2,
		Lock = 1,
		Finished = 3,
		Empty = 0,
	};
}
