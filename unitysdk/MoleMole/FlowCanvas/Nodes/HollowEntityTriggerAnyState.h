#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B199940)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B199B10)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityTriggerAnyState_TypeDefinitionIndex = 90922;

	class HollowEntityTriggerAnyState : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::UInt32, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::UInt32 entityRuntimeID, ::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYTRIGGERANYSTATE_INVOKE_OFFSET))(this, entityRuntimeID, triggerName);
		}
	};
}
