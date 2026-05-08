#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MonoSingletonExt_1.h"

namespace Foundation { class SpawnerPool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_SPAWNERBREEDER_CREATE_OFFSET UNITYSDK_OFFSET(0x1BAE7AF0)
#define FOUNDATION_SPAWNERBREEDER_GET_OFFSET UNITYSDK_OFFSET(0x1BAE7990)
#define FOUNDATION_SPAWNERBREEDER_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1BAE8850)
#define FOUNDATION_SPAWNERBREEDER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BAE86F0)
#define FOUNDATION_SPAWNERBREEDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAE89C0)
#define FOUNDATION_SPAWNERBREEDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE8960)

namespace Foundation
{
	inline static constexpr unsigned int SpawnerBreeder_TypeDefinitionIndex = 7699;

	class SpawnerBreeder : public ::Foundation::MonoSingletonExt_1<::Foundation::SpawnerBreeder*>
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::SpawnerPool*>** StaticGet_SpawnPoolDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::SpawnerPool*>**)Il2CppClass::FromTypeDefinitionIndex(SpawnerBreeder_TypeDefinitionIndex)->GetStaticField(0x6A10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERBREEDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERBREEDER__CCTOR_OFFSET))();
		}

		static ::Foundation::SpawnerPool* Create(::System::String* poolName, ::UnityEngine::GameObject* obj)
		{
			return ((::Foundation::SpawnerPool*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERBREEDER_CREATE_OFFSET))(poolName, obj);
		}

		static ::System::Void Remove(::System::String* poolName)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERBREEDER_REMOVE_OFFSET))(poolName);
		}

		static ::System::Void RemoveAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERBREEDER_REMOVEALL_OFFSET))();
		}

		static ::Foundation::SpawnerPool* Get(::System::String* poolName)
		{
			return ((::Foundation::SpawnerPool*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_SPAWNERBREEDER_GET_OFFSET))(poolName);
		}
	};
}
