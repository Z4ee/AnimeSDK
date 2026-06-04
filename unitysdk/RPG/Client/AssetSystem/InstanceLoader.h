#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

class Class_0_16E4307DCC419505_61;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class BinaryPrefabInstantiateRequest; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1892D7A0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ASYNCINSTANCE_OFFSET UNITYSDK_OFFSET(0x1892D920)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_CLEARLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1892D8D0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPATCHLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x1892DF40)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1892D580)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1892E520)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1892C6F0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETLOADER_OFFSET UNITYSDK_OFFSET(0x1892C410)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1892C130)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1892C070)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1892C1C0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1892C220)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1892C090)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x1892C200)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x1892C3D0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x1892C0C0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x1892C1E0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_PROTOTYPEPREFAB_OFFSET UNITYSDK_OFFSET(0x1892C0B0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1892C330)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x1892C450)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1892C240)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1892C290)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1892C380)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x1892C2E0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1892DEF0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1892D850)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1892D6E0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1892C170)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1892C080)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1892C1D0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1892C230)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1892C0A0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x1892C210)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x1892C1F0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1892E1A0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_UNBOUNDASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1892D220)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1892C4D0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLEIMPL_OFFSET UNITYSDK_OFFSET(0x1892CCD0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x1892DA70)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__PUTRECYCLEQUEUE_OFFSET UNITYSDK_OFFSET(0x1892D610)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1892E5A0)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int InstanceLoader_TypeDefinitionIndex = 38592;

	class InstanceLoader : public ::System::Object
	{
	public:
		::UnityEngine::Object* _InstanceObject; // 0x10
		::System::String* _AssetName_k__BackingField; // 0x18
		::UnityEngine::Object* _PrototypePrefab; // 0x20
		::System::Object* _UserParam; // 0x28
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0x30
		::System::Type* _AssetType_k__BackingField; // 0x38
		::UnityEngine::BinaryPrefabInstantiateRequest* _BinaryPrefabRequest; // 0x40
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> OnBinaryRequestHandleHandler; // 0x48
		::System::Boolean _IsUnbound; // 0xB8
		::RPG::Client::OpType _OpType_k__BackingField; // 0xBC
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0xC0
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xC4
		::RPG::Client::AssetState _AssetState; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__CTOR_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void set_AssetName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETNAME_OFFSET))(this, a1);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_PrototypePrefab()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_PROTOTYPEPREFAB_OFFSET))(this);
		}

		::System::UInt64 get_NameHash()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_NAMEHASH_OFFSET))(this);
		}

		::System::Object* GetUserParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETUSERPARAM_OFFSET))(this);
		}

		::System::Void SetUserParam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SETUSERPARAM_OFFSET))(this, a1);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETOPERATIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::OpType get_OpType()
		{
			return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_OPTYPE_OFFSET))(this);
		}

		::System::Void set_OpType(::RPG::Client::OpType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_OPTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::LoaderState get_LoaderState()
		{
			return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERSTATE_OFFSET))(this);
		}

		::System::Void set_LoaderState(::RPG::Client::LoaderState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_LOADERSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Void set_AssetState(::RPG::Client::AssetState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETSTATE_OFFSET))(this, a1);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISFAILED_OFFSET))(this);
		}

		::System::Boolean IsNotLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISNOTLOAD_OFFSET))(this);
		}

		::System::String* get_LoaderType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERTYPE_OFFSET))(this);
		}

		::RPG::Client::IAssetOperation* GetLoader()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETLOADER_OFFSET))(this);
		}

		::System::Boolean IsHandleCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISHANDLECALLED_OFFSET))(this);
		}

		::UnityEngine::Object* GetAssetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETASSETOBJECT_OFFSET))(this);
		}

		::System::Void UnboundAssetObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_UNBOUNDASSETOBJECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPOSE_OFFSET))(this);
		}

		::System::Void _PutRecycleQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__PUTRECYCLEQUEUE_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_RESETDATA_OFFSET))(this);
		}

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ADDLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_REMOVELOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void ClearLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_CLEARLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void AsyncInstance(::UnityEngine::Object* a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ASYNCINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnInstantiateRequestHandle(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLE_OFFSET))(this, a1);
		}

		::System::Void OnDelayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ONDELAYCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnInstantiateRequestHandleImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLEIMPL_OFFSET))(this);
		}

		::System::Void DispatchLoadedEvent(::Class_0_16E4307DCC419505_61* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPATCHLOADEDEVENT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_TOSTRING_OFFSET))(this);
		}

		::System::Void ForceSyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_FORCESYNCLOAD_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
