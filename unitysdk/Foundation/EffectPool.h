#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class EffectPool_AssetInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_EFFECTPOOL_CLEARALLPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BFE3220)
#define FOUNDATION_EFFECTPOOL_CLEAREFFECTSHAPEPSPOOL_OFFSET UNITYSDK_OFFSET(0x1BFE3480)
#define FOUNDATION_EFFECTPOOL_CLEARPOOLEDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BFE2570)
#define FOUNDATION_EFFECTPOOL_CLEARUNUSEDEFFECTCAUTIOUSLYSTEP_OFFSET UNITYSDK_OFFSET(0x1BFE2BF0)
#define FOUNDATION_EFFECTPOOL_CLEARUNUSEDEFFECTSAGGRESSIVELY_OFFSET UNITYSDK_OFFSET(0x1BFE3F80)
#define FOUNDATION_EFFECTPOOL_CLEARUNUSEDEFFECTSCAUTIOUSLY_OFFSET UNITYSDK_OFFSET(0x1BFE2770)
#define FOUNDATION_EFFECTPOOL_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1BFDFFF0)
#define FOUNDATION_EFFECTPOOL_GETINSTANCESYNC_OFFSET UNITYSDK_OFFSET(0x1BFDF9D0)
#define FOUNDATION_EFFECTPOOL_GET_EFFECTINPOOLNOTADDTOEFFECTROOTCONFIG_OFFSET UNITYSDK_OFFSET(0x1BFDE910)
#define FOUNDATION_EFFECTPOOL_GET_EFFECTINPOOLNOTADDTOEFFECTROOT_OFFSET UNITYSDK_OFFSET(0x1BFDE9D0)
#define FOUNDATION_EFFECTPOOL_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BFDE600)
#define FOUNDATION_EFFECTPOOL_GET_ISINEDITOR_OFFSET UNITYSDK_OFFSET(0x1BFDEAE0)
#define FOUNDATION_EFFECTPOOL_GET_ROOTTF_OFFSET UNITYSDK_OFFSET(0x1BFDEAF0)
#define FOUNDATION_EFFECTPOOL_INSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1BFE07E0)
#define FOUNDATION_EFFECTPOOL_ISASSETSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x1BFDEB00)
#define FOUNDATION_EFFECTPOOL_LOADINSTANCEFROMPOOL_OFFSET UNITYSDK_OFFSET(0x1BFE1650)
#define FOUNDATION_EFFECTPOOL_POPEFFECTSHAPEPSGO_OFFSET UNITYSDK_OFFSET(0x1BFE6330)
#define FOUNDATION_EFFECTPOOL_PRELOADINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1BFDEBD0)
#define FOUNDATION_EFFECTPOOL_PRINTALLEFFECTSINPOOL_OFFSET UNITYSDK_OFFSET(0x1BFE43E0)
#define FOUNDATION_EFFECTPOOL_PRINTALLNONPRELOADEFFECTSINPOOL_OFFSET UNITYSDK_OFFSET(0x1BFE4E80)
#define FOUNDATION_EFFECTPOOL_PUSHBACKTOPOOL_OFFSET UNITYSDK_OFFSET(0x1BFE20F0)
#define FOUNDATION_EFFECTPOOL_PUSHEFFECTSHAPEPSGO_OFFSET UNITYSDK_OFFSET(0x1BFE5CE0)
#define FOUNDATION_EFFECTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BFE3C60)
#define FOUNDATION_EFFECTPOOL_SET_EFFECTINPOOLNOTADDTOEFFECTROOTCONFIG_OFFSET UNITYSDK_OFFSET(0x1BFDE970)
#define FOUNDATION_EFFECTPOOL_SUGGESTEFFECTTOUNLOAD_OFFSET UNITYSDK_OFFSET(0x1BFDF290)
#define FOUNDATION_EFFECTPOOL_SYNCINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1BFE0EB0)
#define FOUNDATION_EFFECTPOOL_TRYGETPOOLEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BFE0BD0)
#define FOUNDATION_EFFECTPOOL_TRYLOADINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1BFDEC70)
#define FOUNDATION_EFFECTPOOL_UNLOADEFFECT_OFFSET UNITYSDK_OFFSET(0x1BFDF410)
#define FOUNDATION_EFFECTPOOL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BFE5740)
#define FOUNDATION_EFFECTPOOL_WARMUPINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BFE0430)
#define FOUNDATION_EFFECTPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFE68F0)
#define FOUNDATION_EFFECTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFDE6E0)

