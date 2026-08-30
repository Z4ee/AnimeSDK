#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingDistanceTier_TypeDefinitionIndex = 73844;

	enum class FadingDistanceTier : ::System::Int32
	{
		Near = 0,
		Mid = 1,
		Far = 2,
	};
}
