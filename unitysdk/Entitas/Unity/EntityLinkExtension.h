#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace Entitas::Unity { class EntityLink; }
namespace UnityEngine { class GameObject; }

#define ENTITAS_UNITY_ENTITYLINKEXTENSION_GETENTITYLINK_OFFSET UNITYSDK_OFFSET(0x1EECE5C0)
#define ENTITAS_UNITY_ENTITYLINKEXTENSION_LINK_OFFSET UNITYSDK_OFFSET(0x1EECE660)
#define ENTITAS_UNITY_ENTITYLINKEXTENSION_UNLINK_OFFSET UNITYSDK_OFFSET(0x1EECE780)

namespace Entitas::Unity
{
	inline static constexpr unsigned int EntityLinkExtension_TypeDefinitionIndex = 10010;

	class EntityLinkExtension : public ::System::Object
	{
	public:
		static ::Entitas::Unity::EntityLink* GetEntityLink(::UnityEngine::GameObject* a1)
		{
			return ((::Entitas::Unity::EntityLink*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINKEXTENSION_GETENTITYLINK_OFFSET))(a1);
		}

		static ::Entitas::Unity::EntityLink* Link(::UnityEngine::GameObject* a1, ::Entitas::IEntity* a2)
		{
			return ((::Entitas::Unity::EntityLink*(*)(::UnityEngine::GameObject*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINKEXTENSION_LINK_OFFSET))(a1, a2);
		}

		static ::System::Void Unlink(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ENTITAS_UNITY_ENTITYLINKEXTENSION_UNLINK_OFFSET))(a1);
		}
	};
}
