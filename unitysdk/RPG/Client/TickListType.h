#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TickListType_TypeDefinitionIndex = 64670;

	enum class TickListType : ::System::Int32
	{
		Tick = 0,
		LateTick = 1,
		EndOfLateTick = 2,
		Count = 3,
	};
}
