#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MonoSingletonExt_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation { class SpawnerPool; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_SPAWNER_DESPAWN_OFFSET UNITYSDK_OFFSET(0x1F0A6C20)
#define FOUNDATION_SPAWNER_PRESPAWN_OFFSET UNITYSDK_OFFSET(0x1F0A6F40)
#define FOUNDATION_SPAWNER_SPAWN_1_OFFSET UNITYSDK_OFFSET(0x1F0A6870)
#define FOUNDATION_SPAWNER_SPAWN_OFFSET UNITYSDK_OFFSET(0x1F0A61C0)
#define FOUNDATION_SPAWNER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0A72A0)
#define FOUNDATION_SPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0A7240)

namespace Foundation
{
	inline static constexpr unsigned int Spawner_TypeDefinitionIndex = 7971;

	class Spawner : public ::Foundation::MonoSingletonExt_1<::Foundation::Spawner*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::SpawnerPool*>** StaticGet_PoolList()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::SpawnerPool*>**)Il2CppClass::FromTypeDefinitionIndex(Spawner_TypeDefinitionIndex)->GetStaticField(0x6AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GameObject* Spawn(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNER_SPAWN_OFFSET))(go, position, rotation);
		}

		static ::UnityEngine::GameObject* Spawn_1(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Action_1<::UnityEngine::GameObject*>* spawnedAction)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNER_SPAWN_1_OFFSET))(go, position, rotation, spawnedAction);
		}

		static ::System::Void Despawn(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNER_DESPAWN_OFFSET))(go);
		}

		static ::System::Void Prespawn(::UnityEngine::GameObject* go, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNER_PRESPAWN_OFFSET))(go, count);
		}
	};
}
