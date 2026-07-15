#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingPriority_TypeDefinitionIndex = 70540;

	enum class FadingPriority : ::System::Int32
	{
		Critical = 0,
		High = 1,
		Normal = 2,
		Low = 3,
	};
}
