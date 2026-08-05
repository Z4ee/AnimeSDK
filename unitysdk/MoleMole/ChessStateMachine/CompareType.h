#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 72236;

	enum class CompareType : ::System::Int32
	{
		Equal = 2,
		NotEqual = 5,
		Greater = 0,
		GreaterEqual = 3,
		LessEquals = 4,
		Less = 1,
	};
}
