#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class Stack; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_SPAWNERPOOL_CLEARPOOL_OFFSET UNITYSDK_OFFSET(0x1E4F5D10)
#define FOUNDATION_SPAWNERPOOL_DESPAWNALL_OFFSET UNITYSDK_OFFSET(0x1E4F5C50)
#define FOUNDATION_SPAWNERPOOL_DESPAWNLIST_OFFSET UNITYSDK_OFFSET(0x1E4F5AD0)
#define FOUNDATION_SPAWNERPOOL_DESPAWN_OFFSET UNITYSDK_OFFSET(0x1E4F5910)
#define FOUNDATION_SPAWNERPOOL_GETACTIVESPAWNS_OFFSET UNITYSDK_OFFSET(0x1E4F5DA0)
#define FOUNDATION_SPAWNERPOOL_PRESPAWN_OFFSET UNITYSDK_OFFSET(0x1E4F56C0)
#define FOUNDATION_SPAWNERPOOL_SPAWN_1_OFFSET UNITYSDK_OFFSET(0x1E4F53A0)
#define FOUNDATION_SPAWNERPOOL_SPAWN_OFFSET UNITYSDK_OFFSET(0x1E4F5300)
#define FOUNDATION_SPAWNERPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F5210)

namespace Foundation
{
	inline static constexpr unsigned int SpawnerPool_TypeDefinitionIndex = 7742;

	class SpawnerPool : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* SpawnObj; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SpawnedObjects; // 0x18
		::System::Collections::Stack* AvailableObjects; // 0x20
		::System::String* PoolName; // 0x28

		::System::Void _ctor(::System::String* poolName, ::UnityEngine::GameObject* objToSpawn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL__CTOR_OFFSET))(this, poolName, objToSpawn);
		}

		::UnityEngine::GameObject* Spawn(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_SPAWN_OFFSET))(this, position, rotation);
		}

		::UnityEngine::GameObject* Spawn_1(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Action_1<::UnityEngine::GameObject*>* spawnedAction)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_SPAWN_1_OFFSET))(this, position, rotation, spawnedAction);
		}

		::System::Void Prespawn(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_PRESPAWN_OFFSET))(this, count);
		}

		::System::Void Despawn(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_DESPAWN_OFFSET))(this, go);
		}

		::System::Void DespawnList(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* goObjList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_DESPAWNLIST_OFFSET))(this, goObjList);
		}

		::System::Void DespawnAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_DESPAWNALL_OFFSET))(this);
		}

		::System::Void ClearPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_CLEARPOOL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetActiveSpawns()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERPOOL_GETACTIVESPAWNS_OFFSET))(this);
		}
	};
}
