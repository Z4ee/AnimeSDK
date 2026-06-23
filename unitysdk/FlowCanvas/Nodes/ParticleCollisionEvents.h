#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/ParticleCollisionEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1BC42240)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BC41DD0)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1BC41F80)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1BC420E0)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC424A0)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BC424F0)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x1BC42500)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x1BC42510)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_3_OFFSET UNITYSDK_OFFSET(0x1BC42550)
#define FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_4_OFFSET UNITYSDK_OFFSET(0x1BC425B0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ParticleCollisionEvents_TypeDefinitionIndex = 29751;

	class ParticleCollisionEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider*>
	{
	public:
		::FlowCanvas::FlowOutput* onCollision; // 0xC0
		::UnityEngine::ParticleSystem* particle; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::ParticleCollisionEvent>* collisionEvents; // 0xD0
		::UnityEngine::Collider* receiver; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnParticleCollision(::ParadoxNotion::EventData_1<::UnityEngine::GameObject*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::GameObject*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS_ONPARTICLECOLLISION_OFFSET))(this, msg);
		}

		::UnityEngine::Collider* _RegisterPorts_b__4_0()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* _RegisterPorts_b__4_1()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_3_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__4_4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_PARTICLECOLLISIONEVENTS__REGISTERPORTS_B__4_4_OFFSET))(this);
		}
	};
}
