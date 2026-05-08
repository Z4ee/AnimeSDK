#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_SWITCHCOMPARISON_ISCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1B459650)
#define FLOWCANVAS_NODES_SWITCHCOMPARISON_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B459510)
#define FLOWCANVAS_NODES_SWITCHCOMPARISON__CTOR_OFFSET UNITYSDK_OFFSET(0x1B459660)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SwitchComparison_TypeDefinitionIndex = 27992;

	class SwitchComparison : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHCOMPARISON__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHCOMPARISON_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean IsChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SWITCHCOMPARISON_ISCHOICENODE_OFFSET))(this);
		}
	};
}
