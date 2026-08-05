#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class ValueInput; }
namespace ParadoxNotion::Serialization { class ISerializedReflectedInfo; }
namespace ParadoxNotion::Serialization { class SerializedEventInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Reflection { class EventInfo; }

#define FLOWCANVAS_NODES_GETSHARPEVENT_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1E722030)
#define FLOWCANVAS_NODES_GETSHARPEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E722060)
#define FLOWCANVAS_NODES_GETSHARPEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET UNITYSDK_OFFSET(0x1E722320)
#define FLOWCANVAS_NODES_GETSHARPEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E722390)
#define FLOWCANVAS_NODES_GETSHARPEVENT_SETEVENT_OFFSET UNITYSDK_OFFSET(0x1E722330)
#define FLOWCANVAS_NODES_GETSHARPEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7225E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetSharpEvent_TypeDefinitionIndex = 31188;

	class GetSharpEvent : public ::FlowCanvas::FlowNode
	{
	public:
		::ParadoxNotion::Serialization::SerializedEventInfo* _event; // 0xA8
		::FlowCanvas::ValueInput* instancePort; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT__CTOR_OFFSET))(this);
		}

		::System::Reflection::EventInfo* get_eventInfo()
		{
			return ((::System::Reflection::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT_GET_EVENTINFO_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT_GET_NAME_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::ISerializedReflectedInfo* NodeCanvas_Framework_IReflectedWrapper_GetSerializedInfo()
		{
			return ((::ParadoxNotion::Serialization::ISerializedReflectedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT_NODECANVAS_FRAMEWORK_IREFLECTEDWRAPPER_GETSERIALIZEDINFO_OFFSET))(this);
		}

		::System::Void SetEvent(::System::Reflection::EventInfo* info, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::EventInfo*, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT_SETEVENT_OFFSET))(this, info, instance);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETSHARPEVENT_REGISTERPORTS_OFFSET))(this);
		}
	};
}
