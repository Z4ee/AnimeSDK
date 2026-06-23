#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"

class Class_1_43BD383C98B4C0C5_24;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x17D274C0)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x17D27540)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_RUN_OFFSET UNITYSDK_OFFSET(0x17D27360)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_STOP_OFFSET UNITYSDK_OFFSET(0x17D27500)
#define MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D27550)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ChessEntityEventNode_TypeDefinitionIndex = 81158;

	class ChessEntityEventNode : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::String* EventName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_1_43BD383C98B4C0C5_24* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_RUN_OFFSET))(this, context);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_CHESSENTITYEVENTNODE_GET_ISINSTANT_OFFSET))(this);
		}
	};
}
