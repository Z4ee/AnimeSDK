#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_STARTEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B49C2A0)
#define FLOWCANVAS_NODES_STARTEVENT_ONSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B49C4C0)
#define FLOWCANVAS_NODES_STARTEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B49C590)
#define FLOWCANVAS_NODES_STARTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49C5E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StartEvent_TypeDefinitionIndex = 27328;

	class StartEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* start; // 0xA8
		::System::Boolean called; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STARTEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STARTEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnStartCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STARTEVENT_ONSTARTCALLBACK_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STARTEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
