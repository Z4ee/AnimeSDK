#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1D0590C0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1D059200)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_ONTRIGGERSTAY2D_OFFSET UNITYSDK_OFFSET(0x1D059160)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1D058B80)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D058CA0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1D058EB0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0592A0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1D0592F0)
#define FLOWCANVAS_NODES_TRIGGER2DEVENTS__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1D059300)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Trigger2DEvents_TypeDefinitionIndex = 29822;

	class Trigger2DEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider2D*>
	{
	public:
		::FlowCanvas::FlowOutput* onExit; // 0xC0
		::UnityEngine::Collider2D* receiver; // 0xC8
		::FlowCanvas::FlowOutput* onStay; // 0xD0
		::FlowCanvas::FlowOutput* onEnter; // 0xD8
		::UnityEngine::GameObject* other; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnTriggerEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_ONTRIGGERENTER2D_OFFSET))(this, msg);
		}

		::System::Void OnTriggerStay2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_ONTRIGGERSTAY2D_OFFSET))(this, msg);
		}

		::System::Void OnTriggerExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS_ONTRIGGEREXIT2D_OFFSET))(this, msg);
		}

		::UnityEngine::Collider2D* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TRIGGER2DEVENTS__REGISTERPORTS_B__5_1_OFFSET))(this);
		}
	};
}
