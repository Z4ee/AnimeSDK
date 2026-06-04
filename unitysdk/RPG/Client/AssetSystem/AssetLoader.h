#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

class Class_0_16E4307DCC419505_61;
class Class_1_48570DED401BD199;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x18927D10)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET UNITYSDK_OFFSET(0x189298E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET UNITYSDK_OFFSET(0x18927CC0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x18927E60)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET UNITYSDK_OFFSET(0x18927850)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x18927EB0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18927F30)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x189293C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET UNITYSDK_OFFSET(0x189282C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x18927300)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET UNITYSDK_OFFSET(0x18927500)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET UNITYSDK_OFFSET(0x18927C70)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x189273E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x18927350)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x18927480)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x189274E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x189273B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x189274C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x18927370)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x189273D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x189274A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET UNITYSDK_OFFSET(0x18927800)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET UNITYSDK_OFFSET(0x18927760)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET UNITYSDK_OFFSET(0x189276C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x18927540)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x189275C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET UNITYSDK_OFFSET(0x18927610)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET UNITYSDK_OFFSET(0x18927C20)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x18927710)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x18927670)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET UNITYSDK_OFFSET(0x189299E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x189286D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET UNITYSDK_OFFSET(0x189285A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1890C0D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1892A3E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x18927DD0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET UNITYSDK_OFFSET(0x18929970)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x189280A0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET UNITYSDK_OFFSET(0x18929370)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x18927430)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x18927360)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x18927490)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x189274F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x189273C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x189274D0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x189274B0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1892A430)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18925740)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET UNITYSDK_OFFSET(0x18929060)
#define RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1892A740)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetLoader_TypeDefinitionIndex = 38587;

	class AssetLoader : public ::System::Object
	{
	public:
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> OnRequestHandleHandler; // 0x10
		::UnityEngine::AssetBundleRequest* AssetRequest; // 0x80
		::System::Object* _UserParam; // 0x88
		::RPG::PoolHashSet_1<::RPG::Client::AssetSystem::AssetObjectOptProxy*>* _ProxyList; // 0x90
		::System::String* _AssetName_k__BackingField; // 0x98
		::UnityEngine::Object* AssetObject; // 0xA0
		::Class_1_48570DED401BD199* BundleLoader; // 0xA8
		::System::Type* _AssetType_k__BackingField; // 0xB0
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0xB8
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0xC0
		::System::Int32 _RefCount; // 0xC4
		::System::UInt64 AssetNameHash; // 0xC8
		::System::Boolean _IsInAsyncLoadingDispose; // 0xD0
		::RPG::Client::OpType _OpType_k__BackingField; // 0xD4
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xD8
		::RPG::Client::AssetState _AssetState; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* GetAssetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETOBJECT_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void set_AssetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETNAME_OFFSET))(this, a1);
		}

		::System::String* get_LoaderType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERTYPE_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETTYPE_OFFSET))(this, a1);
		}

		::System::UInt64 get_NameHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Object* GetUserParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETUSERPARAM_OFFSET))(this);
		}

		::System::Void SetUserParam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETUSERPARAM_OFFSET))(this, a1);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETOPERATIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::OpType get_OpType()
		{
			return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_OPTYPE_OFFSET))(this);
		}

		::System::Void set_OpType(::RPG::Client::OpType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_OPTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::LoaderState get_LoaderState()
		{
			return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_LOADERSTATE_OFFSET))(this);
		}

		::System::Void set_LoaderState(::RPG::Client::LoaderState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_LOADERSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Void set_AssetState(::RPG::Client::AssetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SET_ASSETSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* GetLoader()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETLOADER_OFFSET))(this);
		}

		::System::Boolean IsHandleCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISHANDLECALLED_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISFAILED_OFFSET))(this);
		}

		::System::Boolean IsNotLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOTLOAD_OFFSET))(this);
		}

		::System::Boolean IsAsyncLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISASYNCLOADING_OFFSET))(this);
		}

		::System::Void IncRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_INCREF_OFFSET))(this);
		}

		::System::Void DecRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DECREF_OFFSET))(this);
		}

		::System::Boolean IsNoRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ISNOREF_OFFSET))(this);
		}

		::System::Int32 GetRefNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETREFNUM_OFFSET))(this);
		}

		::System::Void AddRef(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDREF_OFFSET))(this, a1);
		}

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVELOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void ClearLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_CLEARLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchLoadedEvent(::Class_0_16E4307DCC419505_61* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPATCHLOADEDEVENT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_RESETDATA_OFFSET))(this);
		}

		::System::String* GetAssetLongName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_GETASSETLONGNAME_OFFSET))(this);
		}

		::System::Boolean OnBundleAsyncLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONBUNDLEASYNCLOADED_OFFSET))(this);
		}

		::System::Void OnAssetRequestHandle(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONASSETREQUESTHANDLE_OFFSET))(this, a1);
		}

		::System::Void _OnAssetRequestHandleImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER__ONASSETREQUESTHANDLEIMPL_OFFSET))(this);
		}

		::System::Void OnComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONCOMPLETE_OFFSET))(this);
		}

		::System::Void SetInDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_SETINDISPOSE_OFFSET))(this);
		}

		::System::Void ForceSyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_FORCESYNCLOAD_OFFSET))(this);
		}

		::System::Void AddProxy(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ADDPROXY_OFFSET))(this, a1);
		}

		::System::Void RemoveProxy(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_REMOVEPROXY_OFFSET))(this, a1);
		}

		::System::Void MergeWith(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_MERGEWITH_OFFSET))(this, a1);
		}

		::System::Void OnDelayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_ONDELAYCOMPLETE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETLOADER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
