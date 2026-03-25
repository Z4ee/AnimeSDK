#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

class Class_0_16E4307DCC419505_63;
class Class_0_16E4307DCC419505_64;
class Class_1_A81EE615F7FF4710;
class Class_1_AB3731E66128D034;
class Class_1_CEF5F27F657CD849;
class Class_1_E998DEAD1943B5C5;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETMGR_ASYNCINSTANCE_OFFSET UNITYSDK_OFFSET(0x1654D010)
#define RPG_CLIENT_ASSETMGR_ASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x1654CCF0)
#define RPG_CLIENT_ASSETMGR_ASYNCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1654DB90)
#define RPG_CLIENT_ASSETMGR_CHECKTHREADID_OFFSET UNITYSDK_OFFSET(0x1654BC70)
#define RPG_CLIENT_ASSETMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1654CB40)
#define RPG_CLIENT_ASSETMGR_CLEARPATHCACHE_OFFSET UNITYSDK_OFFSET(0x1654C260)
#define RPG_CLIENT_ASSETMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1654C130)
#define RPG_CLIENT_ASSETMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x1654CC90)
#define RPG_CLIENT_ASSETMGR_FORCEALLASYNCLOADIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1654D920)
#define RPG_CLIENT_ASSETMGR_GETASSETDEEPSIZE_OFFSET UNITYSDK_OFFSET(0x1654E220)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_1_OFFSET UNITYSDK_OFFSET(0x1654E370)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_2_OFFSET UNITYSDK_OFFSET(0x1654E400)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1654E2E0)
#define RPG_CLIENT_ASSETMGR_GETASSETLOADINGINFO_OFFSET UNITYSDK_OFFSET(0x1654E490)
#define RPG_CLIENT_ASSETMGR_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET UNITYSDK_OFFSET(0x1654E650)
#define RPG_CLIENT_ASSETMGR_GETASSETSIZE_OFFSET UNITYSDK_OFFSET(0x1654E280)
#define RPG_CLIENT_ASSETMGR_GETBUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1654E1C0)
#define RPG_CLIENT_ASSETMGR_GETLOADASSET_OFFSET UNITYSDK_OFFSET(0x1654D510)
#define RPG_CLIENT_ASSETMGR_GET_ASSETREFREADY_OFFSET UNITYSDK_OFFSET(0x1654BA90)
#define RPG_CLIENT_ASSETMGR_GET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1654BBE0)
#define RPG_CLIENT_ASSETMGR_GET_CUSTOMUPDATEPRELOADTIMEMS_OFFSET UNITYSDK_OFFSET(0x1654B9D0)
#define RPG_CLIENT_ASSETMGR_GET_ENABLEASSETLIFECYCLE_OFFSET UNITYSDK_OFFSET(0x1654B880)
#define RPG_CLIENT_ASSETMGR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1654BB10)
#define RPG_CLIENT_ASSETMGR_GET_ISMIDPACK_OFFSET UNITYSDK_OFFSET(0x1654BAF0)
#define RPG_CLIENT_ASSETMGR_GET_ISRUNTIMEMODE_OFFSET UNITYSDK_OFFSET(0x1654B970)
#define RPG_CLIENT_ASSETMGR_GET_LOADERCOUNT_OFFSET UNITYSDK_OFFSET(0x1654BA30)
#define RPG_CLIENT_ASSETMGR_GET_PAUSEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1654C3E0)
#define RPG_CLIENT_ASSETMGR_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x16523220)
#define RPG_CLIENT_ASSETMGR_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1654BB80)
#define RPG_CLIENT_ASSETMGR_HASREQUESTINPRELOADQUEUE_OFFSET UNITYSDK_OFFSET(0x1654E160)
#define RPG_CLIENT_ASSETMGR_INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x1654C080)
#define RPG_CLIENT_ASSETMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1654BE40)
#define RPG_CLIENT_ASSETMGR_ISUNLOADFINISH_OFFSET UNITYSDK_OFFSET(0x1654C300)
#define RPG_CLIENT_ASSETMGR_ONENDLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1654DF90)
#define RPG_CLIENT_ASSETMGR_ONSTARTLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1654DD70)
#define RPG_CLIENT_ASSETMGR_RELEASEBYASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1654D0E0)
#define RPG_CLIENT_ASSETMGR_RELEASEBYASSETPROXY_OFFSET UNITYSDK_OFFSET(0x1654D1C0)
#define RPG_CLIENT_ASSETMGR_RELOADASSETREFMANIFEST_OFFSET UNITYSDK_OFFSET(0x1654CAD0)
#define RPG_CLIENT_ASSETMGR_RELOADSERVERINDEXINFO_OFFSET UNITYSDK_OFFSET(0x1654C9F0)
#define RPG_CLIENT_ASSETMGR_SETENABLECHECKIFHASREQUESTINPRELOADQUEUE_OFFSET UNITYSDK_OFFSET(0x1654DF40)
#define RPG_CLIENT_ASSETMGR_SETENABLELIMITFRAMEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1654D970)
#define RPG_CLIENT_ASSETMGR_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1654BB40)
#define RPG_CLIENT_ASSETMGR_SET_ISMIDPACK_OFFSET UNITYSDK_OFFSET(0x1654BB00)
#define RPG_CLIENT_ASSETMGR_SET_PAUSEUNLOAD_OFFSET UNITYSDK_OFFSET(0x1654C3F0)
#define RPG_CLIENT_ASSETMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x1654CEA0)
#define RPG_CLIENT_ASSETMGR_SYNCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1654D9C0)
#define RPG_CLIENT_ASSETMGR_TICK_OFFSET UNITYSDK_OFFSET(0x1654C400)
#define RPG_CLIENT_ASSETMGR_UNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1654D250)
#define RPG_CLIENT_ASSETMGR_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1654D880)
#define RPG_CLIENT_ASSETMGR_UNLOADWILLUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1654CC20)
#define RPG_CLIENT_ASSETMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1654E6A0)
#define RPG_CLIENT_ASSETMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1654BD50)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetMgr_TypeDefinitionIndex = 31951;

	class AssetMgr : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ColliderTest()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4A20);
		}
		static ::RPG::Client::AssetMgr** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::AssetMgr**)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4A30);
		}
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableForceUnloadAssetProperty()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x4A38);
		}
		static ::System::Boolean* StaticGet_AssetTestEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x27C0);
		}
		static ::System::Boolean* StaticGet_IsInDestroy()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x27C1);
		}
		static ::System::Single* StaticGet_AssetLifecycleCheckSeconds()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x27C4);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x27C8);
		}
		::Class_0_16E4307DCC419505_63* _Provider; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* AssetLongPackageNameDic; // 0x18
		::Class_1_E998DEAD1943B5C5* _Control; // 0x20
		::Class_1_CEF5F27F657CD849* _Processor; // 0x28
		::System::Boolean _isMidPack; // 0x30
		::System::Int32 MaxAllowAsyncLoadBundleCount; // 0x34
		::System::Boolean EnableLimitFrameUnload; // 0x38
		::System::Boolean _PauseUnload_k__BackingField; // 0x39
		::System::Boolean _EnableCheckIfHasRequestInPreloadQueue; // 0x3A
		::System::Boolean ForceUnloadAllThisFrame; // 0x3B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableAssetLifecycle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ENABLEASSETLIFECYCLE_OFFSET))();
		}

		::System::Int32 get_CustomUpdatePreloadTimeMs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_CUSTOMUPDATEPRELOADTIMEMS_OFFSET))(this);
		}

		::System::Int32 get_LoaderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_LOADERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_AssetRefReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ASSETREFREADY_OFFSET))(this);
		}

		::System::Boolean get_IsMidPack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ISMIDPACK_OFFSET))(this);
		}

		::System::Void set_IsMidPack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_ISMIDPACK_OFFSET))(this, value);
		}

		static ::RPG::Client::AssetMgr* get_Instance()
		{
			return ((::RPG::Client::AssetMgr*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::AssetMgr* value)
		{
			return ((::System::Void(*)(::RPG::Client::AssetMgr*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_INSTANCE_OFFSET))(value);
		}

		static ::Class_0_16E4307DCC419505_63* get_Provider()
		{
			return ((::Class_0_16E4307DCC419505_63*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PROVIDER_OFFSET))();
		}

		::System::Boolean get_IsRuntimeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ISRUNTIMEMODE_OFFSET))(this);
		}

		static ::Class_1_CEF5F27F657CD849* get_Processor()
		{
			return ((::Class_1_CEF5F27F657CD849*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PROCESSOR_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_64* get_BundleIndexInfo()
		{
			return ((::Class_0_16E4307DCC419505_64*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_BUNDLEINDEXINFO_OFFSET))();
		}

		static ::System::Void CheckThreadId()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CHECKTHREADID_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearPathCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CLEARPATHCACHE_OFFSET))(this);
		}

		::System::Boolean IsUnloadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ISUNLOADFINISH_OFFSET))(this);
		}

		::System::Boolean get_PauseUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PAUSEUNLOAD_OFFSET))(this);
		}

		::System::Void set_PauseUnload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_PAUSEUNLOAD_OFFSET))(this, value);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec, ::System::Boolean frozen)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_TICK_OFFSET))(this, fElapsedTimeInSec, frozen);
		}

		::System::Void InitAssetLoaderProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_INITASSETLOADERPROVIDER_OFFSET))(this);
		}

		::System::Void ReloadServerIndexInfo(::System::Boolean isStartAsb, ::System::Boolean forceManagedLoad)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELOADSERVERINDEXINFO_OFFSET))(this, isStartAsb, forceManagedLoad);
		}

		::System::Void ReloadAssetRefManifest(::System::Boolean isStartAsb, ::System::Boolean forceManagedLoad)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELOADASSETREFMANIFEST_OFFSET))(this, isStartAsb, forceManagedLoad);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CLEARCACHE_OFFSET))(this);
		}

		::System::Void UnloadWillUnloadBundle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADWILLUNLOADBUNDLE_OFFSET))(this);
		}

		::System::Boolean Exists(::System::String* assetName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_EXISTS_OFFSET))(this, assetName);
		}

		::RPG::Client::IAssetOperation* AsyncLoadAsset(::System::String* assetName, ::System::Type* assetType, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle, ::System::Int32 logicType)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCLOADASSET_OFFSET))(this, assetName, assetType, userParam, handle, logicType);
		}

		::RPG::Client::IAssetOperation* SyncLoadAsset(::System::String* assetName, ::System::Type* assetType)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SYNCLOADASSET_OFFSET))(this, assetName, assetType);
		}

		::RPG::Client::IAssetOperation* AsyncInstance(::UnityEngine::Object* prefab, ::System::Object* userParam, ::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::UnityEngine::Object*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCINSTANCE_OFFSET))(this, prefab, userParam, handle);
		}

		::System::Boolean ReleaseByAssetObject(::UnityEngine::Object* assetObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELEASEBYASSETOBJECT_OFFSET))(this, assetObject);
		}

		::System::Boolean ReleaseByAssetProxy(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELEASEBYASSETPROXY_OFFSET))(this, assetOpt);
		}

		::System::Void UnloadBundle(::System::String* assetName, ::RPG::Client::OnAssetOperationDelegate* loadEventHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADBUNDLE_OFFSET))(this, assetName, loadEventHandle);
		}

		::RPG::Client::IAssetOperation* GetLoadAsset(::System::String* assetName, ::System::Type* assetType)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETLOADASSET_OFFSET))(this, assetName, assetType);
		}

		::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return ((::UnityEngine::AsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADUNUSEDASSETS_OFFSET))(this);
		}

		::System::Void ForceAllAsyncLoadImmediateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_FORCEALLASYNCLOADIMMEDIATECOMPLETE_OFFSET))(this);
		}

		::System::Void SetEnableLimitFrameUnload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SETENABLELIMITFRAMEUNLOAD_OFFSET))(this, value);
		}

		::RPG::Client::IAssetOperation* SyncLoadScene(::System::String* assetName)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SYNCLOADSCENE_OFFSET))(this, assetName);
		}

		::RPG::Client::IAssetOperation* AsyncLoadScene(::System::String* assetName, ::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCLOADSCENE_OFFSET))(this, assetName, handle);
		}

		::System::Void OnStartLoadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ONSTARTLOADSCENE_OFFSET))(this);
		}

		::System::Void OnEndLoadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ONENDLOADSCENE_OFFSET))(this);
		}

		::System::Boolean HasRequestInPreloadQueue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_HASREQUESTINPRELOADQUEUE_OFFSET))(this);
		}

		::System::Void SetEnableCheckIfHasRequestInPreloadQueue(::System::Boolean inValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SETENABLECHECKIFHASREQUESTINPRELOADQUEUE_OFFSET))(this, inValue);
		}

		::Class_0_16E4307DCC419505_64* GetBundleIndexInfo()
		{
			return ((::Class_0_16E4307DCC419505_64*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETBUNDLEINDEXINFO_OFFSET))(this);
		}

		::System::UInt64 GetAssetDeepSize(::System::String* assetName)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEEPSIZE_OFFSET))(this, assetName);
		}

		::System::UInt32 GetAssetSize(::System::UInt64 assetHash)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETSIZE_OFFSET))(this, assetHash);
		}

		::System::Boolean GetAssetDependencies(::System::UInt64 assetHash, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_OFFSET))(this, assetHash, result);
		}

		::System::Boolean GetAssetDependencies_1(::System::UInt64 assetHash, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_1_OFFSET))(this, assetHash, result);
		}

		::System::Boolean GetAssetDependencies_2(::System::UInt64 assetHash, ::System::Collections::Generic::List_1<::System::UInt64>* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_2_OFFSET))(this, assetHash, result);
		}

		::Class_1_AB3731E66128D034* GetAssetLoadingInfo(::System::String* assetName)
		{
			return ((::Class_1_AB3731E66128D034*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETLOADINGINFO_OFFSET))(this, assetName);
		}

		::Class_1_A81EE615F7FF4710* GetAssetObjectLoadStatisticalSummaryV1()
		{
			return ((::Class_1_A81EE615F7FF4710*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET))(this);
		}
	};
}