namespace Foundation
{
	inline static constexpr unsigned int EffectPool_TypeDefinitionIndex = 7962;

	class EffectPool : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::GameObject*>** StaticGet_pooledObjectDestroyCallback()
		{
			return (::System::Action_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x7230);
		}
		static ::Foundation::EffectPool** StaticGet__instance()
		{
			return (::Foundation::EffectPool**)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x7238);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet__stopWatch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x7240);
		}
		static ::System::Single* StaticGet_notUsedEffectClearTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x3900);
		}
		static ::System::Single* StaticGet_stepUnloadTimeOut()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x3904);
		}
		static ::System::Boolean* StaticGet_enableUnloadLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x3908);
		}
		static ::System::Boolean* StaticGet_debugPrintAllSyncLoadEffect()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x3909);
		}
		static ::System::Boolean* StaticGet__EffectInPoolNotAddToEffectRootConfig_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x390A);
		}
		static ::System::Boolean* StaticGet_debugLogEffectPoolInOut()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x390B);
		}
		static ::System::Single* StaticGet_checkEffectShouldClearTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x390C);
		}
		static ::System::Boolean* StaticGet_debugLogEffectEffectCountChange()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x3910);
		}
		static ::System::Boolean* StaticGet_enableStepUnload()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EffectPool_TypeDefinitionIndex)->GetStaticField(0x3911);
		}
		::UnityEngine::Transform* effectShapePoolRoot; // 0x10
		::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>* _delayUnloadList; // 0x18
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::EffectPool_AssetInfo*>* _cachedAssetInfos; // 0x20
		::UnityEngine::Transform* _RootTf_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* effectShapePsPool; // 0x30
		::System::Single _curClearTime; // 0x38
		::System::Boolean _finishWork; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL__CCTOR_OFFSET))();
		}

		static ::Foundation::EffectPool* get_Instance()
		{
			return ((::Foundation::EffectPool*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GET_INSTANCE_OFFSET))();
		}

		static ::System::Boolean get_EffectInPoolNotAddToEffectRootConfig()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GET_EFFECTINPOOLNOTADDTOEFFECTROOTCONFIG_OFFSET))();
		}

		static ::System::Void set_EffectInPoolNotAddToEffectRootConfig(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_SET_EFFECTINPOOLNOTADDTOEFFECTROOTCONFIG_OFFSET))(value);
		}

		static ::System::Boolean get_EffectInPoolNotAddToEffectRoot()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GET_EFFECTINPOOLNOTADDTOEFFECTROOT_OFFSET))();
		}

		static ::System::Boolean get_IsInEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GET_ISINEDITOR_OFFSET))();
		}

		::UnityEngine::Transform* get_RootTf()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GET_ROOTTF_OFFSET))(this);
		}

		::System::Boolean IsAssetStartLoading(::Foundation::AssetPath assetPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_ISASSETSTARTLOADING_OFFSET))(this, assetPath);
		}

		::Foundation::AssetRequestHandle PreloadInstanceCache(::Foundation::AssetPath assetPath)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_PRELOADINSTANCECACHE_OFFSET))(this, assetPath);
		}

		::System::Boolean SuggestEffectToUnload(::Foundation::AssetPath assetPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_SUGGESTEFFECTTOUNLOAD_OFFSET))(this, assetPath);
		}

		::System::Boolean TryLoadInstanceCache(::Foundation::AssetPath assetPath, ::Foundation::AssetRequestHandle& handle, ::System::Boolean isPreload)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_TRYLOADINSTANCECACHE_OFFSET))(this, assetPath, handle, isPreload);
		}

		::UnityEngine::GameObject* GetInstanceSync(::Foundation::AssetPath assetPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GETINSTANCESYNC_OFFSET))(this, assetPath);
		}

		::System::Void GetInstanceAsync(::Foundation::AssetPath assetPath, ::System::Action_1<::UnityEngine::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_GETINSTANCEASYNC_OFFSET))(this, assetPath, callback);
		}

		::Foundation::AssetRequestHandle WarmupInstance(::Foundation::AssetPath assetPath, ::System::Int32 warmupCount)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_WARMUPINSTANCE_OFFSET))(this, assetPath, warmupCount);
		}

		::System::Void InstanceAsync(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject*& pooledObject, ::Foundation::AssetRequestHandle& assetRequestHandle, ::UnityEngine::AsyncOperation*& asyncOperation)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*&, ::Foundation::AssetRequestHandle&, ::UnityEngine::AsyncOperation*&))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_INSTANCEASYNC_OFFSET))(this, assetPath, pooledObject, assetRequestHandle, asyncOperation);
		}

		::System::Boolean TryGetPooledObject(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject*& pooledObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_TRYGETPOOLEDOBJECT_OFFSET))(this, assetPath, pooledObject);
		}

		::UnityEngine::GameObject* SyncInstanceAsync(::Foundation::AssetPath assetPath, ::Foundation::AssetRequestHandle assetRequestHandle, ::UnityEngine::AsyncOperation* asyncOperation)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath, ::Foundation::AssetRequestHandle, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_SYNCINSTANCEASYNC_OFFSET))(this, assetPath, assetRequestHandle, asyncOperation);
		}

		::UnityEngine::GameObject* LoadInstanceFromPool(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_LOADINSTANCEFROMPOOL_OFFSET))(this, assetPath, parent);
		}

		::System::Void PushBackToPool(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* effect, ::System::Boolean keepGoActive)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_PUSHBACKTOPOOL_OFFSET))(this, assetPath, effect, keepGoActive);
		}

		::System::Void UnloadEffect(::Foundation::EffectPool_AssetInfo* effectInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EffectPool_AssetInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_UNLOADEFFECT_OFFSET))(this, effectInfo);
		}

		::System::Int32 ClearPooledInstance(::Foundation::EffectPool_AssetInfo* effectInfo)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::EffectPool_AssetInfo*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_CLEARPOOLEDINSTANCE_OFFSET))(this, effectInfo);
		}

		::System::Void ClearUnusedEffectsCautiously()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_CLEARUNUSEDEFFECTSCAUTIOUSLY_OFFSET))(this);
		}

		::System::Boolean ClearUnusedEffectCautiouslyStep(::System::Boolean step)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_CLEARUNUSEDEFFECTCAUTIOUSLYSTEP_OFFSET))(this, step);
		}

		::System::Void ClearAllPoolInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_CLEARALLPOOLINSTANCE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_RELEASE_OFFSET))(this);
		}

		::System::Void ClearUnusedEffectsAggressively()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_CLEARUNUSEDEFFECTSAGGRESSIVELY_OFFSET))(this);
		}

		::System::Void PrintAllEffectsInPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_PRINTALLEFFECTSINPOOL_OFFSET))(this);
		}

		::System::Void PrintAllNonPreloadEffectsInPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_PRINTALLNONPRELOADEFFECTSINPOOL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_UPDATE_OFFSET))(this);
		}

		::System::Void PushEffectShapePsGo(::System::String* psPath, ::UnityEngine::GameObject* createdGo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_PUSHEFFECTSHAPEPSGO_OFFSET))(this, psPath, createdGo);
		}

		::UnityEngine::GameObject* PopEffectShapePsGo(::System::String* psPath, ::UnityEngine::GameObject* sourceGo)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_POPEFFECTSHAPEPSGO_OFFSET))(this, psPath, sourceGo);
		}

		::System::Void ClearEffectShapePsPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_EFFECTPOOL_CLEAREFFECTSHAPEPSPOOL_OFFSET))(this);
		}
	};
}
