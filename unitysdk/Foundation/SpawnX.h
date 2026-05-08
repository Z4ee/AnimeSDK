#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_SPAWNX_DESPAWN_OFFSET UNITYSDK_OFFSET(0x1BE57AE0)
#define FOUNDATION_SPAWNX_PRESPAWN_OFFSET UNITYSDK_OFFSET(0x1BE57B60)
#define FOUNDATION_SPAWNX_SPAWN_1_OFFSET UNITYSDK_OFFSET(0x1BE579D0)
#define FOUNDATION_SPAWNX_SPAWN_OFFSET UNITYSDK_OFFSET(0x1BE578D0)

namespace Foundation
{
	inline static constexpr unsigned int SpawnX_TypeDefinitionIndex = 7921;

	class SpawnX : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* Spawn(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNX_SPAWN_OFFSET))(go, position, rotation);
		}

		static ::UnityEngine::GameObject* Spawn_1(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Action_1<::UnityEngine::GameObject*>* spawnedAction)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNX_SPAWN_1_OFFSET))(go, position, rotation, spawnedAction);
		}

		static ::System::Void Despawn(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNX_DESPAWN_OFFSET))(go);
		}

		static ::System::Void PreSpawn(::UnityEngine::GameObject* go, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNX_PRESPAWN_OFFSET))(go, count);
		}
	};
}
