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

#define FOUNDATION_RESERVEDOBJECTPOOL_AUTORELEASEPOOL_OFFSET UNITYSDK_OFFSET(0x15416B60)
#define FOUNDATION_RESERVEDOBJECTPOOL_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15415A70)
#define FOUNDATION_RESERVEDOBJECTPOOL_GET_ISALLOWMEMORYLEAK_OFFSET UNITYSDK_OFFSET(0x15415470)
#define FOUNDATION_RESERVEDOBJECTPOOL_GET_ISALLOWSSELFDESTROY_OFFSET UNITYSDK_OFFSET(0x154153B0)
#define FOUNDATION_RESERVEDOBJECTPOOL_GET_POOLUID_OFFSET UNITYSDK_OFFSET(0x15415530)
#define FOUNDATION_RESERVEDOBJECTPOOL_INIT_OFFSET UNITYSDK_OFFSET(0x15415810)
#define FOUNDATION_RESERVEDOBJECTPOOL_INSTANTIATEWITHPARAM_OFFSET UNITYSDK_OFFSET(0x15416840)
#define FOUNDATION_RESERVEDOBJECTPOOL_ONNULLOBJECT_OFFSET UNITYSDK_OFFSET(0x15417270)
#define FOUNDATION_RESERVEDOBJECTPOOL_ONUNTRACKHANDLE_OFFSET UNITYSDK_OFFSET(0x15415E80)
#define FOUNDATION_RESERVEDOBJECTPOOL_POP_OFFSET UNITYSDK_OFFSET(0x15416300)
#define FOUNDATION_RESERVEDOBJECTPOOL_PUSH_OFFSET UNITYSDK_OFFSET(0x15416D80)
#define FOUNDATION_RESERVEDOBJECTPOOL_RELEASEONE_OFFSET UNITYSDK_OFFSET(0x154160A0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x15416EA0)
#define FOUNDATION_RESERVEDOBJECTPOOL_SET_ISALLOWMEMORYLEAK_OFFSET UNITYSDK_OFFSET(0x154154D0)
#define FOUNDATION_RESERVEDOBJECTPOOL_SET_ISALLOWSSELFDESTROY_OFFSET UNITYSDK_OFFSET(0x15415410)
#define FOUNDATION_RESERVEDOBJECTPOOL__AUTORELEASEPOOL_B__33_0_OFFSET UNITYSDK_OFFSET(0x154175C0)
#define FOUNDATION_RESERVEDOBJECTPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15417490)
#define FOUNDATION_RESERVEDOBJECTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15415540)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPool_TypeDefinitionIndex = 86652;

	class ReservedObjectPool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_ReservedPools()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0x3E820);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ReservedObjectPool*>** StaticGet_Pools()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ReservedObjectPool*>**)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0x3E828);
		}
		static ::System::Boolean* StaticGet__IsAllowsSelfDestroy_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0xE970);
		}
		static ::System::Boolean* StaticGet__IsAllowMemoryLeak_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0xE971);
		}
		static ::System::UInt32* StaticGet_gUid()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ReservedObjectPool_TypeDefinitionIndex)->GetStaticField(0xE974);
		}
		::System::Action_1<::Foundation::ReservedObjectPool*>* releaseCallback; // 0x10
		::System::Collections::Generic::HashSet_1<::Foundation::ReservedObjectPool_ReservedObjectPoolData*>* spawned; // 0x18
		::Struct_2_49ABC235CB23B56F autoReleaseTimer; // 0x20
		::System::Collections::Generic::List_1<::Foundation::ReservedObjectPool_ReservedObjectPoolData*>* pool; // 0x30
		::Foundation::AssetRequestHandle preloadHandle; // 0x38
		::Struct_2_49ABC235CB23B56F preloadTimer; // 0x58
		::System::String* assetPath; // 0x68
		::System::Int32 preloadCount; // 0x70
		::System::UInt32 poolUid; // 0x74
		::System::Int32 spwanedCount; // 0x78
		::System::Single autoReleaseTime; // 0x7C
		::System::Int32 capacity; // 0x80
		::System::Single preLoadInterval; // 0x84

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
