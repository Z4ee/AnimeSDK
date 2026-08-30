#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class PrefabLoadMeta_WeakAssetReferenceList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PREFABLOADMETA_GET_MULTIPREFABLIST_OFFSET UNITYSDK_OFFSET(0xDBBF350)
#define RPG_CLIENT_PREFABLOADMETA_GET_PREFAB_OFFSET UNITYSDK_OFFSET(0xDBBF2E0)
#define RPG_CLIENT_PREFABLOADMETA_INSTANTIATE_1_OFFSET UNITYSDK_OFFSET(0xDBBF6C0)
#define RPG_CLIENT_PREFABLOADMETA_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0xDBBF570)
#define RPG_CLIENT_PREFABLOADMETA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDBBF990)
#define RPG_CLIENT_PREFABLOADMETA__CTOR_OFFSET UNITYSDK_OFFSET(0xDBBFB10)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefabLoadMeta_TypeDefinitionIndex = 72772;

	class PrefabLoadMeta : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* _Prefab; // 0x18
		::RPG::Client::PrefabLoadMeta_WeakAssetReferenceList* _MultiPrefabList; // 0x20
		::RPG::Client::WeakAssetReference PrefabReference; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>* MultiPrefabReferences; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Prefab()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_GET_PREFAB_OFFSET))(this);
		}

		::RPG::Client::PrefabLoadMeta_WeakAssetReferenceList* get_MultiPrefabList()
		{
			return ((::RPG::Client::PrefabLoadMeta_WeakAssetReferenceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_GET_MULTIPREFABLIST_OFFSET))(this);
		}

		::UnityEngine::GameObject* Instantiate(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_INSTANTIATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Instantiate_1(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_INSTANTIATE_1_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_ONDESTROY_OFFSET))(this);
		}
	};
}
