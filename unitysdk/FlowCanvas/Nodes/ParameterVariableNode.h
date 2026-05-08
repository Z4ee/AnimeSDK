#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace NodeCanvas::Framework { class BBParameter; }

#define FLOWCANVAS_NODES_PARAMETERVARIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EC960)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParameterVariableNode_TypeDefinitionIndex = 28157;

	class ParameterVariableNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARAMETERVARIABLENODE__CTOR_OFFSET))(this);
		}
	};
}
