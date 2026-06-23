#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_24;

#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x12B0EE30)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x12B0EBE0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_RUN_OFFSET UNITYSDK_OFFSET(0x12B0EBF0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_STOP_OFFSET UNITYSDK_OFFSET(0x12B0EE70)
#define MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x12B0EEB0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetIsBlackScreenAction_TypeDefinitionIndex = 76983;

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

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETISBLACKSCREENACTION_RUN_OFFSET))(this, context);
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
