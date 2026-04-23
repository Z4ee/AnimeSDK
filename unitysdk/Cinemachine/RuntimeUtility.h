#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x12BA7640)
#define CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET UNITYSDK_OFFSET(0x12BA7660)
#define CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x12BA7670)
#define CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x12BA7B50)

namespace Cinemachine
{
	inline static constexpr unsigned int RuntimeUtility_TypeDefinitionIndex = 36605;

	class RuntimeUtility : public ::System::Object
	{
	public:
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
	};
}
