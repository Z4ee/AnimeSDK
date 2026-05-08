#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/EntitySendEventAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineNormalEntityAction_1.h"

class Class_2_5DF25B7A40A1031E;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x141DB000)
#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUN_OFFSET UNITYSDK_OFFSET(0x141DAFA0)
#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x141DB2E0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int EntitySendEventAction_TypeDefinitionIndex = 61628;

	class EntitySendEventAction : public ::MoleMole::ChessStateMachine::StateMachineNormalEntityAction_1<::MoleMole::ChessStateMachine::EntitySendEventAction_RuntimeData>
	{
	public:
		::System::String* EventName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_2_5DF25B7A40A1031E* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5DF25B7A40A1031E*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUN_OFFSET))(this, context);
		}

		::System::Void RunInner(::Class_2_5DF25B7A40A1031E* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5DF25B7A40A1031E*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUNINNER_OFFSET))(this, context);
		}
	};
}
