#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1D51F0B0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1D51F1F0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1D51F150)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D51EB50)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D51EC70)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D51EE90)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D51F290)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D51F2E0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D51F2F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Trigger2DEvents_Transform_TypeDefinitionIndex = 30359;

	class Trigger2DEvents_Transform : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Transform*>
	{
	public:
		::FlowCanvas::FlowOutput* onEnter; // 0xC0
		::FlowCanvas::FlowOutput* onStay; // 0xC8
		::UnityEngine::Transform* receiver; // 0xD0
		::FlowCanvas::FlowOutput* onExit; // 0xD8
		::UnityEngine::GameObject* other; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnTriggerEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_ONTRIGGERENTER2D_OFFSET))(this, msg);
		}

		::System::Void OnTriggerStay2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_ONTRIGGERSTAY2D_OFFSET))(this, msg);
		}

		::System::Void OnTriggerExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM_ONTRIGGEREXIT2D_OFFSET))(this, msg);
		}

		::UnityEngine::Transform* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_TRANSFORM__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
