#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CodeEventBase.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class Action; }

#define FLOWCANVAS_NODES_CODEEVENT_CALL_OFFSET UNITYSDK_OFFSET(0x1D3471D0)
#define FLOWCANVAS_NODES_CODEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D346F80)
#define FLOWCANVAS_NODES_CODEEVENT_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D346E80)
#define FLOWCANVAS_NODES_CODEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D347170)
#define FLOWCANVAS_NODES_CODEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D347210)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CodeEvent_TypeDefinitionIndex = 29814;

	class CodeEvent : public ::FlowCanvas::Nodes::CodeEventBase
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xC8
		::System::Action* pointer; // 0xD0

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
