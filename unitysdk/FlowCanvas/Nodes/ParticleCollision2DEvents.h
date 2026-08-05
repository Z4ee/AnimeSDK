#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ParticleCollisionEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1E8B8790)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E8B8420)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E8B85D0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1E8B86B0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B89F0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E8B8A40)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1E8B8A50)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x1E8B8A60)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_3_OFFSET UNITYSDK_OFFSET(0x1E8B8AA0)
#define FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_4_OFFSET UNITYSDK_OFFSET(0x1E8B8B00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParticleCollision2DEvents_TypeDefinitionIndex = 30668;

	class ParticleCollision2DEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider2D*>
	{
	public:
		::UnityEngine::Collider2D* receiver; // 0xC0
		::FlowCanvas::FlowOutput* onCollision; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* collisionEvents; // 0xD0
		::UnityEngine::ParticleSystem* particle; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnParticleCollision(::ParadoxNotion::EventData_1<::UnityEngine::GameObject*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::GameObject*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS_ONPARTICLECOLLISION_OFFSET))(this, msg);
		}

		::UnityEngine::Collider2D* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* _RegisterPorts_b__4_1()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_3_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISION2DEVENTS__REGISTERPORTS_B__4_4_OFFSET))(this);
		}
	};
}
