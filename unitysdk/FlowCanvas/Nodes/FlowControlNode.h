#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

#define FLOWCANVAS_NODES_FLOWCONTROLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F52D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowControlNode_TypeDefinitionIndex = 28082;

	class FlowControlNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWCONTROLNODE__CTOR_OFFSET))(this);
		}
	};
}
