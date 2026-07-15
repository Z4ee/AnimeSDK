#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionBarLinkOrder_TypeDefinitionIndex = 68035;

	enum class ActionBarLinkOrder : ::System::Int32
	{
		None = 0,
		Top = 1,
		Bottom = 2,
		Middle = 3,
	};
}
