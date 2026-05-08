#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/StaticCodeEventBase.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class Action; }

#define FLOWCANVAS_NODES_STATICCODEEVENT_CALL_OFFSET UNITYSDK_OFFSET(0x1B49C850)
#define FLOWCANVAS_NODES_STATICCODEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B49C620)
#define FLOWCANVAS_NODES_STATICCODEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B49C710)
#define FLOWCANVAS_NODES_STATICCODEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B49C890)
#define FLOWCANVAS_NODES_STATICCODEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49C8F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StaticCodeEvent_TypeDefinitionIndex = 28160;

	class StaticCodeEvent : public ::FlowCanvas::Nodes::StaticCodeEventBase
	{
	public:
		::System::Action* pointer; // 0xB8
		::FlowCanvas::FlowOutput* o; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void Call()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENT_CALL_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
