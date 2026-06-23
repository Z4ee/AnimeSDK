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

#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_CREATEPREFABPOOL_OFFSET UNITYSDK_OFFSET(0x1D69DED0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_DELETEPOOLS_OFFSET UNITYSDK_OFFSET(0x1D69E3F0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_DELETEPOOL_OFFSET UNITYSDK_OFFSET(0x1D69E470)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_FINDPOOLS_OFFSET UNITYSDK_OFFSET(0x1D69E250)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GETPREFABPOOL_OFFSET UNITYSDK_OFFSET(0x1D69DD90)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GETUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D69DCB0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_AUTOCREATEPOOLS_OFFSET UNITYSDK_OFFSET(0x1D69D210)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D69D2D0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D69D230)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D69D2B0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D69D560)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D69D360)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D69D310)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_RESETONENABLE_OFFSET UNITYSDK_OFFSET(0x1D69D350)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_AUTOCREATEPOOLS_OFFSET UNITYSDK_OFFSET(0x1D69D220)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_DEFAULTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D69D240)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D69D2C0)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D69D370)
#define FLUFFYUNDERWARE_DEVTOOLS_POOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69E5F0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int PoolManager_TypeDefinitionIndex = 28391;

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
