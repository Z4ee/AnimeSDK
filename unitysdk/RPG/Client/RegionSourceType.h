#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RegionSourceType_TypeDefinitionIndex = 50488;

	enum class RegionSourceType : ::System::Int32
	{
		Player = 0,
		Camera = 1,
		Additional = 2,
	};
}
