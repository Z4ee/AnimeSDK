#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/StaticCodeEventBase.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { class Action; }

#define FLOWCANVAS_NODES_STATICCODEEVENT_CALL_OFFSET UNITYSDK_OFFSET(0x1D83CAC0)
#define FLOWCANVAS_NODES_STATICCODEEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D83C890)
#define FLOWCANVAS_NODES_STATICCODEEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D83C980)
#define FLOWCANVAS_NODES_STATICCODEEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D83CB00)
#define FLOWCANVAS_NODES_STATICCODEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83CB60)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StaticCodeEvent_TypeDefinitionIndex = 30584;

	class StaticCodeEvent : public ::FlowCanvas::Nodes::StaticCodeEventBase
	{
	public:
		::FlowCanvas::FlowOutput* o; // 0xB8
		::System::Action* pointer; // 0xC0

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
