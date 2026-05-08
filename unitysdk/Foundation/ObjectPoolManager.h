#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ObjectPoolProxy; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FOUNDATION_OBJECTPOOLMANAGER_ADDOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0x19DAD1B0)
#define FOUNDATION_OBJECTPOOLMANAGER_ALLOCATEFREEPROXYREF_OFFSET UNITYSDK_OFFSET(0x19DAC8F0)
#define FOUNDATION_OBJECTPOOLMANAGER_CLEARALLPOOL_OFFSET UNITYSDK_OFFSET(0x19DACB40)
#define FOUNDATION_OBJECTPOOLMANAGER_DEALLOCATEFREEPROXYREF_OFFSET UNITYSDK_OFFSET(0x19DACA70)
#define FOUNDATION_OBJECTPOOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DAD430)

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolManager_TypeDefinitionIndex = 8302;

	class ObjectPoolManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*>** StaticGet__normalPools()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolManager_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		static ::System::Collections::Generic::Queue_1<::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*>** StaticGet_PoolProxyRefPool()
		{
			return (::System::Collections::Generic::Queue_1<::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolManager_TypeDefinitionIndex)->GetStaticField(0x72D8);
		}
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*>** StaticGet__threadSafePools()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*>**)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolManager_TypeDefinitionIndex)->GetStaticField(0x72E0);
		}
		static ::System::Boolean* StaticGet_ReleaseCacheAndMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolManager_TypeDefinitionIndex)->GetStaticField(0x38C0);
		}
		static ::System::Int32* StaticGet_AllPoolCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ObjectPoolManager_TypeDefinitionIndex)->GetStaticField(0x38C4);
		}
		// static const ::System::Int32 maximumPoolCountForJob = 0x2; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLMANAGER__CCTOR_OFFSET))();
		}

		static ::System::WeakReference_1<::Foundation::ObjectPoolProxy*>* AllocateFreeProxyRef()
		{
			return ((::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLMANAGER_ALLOCATEFREEPROXYREF_OFFSET))();
		}

		static ::System::Void DeallocateFreeProxyRef(::System::WeakReference_1<::Foundation::ObjectPoolProxy*>* proxyRef)
		{
			return ((::System::Void(*)(::System::WeakReference_1<::Foundation::ObjectPoolProxy*>*))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLMANAGER_DEALLOCATEFREEPROXYREF_OFFSET))(proxyRef);
		}

		static ::System::Void ClearAllPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLMANAGER_CLEARALLPOOL_OFFSET))();
		}

		static ::System::Void AddObjectPool(::Foundation::ObjectPoolProxy* item, ::System::Boolean threadSafe)
		{
			return ((::System::Void(*)(::Foundation::ObjectPoolProxy*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_OBJECTPOOLMANAGER_ADDOBJECTPOOL_OFFSET))(item, threadSafe);
		}
	};
}
