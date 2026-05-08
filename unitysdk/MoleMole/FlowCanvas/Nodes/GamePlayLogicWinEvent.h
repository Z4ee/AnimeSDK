#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_ONRECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x10B9FC10)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10B9FB90)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x10B9F950)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x10B9FA70)
#define MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9FCE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int GamePlayLogicWinEvent_TypeDefinitionIndex = 72356;

	class GamePlayLogicWinEvent : public ::FlowCanvas::Nodes::RouterEventNode_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::FlowCanvas::FlowOutput* _onReceived; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnReceiveEvent(::System::String* eventName, ::ParadoxNotion::IEventData* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_GAMEPLAYLOGICWINEVENT_ONRECEIVEEVENT_OFFSET))(this, eventName, msg);
		}
	};
}
