#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/ProtoScript/HollowSystemType.h"
#include "unitysdk/ProtoScript/HollowSystemUIState.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x158084F0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15808640)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameSetHollowSystemState_TypeDefinitionIndex = 74815;

	class HackerGameSetHollowSystemState : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::ProtoScript::HollowSystemType, ::ProtoScript::HollowSystemUIState>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::ProtoScript::HollowSystemType systemState, ::ProtoScript::HollowSystemUIState stateType)
		{
			return ((::System::Void(*)(::PVOID, ::ProtoScript::HollowSystemType, ::ProtoScript::HollowSystemUIState))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMESETHOLLOWSYSTEMSTATE_INVOKE_OFFSET))(this, systemState, stateType);
		}
	};
}
