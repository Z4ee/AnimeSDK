#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int QTEUIData_TriggerType_TypeDefinitionIndex = 71141;

	enum class QTEUIData_TriggerType : ::System::Int32
	{
		SingleClick = 0,
		Swipe = 1,
		ComboClick = 2,
	};
}
