#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantBodySize_TypeDefinitionIndex = 10096;

	enum class ServantBodySize : ::System::Int32
	{
		Small = 0,
		Middle = 1,
		Large = 2,
	};
}
