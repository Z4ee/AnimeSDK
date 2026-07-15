#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceMode_TypeDefinitionIndex = 55179;

	enum class StanceMode : ::System::Int32
	{
		Normal = 0,
		Extra = 1,
		Red = 2,
	};
}
