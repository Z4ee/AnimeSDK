#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int CompareType_TypeDefinitionIndex = 57057;

	enum class CompareType : ::System::Int32
	{
		GreaterEqual = 3,
		Equal = 2,
		Greater = 0,
		NotEqual = 5,
		LessEquals = 4,
		Less = 1,
	};
}
