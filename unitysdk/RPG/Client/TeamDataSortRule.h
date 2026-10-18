#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TeamDataSortRule_TypeDefinitionIndex = 68123;

	enum class TeamDataSortRule : ::System::Int32
	{
		ReturnTrial = 0,
		Favorite = 1,
	};
}
