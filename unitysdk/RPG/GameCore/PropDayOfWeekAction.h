#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDayOfWeekAction_TypeDefinitionIndex = 10105;

	enum class PropDayOfWeekAction : ::System::Int32
	{
		CocoonActive = 0,
		CocoonInActive = 1,
	};
}
