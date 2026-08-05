#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace System { class String; }

#define FLOWCANVAS_NODES_SENDEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D0581B0)
#define FLOWCANVAS_NODES_SENDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0581E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SendEvent_TypeDefinitionIndex = 30613;

	class SendEvent : public ::FlowCanvas::Nodes::CallableActionNode_2<::NodeCanvas::Framework::GraphOwner*, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SENDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::NodeCanvas::Framework::GraphOwner* target, ::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::GraphOwner*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SENDEVENT_INVOKE_OFFSET))(this, target, eventName);
		}
	};
}
