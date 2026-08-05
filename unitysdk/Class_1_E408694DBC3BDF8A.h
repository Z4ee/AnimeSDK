#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace MoleMole::ChessStateMachine { class StateNodeConfig; }

#define CLASS_1_E408694DBC3BDF8A_METHOD_1_94AE1A7FF22701E3_OFFSET UNITYSDK_OFFSET(0x1875D990)
#define CLASS_1_E408694DBC3BDF8A_METHOD_1_D1281FC3467AE880_OFFSET UNITYSDK_OFFSET(0x1875D8B0)
#define CLASS_1_E408694DBC3BDF8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1875D8A0)

inline static constexpr unsigned int Class_1_E408694DBC3BDF8A_TypeDefinitionIndex = 68021;

class Class_1_E408694DBC3BDF8A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E408694DBC3BDF8A__CTOR_OFFSET))(this);
	}

	static ::MoleMole::ChessStateMachine::StateNodeConfig* Method_1_D1281FC3467AE880(::MoleMole::ChessStateMachine::StateNodeConfig* a1)
	{
		return ((::MoleMole::ChessStateMachine::StateNodeConfig*(*)(::MoleMole::ChessStateMachine::StateNodeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E408694DBC3BDF8A_METHOD_1_D1281FC3467AE880_OFFSET))(a1);
	}

	static ::MoleMole::ChessStateMachine::StateMachineBaseAction* Method_1_94AE1A7FF22701E3(::MoleMole::ChessStateMachine::StateMachineBaseAction* a1)
	{
		return ((::MoleMole::ChessStateMachine::StateMachineBaseAction*(*)(::MoleMole::ChessStateMachine::StateMachineBaseAction*))((::PBYTE)hIl2Cpp + CLASS_1_E408694DBC3BDF8A_METHOD_1_94AE1A7FF22701E3_OFFSET))(a1);
	}
};
