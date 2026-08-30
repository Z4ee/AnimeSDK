#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData_SubNavMapBuildMode_TypeDefinitionIndex = 74507;

	enum class UniverseData_SubNavMapBuildMode : ::System::Int32
	{
		Universe = 0,
		Raid = 1,
	};
}
