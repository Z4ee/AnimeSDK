#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/SetEntityLifeStateToDieEnd_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineNormalEntityAction_1.h"

class Class_2_5DF25B7A40A1031E;

#define MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUN_OFFSET UNITYSDK_OFFSET(0x150E4740)
#define MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x150E4880)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetEntityLifeStateToDieEnd_TypeDefinitionIndex = 80482;

	class SetEntityLifeStateToDieEnd : public ::MoleMole::ChessStateMachine::StateMachineNormalEntityAction_1<::MoleMole::ChessStateMachine::SetEntityLifeStateToDieEnd_RuntimeData>
	{
	public:
		::Class_2_5DF25B7A40A1031E* _actionContext; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_2_5DF25B7A40A1031E* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_5DF25B7A40A1031E*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUN_OFFSET))(this, context);
		}
	};
}
