#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/ScreenSwitchType.h"

class Class_1_43BD383C98B4C0C5_20;

#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_FORCESTOP_OFFSET UNITYSDK_OFFSET(0xDB8D430)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xDB8D4B0)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0xDB8CFC0)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_STOP_OFFSET UNITYSDK_OFFSET(0xDB8D470)
#define MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xDB8D4C0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int TransitionEffect_TypeDefinitionIndex = 79854;

	class TransitionEffect : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::MoleMole::ScreenSwitchType SwitchType; // 0x28
		::System::Boolean NeedStopAll; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_20* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_20*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_TRANSITIONEFFECT_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
