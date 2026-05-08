#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_ONRECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x125CB560)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x125CB1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x125CB320)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x125CB440)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x125CB840)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x125CB890)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__REGISTERPORTS_B__6_1_OFFSET UNITYSDK_OFFSET(0x125CB8A0)
#define MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__REGISTERPORTS_B__6_2_OFFSET UNITYSDK_OFFSET(0x125CB8B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ShootGamePatternEvent_TypeDefinitionIndex = 72134;

	class ShootGamePatternEvent : public ::FlowCanvas::Nodes::RouterEventNode_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::System::String* _output; // 0xC0
		::FlowCanvas::FlowOutput* _onReceived; // 0xC8
		::System::String* _beatmapName; // 0xD0
		::System::Int32 _instanceId; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnReceiveEvent(::System::String* key, ::ParadoxNotion::IEventData* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT_ONRECEIVEEVENT_OFFSET))(this, key, message);
		}

		::System::String* _RegisterPorts_b__6_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__REGISTERPORTS_B__6_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__6_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__REGISTERPORTS_B__6_1_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__6_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_SHOOTGAMEPATTERNEVENT__REGISTERPORTS_B__6_2_OFFSET))(this);
		}
	};
}
