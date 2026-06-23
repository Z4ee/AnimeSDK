#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D6DDC20)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D6DDB90)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6DDB00)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D6DD5E0)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D6DD6C0)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D6DD8E0)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DDCB0)
#define FLOWCANVAS_NODES_OBJECTSTATEEVENTS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D6DDD00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ObjectStateEvents_TypeDefinitionIndex = 30482;

	class ObjectStateEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Transform*>
	{
	public:
		::FlowCanvas::FlowOutput* onDestroy; // 0xC0
		::UnityEngine::GameObject* receiver; // 0xC8
		::FlowCanvas::FlowOutput* onDisable; // 0xD0
		::FlowCanvas::FlowOutput* onEnable; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnEnable(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS_ONENABLE_OFFSET))(this, msg);
		}

		::System::Void OnDisable(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS_ONDISABLE_OFFSET))(this, msg);
		}

		::System::Void OnDestroy(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS_ONDESTROY_OFFSET))(this, msg);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_OBJECTSTATEEVENTS__REGISTERPORTS_B__4_0_OFFSET))(this);
		}
	};
}
