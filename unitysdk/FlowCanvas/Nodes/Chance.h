#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_CHANCE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BC40C20)
#define FLOWCANVAS_NODES_CHANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC40D50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Chance_TypeDefinitionIndex = 30163;

	class Chance : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHANCE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CHANCE_REGISTERPORTS_OFFSET))(this);
		}
	};
}
