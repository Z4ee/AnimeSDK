#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace NodeCanvas::Framework { class BBParameter; }

#define FLOWCANVAS_NODES_PARAMETERVARIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22AD20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParameterVariableNode_TypeDefinitionIndex = 30975;

	class ParameterVariableNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARAMETERVARIABLENODE__CTOR_OFFSET))(this);
		}
	};
}
