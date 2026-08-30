#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionBarEventAction_TypeDefinitionIndex = 71171;

	enum class ActionBarEventAction : ::System::Int32
	{
		Null = 0,
		Add = 1,
		Remove = 2,
		Move = 3,
		Active = 4,
		ChangeQueue = 5,
	};
}
