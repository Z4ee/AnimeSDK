#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNodeBase.h"

namespace FlowCanvas { class FlowNode; }

#define FLOWCANVAS_NODES_CALLABLEACTIONNODE_ONREGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B457370)
#define FLOWCANVAS_NODES_CALLABLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B457440)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableActionNode_TypeDefinitionIndex = 26868;

	class CallableActionNode : public ::FlowCanvas::Nodes::CallableActionNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEACTIONNODE__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CALLABLEACTIONNODE_ONREGISTERPORTS_OFFSET))(this, node);
		}
	};
}
