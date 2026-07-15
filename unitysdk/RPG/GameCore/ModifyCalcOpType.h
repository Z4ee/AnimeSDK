#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyCalcOpType_TypeDefinitionIndex = 13015;

	enum class ModifyCalcOpType : ::System::Int32
	{
		Set = 1,
		Add = 2,
		Mul = 3,
	};
}
