#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"

class Class_1_43BD383C98B4C0C5_24;
class Class_2_5DF25B7A40A1031E;

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int StateMachineNormalEntityAction_1_TypeDefinitionIndex = 56739;

	template <typename T>
	class StateMachineNormalEntityAction_1 : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		T RunningData; // 0x0
	};
}
