#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameRefSortType_TypeDefinitionIndex = 61829;

	enum class GameRefSortType : ::System::Int32
	{
		Time = 0,
		LikeCnt = 1,
		RecentHot = 2,
		Relative = 3,
	};
}
