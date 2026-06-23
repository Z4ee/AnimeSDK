#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes { class ReflectedDelegateEvent; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedEventInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class EventInfo; }

#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1D1D8340)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_GET_ISSTATICEVENT_OFFSET UNITYSDK_OFFSET(0x1D1D8360)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D1D83D0)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1D1D8740)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_ONEVENTRAISED_OFFSET UNITYSDK_OFFSET(0x1D1D91B0)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D1D8C50)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D1D8FE0)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D1D87A0)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1D1D8750)
#define FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D9200)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CSharpAutoCallbackEvent_TypeDefinitionIndex = 29968;

	class CSharpAutoCallbackEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* callback; // 0xA8
		::System::Object* instance; // 0xB0
		::FlowCanvas::ValueInput* instancePort; // 0xB8
		::FlowCanvas::Nodes::ReflectedDelegateEvent* reflectedEvent; // 0xC0
		::Il2CppArray<::System::Object*>* args; // 0xC8
		::ParadoxNotion::Serialization::SerializedEventInfo* _event; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT__CTOR_OFFSET))(this);
		}

		::System::Reflection::EventInfo* get_eventInfo()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Boolean get_isStaticEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_GET_ISSTATICEVENT_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_GET_NAME_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void SetEvent(::System::Reflection::EventInfo* info, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_SETEVENT_OFFSET))(this, info, instance);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnEventRaised(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPAUTOCALLBACKEVENT_ONEVENTRAISED_OFFSET))(this, args);
		}
	};
}
