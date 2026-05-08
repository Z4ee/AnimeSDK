#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { class Port; }
namespace FlowCanvas { class ValueOutput; }
namespace FlowCanvas::Nodes { class ReflectedDelegateEvent; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }
namespace System { class Object; }
namespace System { class Type; }

#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1A845060)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_GET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1A844B10)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1A844BB0)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A8450B0)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_ONPORTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A8450C0)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A844BC0)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_SET_DELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x1A844B30)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A845260)
#define FLOWCANVAS_NODES_DELEGATECALLBACKEVENT__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A8452A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int DelegateCallbackEvent_TypeDefinitionIndex = 27975;

	class DelegateCallbackEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::FlowCanvas::FlowOutput* callbackPort; // 0xA8
		::Il2CppArray<::System::Object*>* args; // 0xB0
		::FlowCanvas::ValueOutput* delegatePort; // 0xB8
		::FlowCanvas::Nodes::ReflectedDelegateEvent* reflectedEvent; // 0xC0
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT__CTOR_OFFSET))(this);
		}

		::System::Type* get_delegateType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_GET_DELEGATETYPE_OFFSET))(this);
		}

		::System::Void set_delegateType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_SET_DELEGATETYPE_OFFSET))(this, value);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Callback(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_CALLBACK_OFFSET))(this, args);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnPortConnected(::FlowCanvas::Port* port, ::FlowCanvas::Port* otherPort)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Port*, ::FlowCanvas::Port*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT_ONPORTCONNECTED_OFFSET))(this, port, otherPort);
		}

		::System::Object* _RegisterPorts_b__9_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_DELEGATECALLBACKEVENT__REGISTERPORTS_B__9_0_OFFSET))(this);
		}
	};
}
