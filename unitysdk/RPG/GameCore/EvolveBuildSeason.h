#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSeason_TypeDefinitionIndex = 10957;

	enum class EvolveBuildSeason : ::System::Int32
	{
		All = 0,
		EarlyAccess = 1,
		SecondChapter = 2,
	};
}
