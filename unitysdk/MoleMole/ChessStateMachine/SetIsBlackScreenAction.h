#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x12D146A0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x12D14450)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12D14460)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_STOP_OFFSET UNITYSDK_OFFSET(0x12D146E0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12D14720)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetIsBlackScreenAction_TypeDefinitionIndex = 40748;

	class SetIsBlackScreenAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_STOP_OFFSET))(this);
		}
	};
}
