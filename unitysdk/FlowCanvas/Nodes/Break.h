#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

#define FLOWCANVAS_NODES_BREAK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E7A5860)
#define FLOWCANVAS_NODES_BREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A58D0)
#define FLOWCANVAS_NODES_BREAK__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1E7A5910)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Break_TypeDefinitionIndex = 30770;

	class Break : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BREAK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BREAK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_BREAK__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}
	};
}
