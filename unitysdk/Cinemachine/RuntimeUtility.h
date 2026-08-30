#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x1EF0AC40)
#define CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET UNITYSDK_OFFSET(0x1EF0AC60)
#define CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x1EF0AC70)
#define CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET UNITYSDK_OFFSET(0x1EF0B140)

namespace Cinemachine
{
	inline static constexpr unsigned int RuntimeUtility_TypeDefinitionIndex = 38546;

	class RuntimeUtility : public ::System::Object
	{
	public:
		static ::System::Void DestroyObject(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_DESTROYOBJECT_OFFSET))(a1);
		}

		static ::System::Boolean IsPrefab(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_ISPREFAB_OFFSET))(a1);
		}

		static ::System::Boolean RaycastIgnoreTag(::UnityEngine::Ray a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::System::Int32 a4, ::System::String*& a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_RAYCASTIGNORETAG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean SphereCastIgnoreTag(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::RaycastHit& a4, ::System::Single a5, ::System::Int32 a6, ::System::String*& a7)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + CINEMACHINE_RUNTIMEUTILITY_SPHERECASTIGNORETAG_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
