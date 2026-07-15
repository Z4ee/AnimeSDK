#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTalentType_TypeDefinitionIndex = 62338;

	enum class GridFightTalentType : ::System::Int32
	{
		Permanent = 0,
		Season = 1,
	};
}
