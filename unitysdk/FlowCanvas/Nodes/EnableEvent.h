#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_ENABLEEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EB6B7D0)
#define FLOWCANVAS_NODES_ENABLEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB6B810)
#define FLOWCANVAS_NODES_ENABLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6B860)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int EnableEvent_TypeDefinitionIndex = 30454;

	class EnableEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* enable; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ENABLEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ENABLEEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_ENABLEEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
