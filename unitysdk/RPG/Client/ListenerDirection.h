#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ListenerDirection_TypeDefinitionIndex = 57099;

	enum class ListenerDirection : ::System::Int32
	{
		Forward = 0,
		Left = 1,
		Right = 2,
		Back = 3,
		ForwardLeft = 4,
		BackLeft = 5,
		ForwardRight = 6,
		BackRight = 7,
		Count = 8,
	};
}
