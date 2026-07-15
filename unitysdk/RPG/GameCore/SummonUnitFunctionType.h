#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitFunctionType_TypeDefinitionIndex = 16878;

	enum class SummonUnitFunctionType : ::System::Int32
	{
		None = 0,
		CharacterAnim = 1,
		Trigger = 2,
		Move = 3,
		AI = 4,
	};
}
