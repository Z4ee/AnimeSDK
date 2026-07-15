#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WeakAssetReference.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1939DCF0)
#define RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1939DCA0)
#define RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1939D9C0)
#define RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_RELEASE_OFFSET UNITYSDK_OFFSET(0x1939DB80)
#define RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1939DD90)
#define RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1939D570)

namespace RPG::Client
{
	inline static constexpr unsigned int PrefabLoadMeta_WeakAssetReferenceList_TypeDefinitionIndex = 69544;

	class PrefabLoadMeta_WeakAssetReferenceList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>* _MultiPrefabReferences; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _GameObjects; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::WeakAssetReference>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Item(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PREFABLOADMETA_WEAKASSETREFERENCELIST_RELEASE_OFFSET))(this);
		}
	};
}
