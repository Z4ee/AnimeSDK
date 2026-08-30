#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1EED27E0)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1EED27F0)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_INIT_OFFSET UNITYSDK_OFFSET(0x1EED2800)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EED3000)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET UNITYSDK_OFFSET(0x1EED2B50)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EED2E80)
#define ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED3270)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int EntityBehaviour_TypeDefinitionIndex = 10007;

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

		::System::Void Init(::Entitas::IContext* a1, ::Entitas::IEntity* a2, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*, ::System::Collections::Generic::Stack_1<::Entitas::VisualDebugging::Unity::EntityBehaviour*>*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void onEntityReleased(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_ENTITYBEHAVIOUR_ONENTITYRELEASED_OFFSET))(this, a1);
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
