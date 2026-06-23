#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_DISABLEEVENT_ONPOSTGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1BCB4160)
#define FLOWCANVAS_NODES_DISABLEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BCB41A0)
#define FLOWCANVAS_NODES_DISABLEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB41F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DisableEvent_TypeDefinitionIndex = 30146;

	class DisableEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* disable; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DISABLEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DISABLEEVENT_ONPOSTGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DISABLEEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
