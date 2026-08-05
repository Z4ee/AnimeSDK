#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ContactPoint.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define FLOWCANVAS_NODES_COLLISIONEVENTS_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1E721390)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1E7214B0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1E721420)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E720DC0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E720F70)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E721180)
#define FLOWCANVAS_NODES_COLLISIONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E721540)
#define FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1E721590)
#define FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1E7215A0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1E7215C0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1E721670)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CollisionEvents_TypeDefinitionIndex = 30671;

	class CollisionEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider*>
	{
	public:
		::FlowCanvas::FlowOutput* onExit; // 0xC0
		::FlowCanvas::FlowOutput* onStay; // 0xC8
		::UnityEngine::Collider* receiver; // 0xD0
		::UnityEngine::Collision* collision; // 0xD8
		::FlowCanvas::FlowOutput* onEnter; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnCollisionEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_ONCOLLISIONENTER_OFFSET))(this, msg);
		}

		::System::Void OnCollisionStay(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_ONCOLLISIONSTAY_OFFSET))(this, msg);
		}

		::System::Void OnCollisionExit(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_ONCOLLISIONEXIT_OFFSET))(this, msg);
		}

		::UnityEngine::Collider* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::UnityEngine::ContactPoint _RegisterPorts_b__5_2()
		{
			return ((::UnityEngine::ContactPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::UnityEngine::Collision* _RegisterPorts_b__5_3()
		{
			return ((::UnityEngine::Collision*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS__REGISTERPORTS_B__5_3_OFFSET))(this);
		}
	};
}
