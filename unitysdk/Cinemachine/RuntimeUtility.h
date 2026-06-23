#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class SphereCollider; }

#define CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x1E09A6D0)
#define CINEMACHINE_RUNTIMEUTILITY_DESTROYSCRATCHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1E09BD50)
#define CINEMACHINE_RUNTIMEUTILITY_GETSCRATCHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1E09B9F0)
#define CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET UNITYSDK_OFFSET(0x1E09A880)
#define CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x1E09A890)
#define CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x1E09AD80)
#define CINEMACHINE_RUNTIMEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E09C4B0)

namespace Cinemachine
{
	inline static constexpr unsigned int RuntimeUtility_TypeDefinitionIndex = 34152;

	class RuntimeUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject** StaticGet_s_ScratchColliderGameObject()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(RuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27820);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_PenetrationIndexBuffer()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27828);
		}
		static ::UnityEngine::SphereCollider** StaticGet_s_ScratchCollider()
		{
			return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(RuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27830);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_s_HitBuffer()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void DestroyObject(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET))(obj);
		}

		static ::System::Boolean IsPrefab(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET))(gameObject);
		}

		static ::System::Boolean RaycastIgnoreTag(::UnityEngine::Ray ray, ::UnityEngine::RaycastHit& hitInfo, ::System::Single rayLength, ::System::Int32 layerMask, ::System::String*& ignoreTag)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET))(ray, hitInfo, rayLength, layerMask, ignoreTag);
		}

		static ::System::Boolean SphereCastIgnoreTag(::UnityEngine::Vector3 rayStart, ::System::Single radius, ::UnityEngine::Vector3 dir, ::UnityEngine::RaycastHit& hitInfo, ::System::Single rayLength, ::System::Int32 layerMask, ::System::String*& ignoreTag)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET))(rayStart, radius, dir, hitInfo, rayLength, layerMask, ignoreTag);
		}

		static ::UnityEngine::SphereCollider* GetScratchCollider()
		{
			return ((::UnityEngine::SphereCollider*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_GETSCRATCHCOLLIDER_OFFSET))();
		}

		static ::System::Void DestroyScratchCollider()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_DESTROYSCRATCHCOLLIDER_OFFSET))();
		}
	};
}
