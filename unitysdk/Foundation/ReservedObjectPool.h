#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/InstantiationParameters.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool_ReservedObjectPoolData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_RESERVEDOBJECTPOOL_AUTORELEASEPOOL_OFFSET UNITYSDK_OFFSET(0x159526B0)
#define FOUNDATION_RESERVEDOBJECTPOOL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x159515C0)
#define FOUNDATION_RESERVEDOBJECTPOOL_GET_ISALLOWMEMORYLEAK_OFFSET UNITYSDK_OFFSET(0x15950FB0)
#define FOUNDATION_RESERVEDOBJECTPOOL_GET_ISALLOWSSELFDESTROY_OFFSET UNITYSDK_OFFSET(0x15950EF0)
#define FOUNDATION_RESERVEDOBJECTPOOL_GET_POOLUID_OFFSET UNITYSDK_OFFSET(0x15951070)
#define FOUNDATION_RESERVEDOBJECTPOOL_INIT_OFFSET UNITYSDK_OFFSET(0x15951360)
#define FOUNDATION_RESERVEDOBJECTPOOL_INSTANTIATEWITHPARAM_OFFSET UNITYSDK_OFFSET(0x15952390)
#define FOUNDATION_RESERVEDOBJECTPOOL_ONNULLOBJECT_OFFSET UNITYSDK_OFFSET(0x15952DD0)
#define FOUNDATION_RESERVEDOBJECTPOOL_ONUNTRACKHANDLE_OFFSET UNITYSDK_OFFSET(0x159519C0)
#define FOUNDATION_RESERVEDOBJECTPOOL_POP_OFFSET UNITYSDK_OFFSET(0x15951E40)
#define FOUNDATION_RESERVEDOBJECTPOOL_PUSH_OFFSET UNITYSDK_OFFSET(0x159528D0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RELEASEONE_OFFSET UNITYSDK_OFFSET(0x15951BE0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x159529F0)
#define FOUNDATION_RESERVEDOBJECTPOOL_SET_ISALLOWMEMORYLEAK_OFFSET UNITYSDK_OFFSET(0x15951010)
#define FOUNDATION_RESERVEDOBJECTPOOL_SET_ISALLOWSSELFDESTROY_OFFSET UNITYSDK_OFFSET(0x15950F50)
#define FOUNDATION_RESERVEDOBJECTPOOL__AUTORELEASEPOOL_B__33_0_OFFSET UNITYSDK_OFFSET(0x15953120)
#define FOUNDATION_RESERVEDOBJECTPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15952FF0)
#define FOUNDATION_RESERVEDOBJECTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15951080)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPool_TypeDefinitionIndex = 62276;

	class ReservedObjectPool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_ReservedPools()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0x3B6C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ReservedObjectPool*>** StaticGet_Pools()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ReservedObjectPool*>**)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0x3B6C8);
		}
		static ::System::Boolean* StaticGet__IsAllowsSelfDestroy_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0xE9C0);
		}
		static ::System::Boolean* StaticGet__IsAllowMemoryLeak_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0xE9C1);
		}
		static ::System::UInt32* StaticGet_gUid()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0xE9C4);
		}
		::System::String* assetPath; // 0x10
		::System::Action_1<::Foundation::ReservedObjectPool*>* releaseCallback; // 0x18
		::System::Collections::Generic::List_1<::Foundation::ReservedObjectPool_ReservedObjectPoolData*>* pool; // 0x20
		::System::Collections::Generic::HashSet_1<::Foundation::ReservedObjectPool_ReservedObjectPoolData*>* spawned; // 0x28
		::Struct_2_49ABC235CB23B56F autoReleaseTimer; // 0x30
		::Foundation::AssetRequestHandle preloadHandle; // 0x40
		::Struct_2_49ABC235CB23B56F preloadTimer; // 0x60
		::System::Int32 spwanedCount; // 0x70
		::System::Single preLoadInterval; // 0x74
		::System::UInt32 poolUid; // 0x78
		::System::Int32 capacity; // 0x7C
		::System::Single autoReleaseTime; // 0x80
		::System::Int32 preloadCount; // 0x84

		::System::Void _ctor(::System::String* assetPath, ::System::Int32 capacity, ::System::Int32 preloadCount, ::System::Single autoReleaseTime, ::System::Action_1<::Foundation::ReservedObjectPool*>* poolReleaseCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action_1<::Foundation::ReservedObjectPool*>*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL__CTOR_OFFSET))(this, assetPath, capacity, preloadCount, autoReleaseTime, poolReleaseCallback);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_IsAllowsSelfDestroy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_GET_ISALLOWSSELFDESTROY_OFFSET))();
		}

		static ::System::Void set_IsAllowsSelfDestroy(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_SET_ISALLOWSSELFDESTROY_OFFSET))(value);
		}

		static ::System::Boolean get_IsAllowMemoryLeak()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_GET_ISALLOWMEMORYLEAK_OFFSET))();
		}

		static ::System::Void set_IsAllowMemoryLeak(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_SET_ISALLOWMEMORYLEAK_OFFSET))(value);
		}

		::System::UInt32 get_PoolUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_GET_POOLUID_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_FINALIZE_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 preloadCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_INIT_OFFSET))(this, preloadCount);
		}

		::Foundation::ReservedObjectPoolDataHandle Pop(::Foundation::InstantiationParameters param)
		{
			return ((::Foundation::ReservedObjectPoolDataHandle(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_POP_OFFSET))(this, param);
		}

		::System::Boolean Push(::Foundation::ReservedObjectPool_ReservedObjectPoolData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ReservedObjectPool_ReservedObjectPoolData*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_PUSH_OFFSET))(this, data);
		}

		::System::Void Release(::System::Boolean isCleanAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RELEASE_OFFSET))(this, isCleanAll);
		}

		::System::Void ReleaseOne(::Foundation::ReservedObjectPool_ReservedObjectPoolData* data)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ReservedObjectPool_ReservedObjectPoolData*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RELEASEONE_OFFSET))(this, data);
		}

		::System::Void AutoReleasePool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_AUTORELEASEPOOL_OFFSET))(this);
		}

		::UnityEngine::Object* InstantiateWithParam(::UnityEngine::Object* source, ::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_INSTANTIATEWITHPARAM_OFFSET))(this, source, param);
		}

		::System::Void OnNullObject(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_ONNULLOBJECT_OFFSET))(this, handle);
		}

		::System::Void OnUnTrackHandle(::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_ONUNTRACKHANDLE_OFFSET))(this, handle);
		}

		::System::Void _AutoReleasePool_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL__AUTORELEASEPOOL_B__33_0_OFFSET))(this);
		}
	};
}
