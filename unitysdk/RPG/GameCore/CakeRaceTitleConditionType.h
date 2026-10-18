#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTitleConditionType_TypeDefinitionIndex = 11011;

	enum class CakeRaceTitleConditionType : ::System::Int32
	{
		None = 0,
		Equal = 1,
		GreaterEqual = 2,
		LessEqual = 3,
	};
}
