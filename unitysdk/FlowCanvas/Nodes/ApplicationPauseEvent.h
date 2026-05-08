#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }

#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_APPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A1F3AB0)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A1F3910)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A1F39E0)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A1F3B00)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F3B90)
#define FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A1F3BD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ApplicationPauseEvent_TypeDefinitionIndex = 26783;

	class ApplicationPauseEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* pause; // 0xA8
		::System::Boolean isPause; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void ApplicationPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_APPLICATIONPAUSE_OFFSET))(this, isPause);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_APPLICATIONPAUSEEVENT__REGISTERPORTS_B__5_0_OFFSET))(this);
		}
	};
}
