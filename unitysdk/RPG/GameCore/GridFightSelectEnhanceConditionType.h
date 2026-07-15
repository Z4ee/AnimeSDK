#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSelectEnhanceConditionType_TypeDefinitionIndex = 13103;

	enum class GridFightSelectEnhanceConditionType : ::System::Int32
	{
		None = 0,
		MaxStar = 1,
		Permanent = 2,
	};
}
