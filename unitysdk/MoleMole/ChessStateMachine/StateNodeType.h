#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateNodeType_TypeDefinitionIndex = 42324;

	enum class StateNodeType : ::System::Int32
	{
		UpState = 4,
		AnyState = 5,
		SubState = 3,
		State = 2,
		Entry = 0,
		Exit = 1,
	};
}
