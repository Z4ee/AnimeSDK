#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_24;

#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x144C9B60)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x144C9B00)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x144C9B10)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_STOP_OFFSET UNITYSDK_OFFSET(0x144C9BA0)
#define MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x144C9BE0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int WaitForNextFrameAction_TypeDefinitionIndex = 55580;

	class WaitForNextFrameAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_WAITFORNEXTFRAMEACTION_STOP_OFFSET))(this);
		}
	};
}
