#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1684B370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1684B400)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetRealtimeQTEButtonWorkable_TypeDefinitionIndex = 61680;

	class LDSetRealtimeQTEButtonWorkable : public ::FlowCanvas::Nodes::CallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean workable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETREALTIMEQTEBUTTONWORKABLE_INVOKE_OFFSET))(this, workable);
		}
	};
}
