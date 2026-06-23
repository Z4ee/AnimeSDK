#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace NodeCanvas::Framework { class BBParameter; }

#define FLOWCANVAS_NODES_PARAMETERVARIABLENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533190)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParameterVariableNode_TypeDefinitionIndex = 29516;

	class ParameterVariableNode : public ::FlowCanvas::FlowNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARAMETERVARIABLENODE__CTOR_OFFSET))(this);
		}
	};
}
