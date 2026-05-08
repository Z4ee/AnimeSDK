#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CodeEventBase.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class Action; }

#define FLOWCANVAS_NODES_CODEEVENT_CALL_OFFSET UNITYSDK_OFFSET(0x1AF20AA0)
#define FLOWCANVAS_NODES_CODEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1AF20850)
#define FLOWCANVAS_NODES_CODEEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1AF20750)
#define FLOWCANVAS_NODES_CODEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1AF20A40)
#define FLOWCANVAS_NODES_CODEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF20AE0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CodeEvent_TypeDefinitionIndex = 26856;

	class CodeEvent : public ::FlowCanvas::Nodes::CodeEventBase
	{
	public:
		::System::Action* pointer; // 0xC8
		::FlowCanvas::FlowOutput* o; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENT_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CODEEVENT_CALL_OFFSET))(this);
		}
	};
}
