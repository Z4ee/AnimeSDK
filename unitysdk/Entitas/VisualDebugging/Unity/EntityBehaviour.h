#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x12C5A3B0)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x12C5A3C0)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x12C5A3D0)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C5A730)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x12C5A510)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x12C5A690)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5A810)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int EntityBehaviour_TypeDefinitionIndex = 9887;

	class EntityBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Entitas::IContext* _context; // 0x18
		::Entitas::IEntity* _entity; // 0x20
		::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* _entityBehaviourPool; // 0x28
		::System::String* _cachedName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::Entitas::IContext* get_context()
		{
			return ((::Entitas::IContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_GET_CONTEXT_OFFSET))(this);
		}

		::Entitas::IEntity* get_entity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_GET_ENTITY_OFFSET))(this);
		}

		::System::Void Init(::Entitas::IContext* context, ::Entitas::IEntity* entity, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* entityBehaviourPool)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_INIT_OFFSET))(this, context, entity, entityBehaviourPool);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* e)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, e);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}
	};
}
