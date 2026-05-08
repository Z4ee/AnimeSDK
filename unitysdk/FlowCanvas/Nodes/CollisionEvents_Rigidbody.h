#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ContactPoint.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1B4167D0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1B4168F0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0x1B416860)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B416200)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B4163B0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B4165C0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B416980)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B4169D0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_1_OFFSET UNITYSDK_OFFSET(0x1B4169E0)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_2_OFFSET UNITYSDK_OFFSET(0x1B416A00)
#define FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_3_OFFSET UNITYSDK_OFFSET(0x1B416AB0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CollisionEvents_Rigidbody_TypeDefinitionIndex = 27978;

	class CollisionEvents_Rigidbody : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Rigidbody*>
	{
	public:
		::FlowCanvas::FlowOutput* onEnter; // 0xC0
		::FlowCanvas::FlowOutput* onExit; // 0xC8
		::FlowCanvas::FlowOutput* onStay; // 0xD0
		::UnityEngine::Collision* collision; // 0xD8
		::UnityEngine::Rigidbody* receiver; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnCollisionEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONENTER_OFFSET))(this, msg);
		}

		::System::Void OnCollisionStay(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONSTAY_OFFSET))(this, msg);
		}

		::System::Void OnCollisionExit(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY_ONCOLLISIONEXIT_OFFSET))(this, msg);
		}

		::UnityEngine::Rigidbody* _RegisterPorts_b__5_0()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_0_OFFSET))(this);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__5_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_1_OFFSET))(this);
		}

		::UnityEngine::ContactPoint _RegisterPorts_b__5_2()
		{
			return ((::UnityEngine::ContactPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_2_OFFSET))(this);
		}

		::UnityEngine::Collision* _RegisterPorts_b__5_3()
		{
			return ((::UnityEngine::Collision*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_COLLISIONEVENTS_RIGIDBODY__REGISTERPORTS_B__5_3_OFFSET))(this);
		}
	};
}
