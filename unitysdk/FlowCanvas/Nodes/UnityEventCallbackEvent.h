#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class Port; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes { class ReflectedUnityEvent; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }
namespace System { class Object; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A8F7850)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_GET_AUTOHANDLEREGISTRATION_OFFSET UNITYSDK_OFFSET(0x1A8F71A0)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A8F7100)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1A8F71B0)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONEVENTRAISED_OFFSET UNITYSDK_OFFSET(0x1A8F7800)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A8F71C0)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8F7300)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A8F7880)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A8F7400)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A8F71D0)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_SET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A8F7120)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1A8F7310)
#define FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F7A20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UnityEventCallbackEvent_TypeDefinitionIndex = 27256;

	class UnityEventCallbackEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::Il2CppArray<::System::Object*>* argValues; // 0xA8
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0xB0
		::FlowCanvas::ValueInput* eventInput; // 0xB8
		::FlowCanvas::Nodes::ReflectedUnityEvent* reflectedEvent; // 0xC0
		::FlowCanvas::FlowOutput* flowCallback; // 0xC8
		::System::Boolean _autoHandleRegistration; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT__CTOR_OFFSET))(this);
		}

		::System::Type* get_eventType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::Void set_eventType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_SET_EVENTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_autoHandleRegistration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_GET_AUTOHANDLEREGISTRATION_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Register(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_REGISTER_OFFSET))(this, f);
		}

		::System::Void Unregister(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_UNREGISTER_OFFSET))(this, f);
		}

		::System::Void OnEventRaised(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONEVENTRAISED_OFFSET))(this, args);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UNITYEVENTCALLBACKEVENT_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}
	};
}
