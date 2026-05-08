#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateNodeType_TypeDefinitionIndex = 55796;

	enum class StateNodeType : ::System::Int32
	{
		SubState = 3,
		AnyState = 5,
		State = 2,
		Exit = 1,
		Entry = 0,
		UpState = 4,
	};
}
