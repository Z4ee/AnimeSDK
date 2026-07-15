#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define SRF_SRMONOBEHAVIOUR_ASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1CED1F20)
#define SRF_SRMONOBEHAVIOUR_ASSERT_OFFSET UNITYSDK_OFFSET(0x1CED1F40)
#define SRF_SRMONOBEHAVIOUR_EDITORASSERTNOTNULL_OFFSET UNITYSDK_OFFSET(0x1CED1F50)
#define SRF_SRMONOBEHAVIOUR_EDITORASSERT_OFFSET UNITYSDK_OFFSET(0x1CED1F70)
#define SRF_SRMONOBEHAVIOUR_GET_CACHEDCOLLIDER2D_OFFSET UNITYSDK_OFFSET(0x1CED1CC0)
#define SRF_SRMONOBEHAVIOUR_GET_CACHEDCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1CED1C40)
#define SRF_SRMONOBEHAVIOUR_GET_CACHEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1CED1EA0)
#define SRF_SRMONOBEHAVIOUR_GET_CACHEDRIGIDBODY2D_OFFSET UNITYSDK_OFFSET(0x1CED1DF0)
#define SRF_SRMONOBEHAVIOUR_GET_CACHEDRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1CED1D70)
#define SRF_SRMONOBEHAVIOUR_GET_CACHEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CED1C00)
#define SRF_SRMONOBEHAVIOUR_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CED1EE0)
#define SRF_SRMONOBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED1F80)

namespace SRF
{
	inline static constexpr unsigned int SRMonoBehaviour_TypeDefinitionIndex = 33925;

	class SRMonoBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* _collider; // 0x18
		::UnityEngine::Transform* _transform; // 0x20
		::UnityEngine::Rigidbody* _rigidBody; // 0x28
		::UnityEngine::GameObject* _gameObject; // 0x30
		::UnityEngine::Rigidbody2D* _rigidbody2D; // 0x38
		::UnityEngine::Collider2D* _collider2D; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_CachedTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_CACHEDTRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Collider* get_CachedCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_CACHEDCOLLIDER_OFFSET))(this);
		}

		::UnityEngine::Collider2D* get_CachedCollider2D()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_CACHEDCOLLIDER2D_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* get_CachedRigidBody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_CACHEDRIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_CachedRigidBody2D()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_CACHEDRIGIDBODY2D_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_CachedGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_CACHEDGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void AssertNotNull(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_ASSERTNOTNULL_OFFSET))(this, a1, a2);
		}

		::System::Void Assert(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_ASSERT_OFFSET))(this, a1, a2);
		}

		::System::Void EditorAssertNotNull(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_EDITORASSERTNOTNULL_OFFSET))(this, a1, a2);
		}

		::System::Void EditorAssert(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRF_SRMONOBEHAVIOUR_EDITORASSERT_OFFSET))(this, a1, a2);
		}
	};
}
