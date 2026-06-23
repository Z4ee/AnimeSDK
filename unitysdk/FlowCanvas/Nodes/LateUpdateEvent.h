#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_LATEUPDATEEVENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC41A90)
#define FLOWCANVAS_NODES_LATEUPDATEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1BC418F0)
#define FLOWCANVAS_NODES_LATEUPDATEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1BC419C0)
#define FLOWCANVAS_NODES_LATEUPDATEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BC418A0)
#define FLOWCANVAS_NODES_LATEUPDATEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC41AD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LateUpdateEvent_TypeDefinitionIndex = 29559;

	class LateUpdateEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* lateUpdate; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATEUPDATEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATEUPDATEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATEUPDATEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATEUPDATEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATEUPDATEEVENT_LATEUPDATE_OFFSET))(this);
		}
	};
}
