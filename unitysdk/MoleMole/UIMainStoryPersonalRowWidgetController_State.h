#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_State_TypeDefinitionIndex = 62981;

	enum class UIMainStoryPersonalRowWidgetController_State : ::System::Int32
	{
		Invalid = 0,
		Complete = 4,
		Locked = 1,
		Ready = 2,
		Afk = 3,
	};
}
