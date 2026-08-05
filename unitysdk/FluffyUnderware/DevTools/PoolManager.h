#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::DevTools { class ComponentPool; }
namespace FluffyUnderware::DevTools { class IPool; }
namespace FluffyUnderware::DevTools { class PoolSettings; }
namespace FluffyUnderware::DevTools { class PrefabPool; }
namespace FluffyUnderware::DevTools { template <typename T> class Pool_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_CREATEPREFABPOOL_OFFSET UNITYSDK_OFFSET(0x1EA571E0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_DELETEPOOLS_OFFSET UNITYSDK_OFFSET(0x1EA57710)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_DELETEPOOL_OFFSET UNITYSDK_OFFSET(0x1EA57790)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_FINDPOOLS_OFFSET UNITYSDK_OFFSET(0x1EA57570)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GETPREFABPOOL_OFFSET UNITYSDK_OFFSET(0x1EA570A0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GETUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1EA56FC0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_AUTOCREATEPOOLS_OFFSET UNITYSDK_OFFSET(0x1EA56520)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EA565E0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EA56540)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1EA565C0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EA56870)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EA56670)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EA56620)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1EA56660)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_AUTOCREATEPOOLS_OFFSET UNITYSDK_OFFSET(0x1EA56530)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EA56550)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1EA565D0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EA56680)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA57910)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PoolManager_TypeDefinitionIndex = 28995;

	class PoolManager : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::System::Boolean m_AutoCreatePools; // 0x28
		::FluffyUnderware::DevTools::PoolSettings* m_DefaultSettings; // 0x30
		::System::Boolean _IsInitialized_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::FluffyUnderware::DevTools::IPool*>* Pools; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::FluffyUnderware::DevTools::IPool*>* TypePools; // 0x48
		::Il2CppArray<::FluffyUnderware::DevTools::IPool*>* mPools; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoCreatePools()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_AUTOCREATEPOOLS_OFFSET))(this);
		}

		::System::Void set_AutoCreatePools(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_AUTOCREATEPOOLS_OFFSET))(this, value);
		}

		::FluffyUnderware::DevTools::PoolSettings* get_DefaultSettings()
		{
			return ((::FluffyUnderware::DevTools::PoolSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_DEFAULTSETTINGS_OFFSET))(this);
		}

		::System::Void set_DefaultSettings(::FluffyUnderware::DevTools::PoolSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::PoolSettings*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_DEFAULTSETTINGS_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_ISINITIALIZED_OFFSET))(this);
		}

		::System::Void set_IsInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_ISINITIALIZED_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_COUNT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ResetOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_RESETONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_INITIALIZE_OFFSET))(this);
		}

		::System::String* GetUniqueIdentifier(::System::String* ident)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GETUNIQUEIDENTIFIER_OFFSET))(this, ident);
		}

		::FluffyUnderware::DevTools::PrefabPool* GetPrefabPool(::System::String* identifier, ::Il2CppArray<::UnityEngine::GameObject*>* prefabs)
		{
			return ((::FluffyUnderware::DevTools::PrefabPool*(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GETPREFABPOOL_OFFSET))(this, identifier, prefabs);
		}

		::FluffyUnderware::DevTools::PrefabPool* CreatePrefabPool(::System::String* name, ::FluffyUnderware::DevTools::PoolSettings* settings, ::Il2CppArray<::UnityEngine::GameObject*>* prefabs)
		{
			return ((::FluffyUnderware::DevTools::PrefabPool*(*)(::PVOID, ::System::String*, ::FluffyUnderware::DevTools::PoolSettings*, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_CREATEPREFABPOOL_OFFSET))(this, name, settings, prefabs);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::DevTools::IPool*>* FindPools(::System::String* identifierStartsWith)
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::DevTools::IPool*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_FINDPOOLS_OFFSET))(this, identifierStartsWith);
		}

		::System::Void DeletePools(::System::String* startsWith)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_DELETEPOOLS_OFFSET))(this, startsWith);
		}

		::System::Void DeletePool(::FluffyUnderware::DevTools::IPool* pool)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::IPool*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_DELETEPOOL_OFFSET))(this, pool);
		}
	};
}
