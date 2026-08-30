#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client::AssetSystem { class AssetLoader; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ADDLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1A4DF4C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4DF350)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_FORCESYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1A4DEA30)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GETASSETOBJECT_OFFSET UNITYSDK_OFFSET(0x1A4DEA80)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GETLOADER_OFFSET UNITYSDK_OFFSET(0x1A4DEF80)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1A4DEEF0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1A4DE630)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETNAME_OFFSET UNITYSDK_OFFSET(0x1A4DE690)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A4DE670)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETSTATE_OFFSET UNITYSDK_OFFSET(0x1A4DE750)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETTYPE_OFFSET UNITYSDK_OFFSET(0x1A4DE6F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1A4DE8C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISHANDLECALLED_OFFSET UNITYSDK_OFFSET(0x1A4DE9E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1A4DE7C0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1A4DE940)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x1A4DE840)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ONASSETOBJECTLOADED_OFFSET UNITYSDK_OFFSET(0x1A4DD610)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_REMOVELOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1A4DF5E0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_RESETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1A4DF660)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_SETASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1A4DDCD0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_SETUSERPARAM_OFFSET UNITYSDK_OFFSET(0x1A4DEF30)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_SET_ASSETOPERATIONINDEX_OFFSET UNITYSDK_OFFSET(0x1A4DE680)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A4DF6F0)
#define RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4DE7B0)

namespace RPG::Client::AssetSystem
{
	inline static constexpr unsigned int AssetObjectOptProxy_TypeDefinitionIndex = 40275;

	class AssetObjectOptProxy : public ::System::Object
	{
	public:
		::RPG::Client::AssetSystem::AssetLoader* _AssetLoader; // 0x10
		::RPG::Client::OnAssetOperationDelegate* _AssetLoadedDispatch; // 0x18
		::System::Object* _UserParam; // 0x20
		::System::Int32 _InstanceID; // 0x28
		::System::Int32 _AssetOperationIndex_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY__CTOR_OFFSET))(this);
		}

		::RPG::Client::AssetSystem::AssetLoader* get_AssetLoader()
		{
			return ((::RPG::Client::AssetSystem::AssetLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::Int32 get_AssetOperationIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETOPERATIONINDEX_OFFSET))(this);
		}

		::System::Void set_AssetOperationIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_SET_ASSETOPERATIONINDEX_OFFSET))(this, a1);
		}

		::System::String* get_AssetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETNAME_OFFSET))(this);
		}

		::System::Type* get_AssetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETTYPE_OFFSET))(this);
		}

		::RPG::Client::AssetState get_AssetState()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GET_ASSETSTATE_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISFAILED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsHandleCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ISHANDLECALLED_OFFSET))(this);
		}

		::System::Void ForceSyncLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_FORCESYNCLOAD_OFFSET))(this);
		}

		::UnityEngine::Object* GetAssetObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GETASSETOBJECT_OFFSET))(this);
		}

		::System::Object* GetUserParam()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GETUSERPARAM_OFFSET))(this);
		}

		::System::Void SetUserParam(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_SETUSERPARAM_OFFSET))(this, a1);
		}

		::RPG::Client::IAssetOperation* GetLoader()
		{
			return ((::RPG::Client::IAssetOperation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_GETLOADER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Boolean OnAssetObjectLoaded(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ONASSETOBJECTLOADED_OFFSET))(this, a1);
		}

		::System::Boolean AddLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_ADDLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Boolean RemoveLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_REMOVELOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void ResetLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_RESETLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void SetAssetLoader(::RPG::Client::AssetSystem::AssetLoader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetSystem::AssetLoader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_SETASSETLOADER_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETSYSTEM_ASSETOBJECTOPTPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
