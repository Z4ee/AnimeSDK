#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_FINISH_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A5B50)
#define FLOWCANVAS_NODES_FINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A5C10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Finish_TypeDefinitionIndex = 30376;

	class Finish : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FINISH__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FINISH_REGISTERPORTS_OFFSET))(this);
		}
	};
}
