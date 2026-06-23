#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"

class Class_1_43BD383C98B4C0C5_24;

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineEntityAction_1_TypeDefinitionIndex = 49345;

	template <typename T>
	class StateMachineEntityAction_1 : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		T RunningData; // 0x0
	};
}
