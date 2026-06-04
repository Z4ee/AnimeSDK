#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"

class Class_0_16E4307DCC419505_62;
class Class_0_16E4307DCC419505_63;
class Class_1_A81EE615F7FF4710;
class Class_1_B7E288ED7136445D;
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

#define RPG_CLIENT_ASSETMGR_ASYNCINSTANCE_OFFSET UNITYSDK_OFFSET(0x189250A0)
#define RPG_CLIENT_ASSETMGR_ASYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x18924D80)
#define RPG_CLIENT_ASSETMGR_ASYNCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x18925C50)
#define RPG_CLIENT_ASSETMGR_CHECKTHREADID_OFFSET UNITYSDK_OFFSET(0x18923DB0)
#define RPG_CLIENT_ASSETMGR_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x18924BE0)
#define RPG_CLIENT_ASSETMGR_CLEARPATHCACHE_OFFSET UNITYSDK_OFFSET(0x189243A0)
#define RPG_CLIENT_ASSETMGR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18924270)
#define RPG_CLIENT_ASSETMGR_EXISTS_OFFSET UNITYSDK_OFFSET(0x18924D20)
#define RPG_CLIENT_ASSETMGR_FORCEALLASYNCLOADIMMEDIATECOMPLETE_OFFSET UNITYSDK_OFFSET(0x189259E0)
#define RPG_CLIENT_ASSETMGR_GETASSETDEEPSIZE_OFFSET UNITYSDK_OFFSET(0x189262E0)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_1_OFFSET UNITYSDK_OFFSET(0x18926420)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_2_OFFSET UNITYSDK_OFFSET(0x189264A0)
#define RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x189263A0)
#define RPG_CLIENT_ASSETMGR_GETASSETLOADINGINFO_OFFSET UNITYSDK_OFFSET(0x18926520)
#define RPG_CLIENT_ASSETMGR_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET UNITYSDK_OFFSET(0x189266E0)
#define RPG_CLIENT_ASSETMGR_GETASSETSIZE_OFFSET UNITYSDK_OFFSET(0x18926340)
#define RPG_CLIENT_ASSETMGR_GETBUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x18926280)
#define RPG_CLIENT_ASSETMGR_GETLOADASSET_OFFSET UNITYSDK_OFFSET(0x189255A0)
#define RPG_CLIENT_ASSETMGR_GET_ASSETREFREADY_OFFSET UNITYSDK_OFFSET(0x18923C30)
#define RPG_CLIENT_ASSETMGR_GET_BUNDLEINDEXINFO_OFFSET UNITYSDK_OFFSET(0x18923D20)
#define RPG_CLIENT_ASSETMGR_GET_CUSTOMUPDATEPRELOADTIMEMS_OFFSET UNITYSDK_OFFSET(0x18923B70)
#define RPG_CLIENT_ASSETMGR_GET_ENABLEASSETLIFECYCLE_OFFSET UNITYSDK_OFFSET(0x18923A20)
#define RPG_CLIENT_ASSETMGR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18923CB0)
#define RPG_CLIENT_ASSETMGR_GET_ISMIDPACK_OFFSET UNITYSDK_OFFSET(0x18923C90)
#define RPG_CLIENT_ASSETMGR_GET_ISRUNTIMEMODE_OFFSET UNITYSDK_OFFSET(0x18923B10)
#define RPG_CLIENT_ASSETMGR_GET_LOADERCOUNT_OFFSET UNITYSDK_OFFSET(0x18923BD0)
#define RPG_CLIENT_ASSETMGR_GET_PAUSEUNLOAD_OFFSET UNITYSDK_OFFSET(0x189244E0)
#define RPG_CLIENT_ASSETMGR_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x1890B0E0)
#define RPG_CLIENT_ASSETMGR_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x188FFBD0)
#define RPG_CLIENT_ASSETMGR_HASREQUESTINPRELOADQUEUE_OFFSET UNITYSDK_OFFSET(0x18926220)
#define RPG_CLIENT_ASSETMGR_INITASSETLOADERPROVIDER_OFFSET UNITYSDK_OFFSET(0x189241C0)
#define RPG_CLIENT_ASSETMGR_INIT_OFFSET UNITYSDK_OFFSET(0x18923F80)
#define RPG_CLIENT_ASSETMGR_ISUNLOADFINISH_OFFSET UNITYSDK_OFFSET(0x18924430)
#define RPG_CLIENT_ASSETMGR_ONENDLOADSCENE_OFFSET UNITYSDK_OFFSET(0x18926050)
#define RPG_CLIENT_ASSETMGR_ONSTARTLOADSCENE_OFFSET UNITYSDK_OFFSET(0x18925E30)
#define RPG_CLIENT_ASSETMGR_RELEASEBYASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x18925170)
#define RPG_CLIENT_ASSETMGR_RELEASEBYASSETPROXY_OFFSET UNITYSDK_OFFSET(0x18925250)
#define RPG_CLIENT_ASSETMGR_RELOADASSETREFMANIFEST_OFFSET UNITYSDK_OFFSET(0x18924B70)
#define RPG_CLIENT_ASSETMGR_RELOADSERVERINDEXINFO_OFFSET UNITYSDK_OFFSET(0x18924A90)
#define RPG_CLIENT_ASSETMGR_SETENABLECHECKIFHASREQUESTINPRELOADQUEUE_OFFSET UNITYSDK_OFFSET(0x18926000)
#define RPG_CLIENT_ASSETMGR_SETENABLELIMITFRAMEUNLOAD_OFFSET UNITYSDK_OFFSET(0x18925A30)
#define RPG_CLIENT_ASSETMGR_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18923CE0)
#define RPG_CLIENT_ASSETMGR_SET_ISMIDPACK_OFFSET UNITYSDK_OFFSET(0x18923CA0)
#define RPG_CLIENT_ASSETMGR_SET_PAUSEUNLOAD_OFFSET UNITYSDK_OFFSET(0x189244F0)
#define RPG_CLIENT_ASSETMGR_SYNCLOADASSET_OFFSET UNITYSDK_OFFSET(0x18924F30)
#define RPG_CLIENT_ASSETMGR_SYNCLOADSCENE_OFFSET UNITYSDK_OFFSET(0x18925A80)
#define RPG_CLIENT_ASSETMGR_TICK_OFFSET UNITYSDK_OFFSET(0x18924500)
#define RPG_CLIENT_ASSETMGR_UNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x189252E0)
#define RPG_CLIENT_ASSETMGR_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x18925930)
#define RPG_CLIENT_ASSETMGR_UNLOADWILLUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x18924CA0)
#define RPG_CLIENT_ASSETMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18926730)
#define RPG_CLIENT_ASSETMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x18923E90)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetMgr_TypeDefinitionIndex = 38403;

	class AssetMgr : public ::System::Object
	{
	public:
		static ::RPG::Client::AssetMgr** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::AssetMgr**)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x18640);
		}
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_ColliderTest()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x18648);
		}
		static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_EnableForceUnloadAssetProperty()
		{
			return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x18658);
		}
		static ::System::Single* StaticGet_AssetLifecycleCheckSeconds()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x82D0);
		}
		static ::System::Boolean* StaticGet_AssetTestEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x82D4);
		}
		static ::System::Boolean* StaticGet_IsInDestroy()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x82D5);
		}
		static ::System::Int32* StaticGet_msMainThreadId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetMgr_TypeDefinitionIndex)->GetStaticField(0x82D8);
		}
		::Class_0_16E4307DCC419505_62* _Provider; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* AssetLongPackageNameDic; // 0x18
		::Class_1_CEF5F27F657CD849* _Processor; // 0x20
		::Class_1_E998DEAD1943B5C5* _Control; // 0x28
		::System::Boolean EnableLimitFrameUnload; // 0x30
		::System::Boolean _EnableCheckIfHasRequestInPreloadQueue; // 0x31
		::System::Boolean _PauseUnload_k__BackingField; // 0x32
		::System::Boolean ForceUnloadAllThisFrame; // 0x33
		::System::Boolean _isMidPack; // 0x34
		::System::Int32 MaxAllowAsyncLoadBundleCount; // 0x38

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

		::System::Void set_IsMidPack(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_ISMIDPACK_OFFSET))(this, a1);
		}

		static ::RPG::Client::AssetMgr* get_Instance()
		{
			return ((::RPG::Client::AssetMgr*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::AssetMgr* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AssetMgr*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_INSTANCE_OFFSET))(a1);
		}

		static ::Class_0_16E4307DCC419505_62* get_Provider()
		{
			return ((::Class_0_16E4307DCC419505_62*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PROVIDER_OFFSET))();
		}

		::System::Boolean get_IsRuntimeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_ISRUNTIMEMODE_OFFSET))(this);
		}

		static ::Class_1_CEF5F27F657CD849* get_Processor()
		{
			return ((::Class_1_CEF5F27F657CD849*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_PROCESSOR_OFFSET))();
		}

		static ::Class_0_16E4307DCC419505_63* get_BundleIndexInfo()
		{
			return ((::Class_0_16E4307DCC419505_63*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GET_BUNDLEINDEXINFO_OFFSET))();
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

		::System::Void set_PauseUnload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SET_PAUSEUNLOAD_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_TICK_OFFSET))(this, a1, a2);
		}

		::System::Void InitAssetLoaderProvider()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_INITASSETLOADERPROVIDER_OFFSET))(this);
		}

		::System::Void ReloadServerIndexInfo(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELOADSERVERINDEXINFO_OFFSET))(this, a1, a2);
		}

		::System::Void ReloadAssetRefManifest(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELOADASSETREFMANIFEST_OFFSET))(this, a1, a2);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_CLEARCACHE_OFFSET))(this);
		}

		::System::Void UnloadWillUnloadBundle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADWILLUNLOADBUNDLE_OFFSET))(this, a1);
		}

		::System::Boolean Exists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_EXISTS_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* AsyncLoadAsset(::System::String* a1, ::System::Type* a2, ::System::Object* a3, ::RPG::Client::OnAssetOperationDelegate* a4, ::System::Int32 a5)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCLOADASSET_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::IAssetOperation* SyncLoadAsset(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SYNCLOADASSET_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAssetOperation* AsyncInstance(::UnityEngine::Object* a1, ::System::Object* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::UnityEngine::Object*, ::System::Object*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ReleaseByAssetObject(::UnityEngine::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELEASEBYASSETOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean ReleaseByAssetProxy(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_RELEASEBYASSETPROXY_OFFSET))(this, a1);
		}

		::System::Void UnloadBundle(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADBUNDLE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IAssetOperation* GetLoadAsset(::System::String* a1, ::System::Type* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETLOADASSET_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return ((::UnityEngine::AsyncOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_UNLOADUNUSEDASSETS_OFFSET))(this);
		}

		::System::Void ForceAllAsyncLoadImmediateComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_FORCEALLASYNCLOADIMMEDIATECOMPLETE_OFFSET))(this);
		}

		::System::Void SetEnableLimitFrameUnload(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SETENABLELIMITFRAMEUNLOAD_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* SyncLoadScene(::System::String* a1)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SYNCLOADSCENE_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* AsyncLoadScene(::System::String* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_ASYNCLOADSCENE_OFFSET))(this, a1, a2);
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

		::System::Void SetEnableCheckIfHasRequestInPreloadQueue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_SETENABLECHECKIFHASREQUESTINPRELOADQUEUE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_63* GetBundleIndexInfo()
		{
			return ((::Class_0_16E4307DCC419505_63*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETBUNDLEINDEXINFO_OFFSET))(this);
		}

		::System::UInt64 GetAssetDeepSize(::System::String* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEEPSIZE_OFFSET))(this, a1);
		}

		::System::UInt32 GetAssetSize(::System::UInt64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETSIZE_OFFSET))(this, a1);
		}

		::System::Boolean GetAssetDependencies(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::UInt64, ::System::UInt32, ::RPG::Client::CachedAssetLogicType>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetAssetDependencies_1(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt64, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetAssetDependencies_2(::System::UInt64 a1, ::System::Collections::Generic::List_1<::System::UInt64>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETDEPENDENCIES_2_OFFSET))(this, a1, a2);
		}

		::Class_1_B7E288ED7136445D* GetAssetLoadingInfo(::System::String* a1)
		{
			return ((::Class_1_B7E288ED7136445D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETLOADINGINFO_OFFSET))(this, a1);
		}

		::Class_1_A81EE615F7FF4710* GetAssetObjectLoadStatisticalSummaryV1()
		{
			return ((::Class_1_A81EE615F7FF4710*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETMGR_GETASSETOBJECTLOADSTATISTICALSUMMARYV1_OFFSET))(this);
		}
	};
}
