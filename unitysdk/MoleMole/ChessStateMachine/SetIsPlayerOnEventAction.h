#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x141DC8E0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x141DC880)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_RUN_OFFSET UNITYSDK_OFFSET(0x141DC890)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_STOP_OFFSET UNITYSDK_OFFSET(0x141DC920)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x141DC960)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetIsPlayerOnEventAction_TypeDefinitionIndex = 47510;

	class SetIsPlayerOnEventAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISPLAYERONEVENTACTION_STOP_OFFSET))(this);
		}
	};
}
