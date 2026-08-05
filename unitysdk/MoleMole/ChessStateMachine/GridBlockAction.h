#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/GridBlockAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineGeometryEntityAction_1.h"

class Class_3_5A46B9360F369125;

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x16C29280)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_RUN_OFFSET UNITYSDK_OFFSET(0x16C28ED0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C292E0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x16C29300)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridBlockAction_TypeDefinitionIndex = 74821;

	class GridBlockAction : public ::MoleMole::ChessStateMachine::StateMachineGeometryEntityAction_1<::MoleMole::ChessStateMachine::GridBlockAction_RuntimeData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_3_5A46B9360F369125* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5A46B9360F369125*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_RUN_OFFSET))(this, context);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDBLOCKACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
