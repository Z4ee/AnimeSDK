#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo; }

#define FLOWCANVAS_NODES_STATICCODEEVENTBASE_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1CC35D60)
#define FLOWCANVAS_NODES_STATICCODEEVENTBASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1CC35E90)
#define FLOWCANVAS_NODES_STATICCODEEVENTBASE_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1CC35DE0)
#define FLOWCANVAS_NODES_STATICCODEEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC35FD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int StaticCodeEventBase_TypeDefinitionIndex = 29151;

	class StaticCodeEventBase : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::System::String* eventName; // 0xA8
		::System::Type* targetType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE__CTOR_OFFSET))(this);
		}

		::System::Reflection::EventInfo* get_eventInfo()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void SetEvent(::System::Reflection::EventInfo* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE_SETEVENT_OFFSET))(this, e);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_STATICCODEEVENTBASE_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
