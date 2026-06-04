#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScoringShowType_TypeDefinitionIndex = 23354;

	enum class ScoringShowType : ::System::Int32
	{
		Normal = 0,
		Special = 1,
	};
}
