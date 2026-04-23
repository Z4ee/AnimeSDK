#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScoringShowType_TypeDefinitionIndex = 22130;

	enum class ScoringShowType : ::System::Int32
	{
		Normal = 0,
		Special = 1,
	};
}
