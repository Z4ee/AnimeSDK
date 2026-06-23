#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 72505;

	enum class CompareType : ::System::Int32
	{
		Less = 1,
		LessEquals = 4,
		GreaterEqual = 3,
		Equal = 2,
		Greater = 0,
		NotEqual = 5,
	};
}
