#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_COLLISION2DEVENTS_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1AF21100)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1AF21220)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_ONCOLLISIONSTAY2D_OFFSET UNITYSDK_OFFSET(0x1AF21190)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1AF20B30)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1AF20CE0)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1AF20EF0)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF212B0)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1AF21300)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1AF21310)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1AF21330)
#define FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1AF213F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Collision2DEvents_TypeDefinitionIndex = 28098;

	class Collision2DEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider2D*>
	{
	public:
		::UnityEngine::Collision2D* collision; // 0xC0
		::FlowCanvas::FlowOutput* onStay; // 0xC8
		::UnityEngine::Collider2D* receiver; // 0xD0
		::FlowCanvas::FlowOutput* onExit; // 0xD8
		::FlowCanvas::FlowOutput* onEnter; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnCollisionEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_ONCOLLISIONENTER2D_OFFSET))(this, msg);
		}

		::System::Void OnCollisionStay2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_ONCOLLISIONSTAY2D_OFFSET))(this, msg);
		}

		::System::Void OnCollisionExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS_ONCOLLISIONEXIT2D_OFFSET))(this, msg);
		}

		::UnityEngine::Collider2D* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::UnityEngine::ContactPoint2D _RegisterPorts_b__5_2()
		{
			return ((::UnityEngine::ContactPoint2D(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::UnityEngine::Collision2D* _RegisterPorts_b__5_3()
		{
			return ((::UnityEngine::Collision2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISION2DEVENTS__REGISTERPORTS_B__5_3_OFFSET))(this);
		}
	};
}
