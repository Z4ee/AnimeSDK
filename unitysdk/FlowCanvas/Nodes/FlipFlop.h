#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_FLIPFLOP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A294B50)
#define FLOWCANVAS_NODES_FLIPFLOP_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A294BB0)
#define FLOWCANVAS_NODES_FLIPFLOP_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A294BC0)
#define FLOWCANVAS_NODES_FLIPFLOP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A294BD0)
#define FLOWCANVAS_NODES_FLIPFLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A294D30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlipFlop_TypeDefinitionIndex = 27017;

	class FlipFlop : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Boolean isFlip; // 0xA8
		::System::Boolean original; // 0xA9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP_REGISTERPORTS_OFFSET))(this);
		}
	};
}
