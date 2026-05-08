#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/GridVisibleAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineGeometryEntityAction_1.h"

class Class_3_5A46B9360F369125;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x11C8AE30)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11C8B250)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridVisibleAction_TypeDefinitionIndex = 42190;

	class GridVisibleAction : public ::MoleMole::ChessStateMachine::StateMachineGeometryEntityAction_1<::MoleMole::ChessStateMachine::GridVisibleAction_RuntimeData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_3_5A46B9360F369125* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5A46B9360F369125*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDVISIBLEACTION_RUN_OFFSET))(this, context);
		}
	};
}
