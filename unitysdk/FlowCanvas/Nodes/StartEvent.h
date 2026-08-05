#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_STARTEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EB7ED90)
#define FLOWCANVAS_NODES_STARTEVENT_ONSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EB7EFA0)
#define FLOWCANVAS_NODES_STARTEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7F070)
#define FLOWCANVAS_NODES_STARTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F0C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StartEvent_TypeDefinitionIndex = 31409;

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
