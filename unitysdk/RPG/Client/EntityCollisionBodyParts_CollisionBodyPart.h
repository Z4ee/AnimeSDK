#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_COLLISIONBODYPART__CTOR_OFFSET UNITYSDK_OFFSET(0xB910D60)

namespace RPG::Client
{
	inline static constexpr unsigned int EntityCollisionBodyParts_CollisionBodyPart_TypeDefinitionIndex = 63999;

	class EntityCollisionBodyParts_CollisionBodyPart : public ::System::Object
	{
	public:
		::UnityEngine::Collider* HitBox; // 0x10
		::System::String* MappedPartModelName; // 0x18
		::System::Int32 Priority; // 0x20
		::System::Boolean IsMainBody; // 0x24
		::UnityEngine::Vector3 EffectAnchorOffset; // 0x28
		::UnityEngine::GameObject* MappedPartModelGo; // 0x38
		::UnityEngine::Animator* MappedPartAnim; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENTITYCOLLISIONBODYPARTS_COLLISIONBODYPART__CTOR_OFFSET))(this);
		}
	};
}
