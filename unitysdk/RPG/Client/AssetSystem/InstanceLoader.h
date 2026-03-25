#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/LoaderState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ActionClosure_1.h"

class Class_0_16E4307DCC419505_62;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class BinaryPrefabInstantiateRequest; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x16554680)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ASYNCINSTANCE_OFFSET UNITYSDK_OFFSET(0x16554800)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_CLEARLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x165547B0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPATCHLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x16554E10)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16554440)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x165559A0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x16553380)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETLOADER_OFFSET UNITYSDK_OFFSET(0x165530D0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x16552DE0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x16552D10)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x16552E80)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x16552EE0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x16552D30)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x16552EC0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERTYPE_OFFSET UNITYSDK_OFFSET(0x16553090)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_NAMEHASH_OFFSET UNITYSDK_OFFSET(0x16552D60)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x16552EA0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_PROTOTYPEPREFAB_OFFSET UNITYSDK_OFFSET(0x16552D50)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISFAILED_OFFSET UNITYSDK_OFFSET(0x16552FF0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x16553110)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISLOADED_OFFSET UNITYSDK_OFFSET(0x16552F00)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISLOADING_OFFSET UNITYSDK_OFFSET(0x16552F50)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x16553040)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x16552FA0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ONDELAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x16554DC0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x16554730)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_RESETDATA_OFFSET UNITYSDK_OFFSET(0x165545A0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x16552E30)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x16552D20)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x16552E90)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x16552EF0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x16552D40)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_LOADERSTATE_OFFSET UNITYSDK_OFFSET(0x16552ED0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_OPTYPE_OFFSET UNITYSDK_OFFSET(0x16552EB0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x165555B0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_UNBOUNDASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x16554040)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x16553190)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLEIMPL_OFFSET UNITYSDK_OFFSET(0x16553A30)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLE_OFFSET UNITYSDK_OFFSET(0x16554940)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__PUTRECYCLEQUEUE_OFFSET UNITYSDK_OFFSET(0x165544D0)
#define RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16555A20)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int InstanceLoader_TypeDefinitionIndex = 32135;

	class InstanceLoader : public ::System::Object
	{
	public:
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0x10
		::System::Type* _AssetType_k__BackingField; // 0x18
		::System::String* _AssetName_k__BackingField; // 0x20
		::UnityEngine::GCFreeClosure::ActionClosure_1<::UnityEngine::AsyncOperation*> OnBinaryRequestHandleHandler; // 0x28
		::UnityEngine::Object* _PrototypePrefab; // 0x98
		::UnityEngine::BinaryPrefabInstantiateRequest* _BinaryPrefabRequest; // 0xA0
		::System::Object* _UserParam; // 0xA8
		::UnityEngine::Object* _InstanceObject; // 0xB0
		::System::Boolean _IsUnbound; // 0xB8
		::RPG::Client::AssetState _AssetState; // 0xBC
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0xC0
		::RPG::Client::OpType _OpType_k__BackingField; // 0xC4
		::RPG::Client::LoaderState _LoaderState_k__BackingField; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__CTOR_OFFSET))(this);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Void set_AssetName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETNAME_OFFSET))(this, value);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETTYPE_OFFSET))(this);
		}

		::System::Void set_AssetType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETTYPE_OFFSET))(this, value);
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

		::System::Void SetUserParam(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SETUSERPARAM_OFFSET))(this, userParam);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETOPERATIONINDEX_OFFSET))(this, value);
		}

		::RPG::Client::OpType get_OpType()
		{
			return ((::RPG::Client::OpType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_OPTYPE_OFFSET))(this);
		}

		::System::Void set_OpType(::RPG::Client::OpType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_OPTYPE_OFFSET))(this, value);
		}

		::RPG::Client::LoaderState get_LoaderState()
		{
			return ((::RPG::Client::LoaderState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_LOADERSTATE_OFFSET))(this);
		}

		::System::Void set_LoaderState(::RPG::Client::LoaderState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoaderState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_LOADERSTATE_OFFSET))(this, value);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Void set_AssetState(::RPG::Client::AssetState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_SET_ASSETSTATE_OFFSET))(this, value);
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

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ADDLOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_REMOVELOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Void ClearLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_CLEARLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void AsyncInstance(::UnityEngine::Object* prototypePrefab, ::RPG::Client::OnAssetOperationDelegate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ASYNCINSTANCE_OFFSET))(this, prototypePrefab, callback);
		}

		::System::Void _OnInstantiateRequestHandle(::UnityEngine::AsyncOperation* asyncOperation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLE_OFFSET))(this, asyncOperation);
		}

		::System::Void OnDelayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_ONDELAYCOMPLETE_OFFSET))(this);
		}

		::System::Void _OnInstantiateRequestHandleImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER__ONINSTANTIATEREQUESTHANDLEIMPL_OFFSET))(this);
		}

		::System::Void DispatchLoadedEvent(::Class_0_16E4307DCC419505_62* assetOpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_INSTANCELOADER_DISPATCHLOADEDEVENT_OFFSET))(this, assetOpt);
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
