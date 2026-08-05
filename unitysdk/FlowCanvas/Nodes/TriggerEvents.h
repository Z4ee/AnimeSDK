#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1E22BDC0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1E22BF00)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0x1E22BE60)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E22B880)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E22B9A0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E22BBB0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22BFA0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1E22BFF0)
#define FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1E22C000)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TriggerEvents_TypeDefinitionIndex = 30157;

	class TriggerEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider*>
	{
	public:
		::FlowCanvas::FlowOutput* onStay; // 0xC0
		::UnityEngine::GameObject* other; // 0xC8
		::UnityEngine::Collider* receiver; // 0xD0
		::FlowCanvas::FlowOutput* onExit; // 0xD8
		::FlowCanvas::FlowOutput* onEnter; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnTriggerEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERENTER_OFFSET))(this, msg);
		}

		::System::Void OnTriggerStay(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGERSTAY_OFFSET))(this, msg);
		}

		::System::Void OnTriggerExit(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS_ONTRIGGEREXIT_OFFSET))(this, msg);
		}

		::UnityEngine::Collider* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGEREVENTS__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
