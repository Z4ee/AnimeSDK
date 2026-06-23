#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class Port; }
namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas::Nodes { class ReflectedDelegateEvent; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }
namespace System { class Object; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1CC32320)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_GETNODEWILDDEFINITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CC32370)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_GET_AUTOHANDLEREGISTRATION_OFFSET UNITYSDK_OFFSET(0x1CC31C40)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CC31BA0)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1CC31C50)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1CC31C60)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1CC31D90)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1CC323A0)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1CC31EA0)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CC31C70)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CC31BC0)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CC31DC0)
#define FLOWCANVAS_NODES_CSHARPEVENTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC32540)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CSharpEventCallback_TypeDefinitionIndex = 29107;

	class CSharpEventCallback : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::ValueInput* eventInput; // 0xA8
		::FlowCanvas::FlowOutput* flowCallback; // 0xB0
		::Il2CppArray<::System::Object*>* argValues; // 0xB8
		::FlowCanvas::Nodes::ReflectedDelegateEvent* reflectedEvent; // 0xC0
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0xC8
		::System::Boolean _autoHandleRegistration; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK__CTOR_OFFSET))(this);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_autoHandleRegistration()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_GET_AUTOHANDLEREGISTRATION_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Register(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_REGISTER_OFFSET))(this, f);
		}

		::System::Void Unregister(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_UNREGISTER_OFFSET))(this, f);
		}

		::System::Void Callback(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_CALLBACK_OFFSET))(this, args);
		}

		::System::Type* GetNodeWildDefinitionType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_GETNODEWILDDEFINITIONTYPE_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CSHARPEVENTCALLBACK_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}
	};
}
