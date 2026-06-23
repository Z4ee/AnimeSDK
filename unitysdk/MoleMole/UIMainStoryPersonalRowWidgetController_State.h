#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_State_TypeDefinitionIndex = 45676;

	enum class UIMainStoryPersonalRowWidgetController_State : ::System::Int32
	{
		Locked = 1,
		Invalid = 0,
		Ready = 2,
		Afk = 3,
		Complete = 4,
	};
}
