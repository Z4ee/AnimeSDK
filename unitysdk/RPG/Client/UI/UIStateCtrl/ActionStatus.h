#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int ActionStatus_TypeDefinitionIndex = 73967;

	enum class ActionStatus : ::System::Int32
	{
		Init = 0,
		Playing = 1,
		Completed = 2,
		Error = 3,
	};
}
