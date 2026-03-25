#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace Entitas::Unity { class EntityLink; }
namespace UnityEngine { class GameObject; }

#define ENTITAS_UNITY_ENTITYLINKEXTENSION_GETENTITYLINK_OFFSET UNITYSDK_OFFSET(0x11A88150)
#define ENTITAS_UNITY_ENTITYLINKEXTENSION_LINK_OFFSET UNITYSDK_OFFSET(0x11A881F0)
#define ENTITAS_UNITY_ENTITYLINKEXTENSION_UNLINK_OFFSET UNITYSDK_OFFSET(0x11A88310)

namespace Entitas::Unity
{
	inline static constexpr unsigned int EntityLinkExtension_TypeDefinitionIndex = 9757;

	class EntityLinkExtension : public ::System::Object
	{
	public:
		static ::Entitas::Unity::EntityLink* GetEntityLink(::UnityEngine::GameObject* gameObject)
		{
			return ((::Entitas::Unity::EntityLink*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINKEXTENSION_GETENTITYLINK_OFFSET))(gameObject);
		}

		static ::Entitas::Unity::EntityLink* Link(::UnityEngine::GameObject* gameObject, ::Entitas::IEntity* entity)
		{
			return ((::Entitas::Unity::EntityLink*(*)(::UnityEngine::GameObject*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINKEXTENSION_LINK_OFFSET))(gameObject, entity);
		}

		static ::System::Void Unlink(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINKEXTENSION_UNLINK_OFFSET))(gameObject);
		}
	};
}
