#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A393F60)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A394A80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityUpdateStateMachineParam_TypeDefinitionIndex = 48144;

	class HollowEntityUpdateStateMachineParam : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::UInt32, ::MoleMole::ChessStateMachine::StateMachineParamsWrapper>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::ChessStateMachine::StateMachineParamsWrapper paramsWrapper)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::ChessStateMachine::StateMachineParamsWrapper))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYUPDATESTATEMACHINEPARAM_INVOKE_OFFSET))(this, entityRuntimeID, paramsWrapper);
		}
	};
}
