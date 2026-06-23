#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_APPLICATIONQUITEVENT_APPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x1D7FD6E0)
#define FLOWCANVAS_NODES_APPLICATIONQUITEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D7FD540)
#define FLOWCANVAS_NODES_APPLICATIONQUITEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D7FD610)
#define FLOWCANVAS_NODES_APPLICATIONQUITEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D7FD720)
#define FLOWCANVAS_NODES_APPLICATIONQUITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FD770)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ApplicationQuitEvent_TypeDefinitionIndex = 30526;

	class ApplicationQuitEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* quit; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONQUITEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONQUITEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONQUITEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void ApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONQUITEVENT_APPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONQUITEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
