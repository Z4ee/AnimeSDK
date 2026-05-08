#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }

#define FLOWCANVAS_NODES_CUSTOMEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADAD510)
#define FLOWCANVAS_NODES_CUSTOMEVENT_ONCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1ADAD840)
#define FLOWCANVAS_NODES_CUSTOMEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1ADAD760)
#define FLOWCANVAS_NODES_CUSTOMEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1ADAD5A0)
#define FLOWCANVAS_NODES_CUSTOMEVENT_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1ADAD680)
#define FLOWCANVAS_NODES_CUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADADB80)
#define FLOWCANVAS_NODES_CUSTOMEVENT__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1ADADC00)
#define FLOWCANVAS_NODES_CUSTOMEVENT__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1ADADC10)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomEvent_TypeDefinitionIndex = 27045;

	class CustomEvent : public ::FlowCanvas::Nodes::RouterEventNode_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::FlowCanvas::FlowOutput* onReceived; // 0xC0
		::NodeCanvas::Framework::GraphOwner* receiver; // 0xC8
		::NodeCanvas::Framework::GraphOwner* sender; // 0xD0
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnCustomEvent(::System::String* eventName, ::ParadoxNotion::IEventData* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT_ONCUSTOMEVENT_OFFSET))(this, eventName, msg);
		}

		::NodeCanvas::Framework::GraphOwner* _RegisterPorts_b__8_0()
		{
			return ((::NodeCanvas::Framework::GraphOwner*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::NodeCanvas::Framework::GraphOwner* _RegisterPorts_b__8_1()
		{
			return ((::NodeCanvas::Framework::GraphOwner*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENT__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
