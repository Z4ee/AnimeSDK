#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_62;
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_ASSETOPERATIONMODEL_ADDASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1654E960)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ADDONLYSELFASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1654EC00)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ADDREF_OFFSET UNITYSDK_OFFSET(0x1654F180)
#define RPG_CLIENT_ASSETOPERATIONMODEL_CLEARASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1654EB40)
#define RPG_CLIENT_ASSETOPERATIONMODEL_CLEARONLYSELFASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1654ED30)
#define RPG_CLIENT_ASSETOPERATIONMODEL_DECREF_OFFSET UNITYSDK_OFFSET(0x1654F0B0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHASSETLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x1654EB90)
#define RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHONLYSELFASSETLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x1654ED80)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GETREFNUM_OFFSET UNITYSDK_OFFSET(0x1654F140)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GET_ASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x1654E8C0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GET_FULLEDITORPATH_OFFSET UNITYSDK_OFFSET(0x16531CD0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1654F270)
#define RPG_CLIENT_ASSETOPERATIONMODEL_INCREF_OFFSET UNITYSDK_OFFSET(0x1654F070)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1654F1D0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1654EE90)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1654EDF0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1654EEE0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISNOREF_OFFSET UNITYSDK_OFFSET(0x1654F0F0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1654EF30)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x1654EE40)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISSYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1654F220)
#define RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1654EA10)
#define RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1654EA90)
#define RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEONLYSELFASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1654ECB0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_RESET_OFFSET UNITYSDK_OFFSET(0x165319C0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETASYNCLOADING_OFFSET UNITYSDK_OFFSET(0x1654F020)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETFAILED_OFFSET UNITYSDK_OFFSET(0x16531E90)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETLOADED_OFFSET UNITYSDK_OFFSET(0x16531E40)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1654EFD0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETSUCCEED_OFFSET UNITYSDK_OFFSET(0x1654EF80)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETSYNCLOADING_OFFSET UNITYSDK_OFFSET(0x16531AC0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SET_ASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x1654E8D0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_UNLOAD_OFFSET UNITYSDK_OFFSET(0x16531EE0)
#define RPG_CLIENT_ASSETOPERATIONMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x165317B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetOperationModel_TypeDefinitionIndex = 31946;

	class AssetOperationModel : public ::System::Object
	{
	public:
		::RPG::Client::OnAssetOperationDelegate* OnlySelfAssetLoadedDispatch; // 0x10
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0x18
		::System::String* _AssetShortName; // 0x20
		::System::Type* AssetType; // 0x28
		::RPG::Client::AssetState _AssetState; // 0x30
		::System::UInt32 _RefCount; // 0x34
		::RPG::Client::OpType OpType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_RESET_OFFSET))(this);
		}

		::System::String* get_AssetShortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_GET_ASSETSHORTNAME_OFFSET))(this);
		}

		::System::Void set_AssetShortName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SET_ASSETSHORTNAME_OFFSET))(this, value);
		}

		::System::String* get_FullEditorPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_GET_FULLEDITORPATH_OFFSET))(this);
		}

		::System::Void AddAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ADDASSETLOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Void RemoveAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEASSETLOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Void RemoveHandle(::System::Boolean isOnlyUnloadSelf, ::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEHANDLE_OFFSET))(this, isOnlyUnloadSelf, handle);
		}

		::System::Void ClearAssetLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_CLEARASSETLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchAssetLoadedEvent(::Class_0_16E4307DCC419505_62* assetOpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHASSETLOADEDEVENT_OFFSET))(this, assetOpt);
		}

		::System::Void AddOnlySelfAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ADDONLYSELFASSETLOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Void RemoveOnlySelfAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* handle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEONLYSELFASSETLOADEDHANDLE_OFFSET))(this, handle);
		}

		::System::Void ClearOnlySelfAssetLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_CLEARONLYSELFASSETLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchOnlySelfAssetLoadedEvent(::Class_0_16E4307DCC419505_62* assetOpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHONLYSELFASSETLOADEDEVENT_OFFSET))(this, assetOpt);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsSucceed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISSUCCEED_OFFSET))(this);
		}

		::System::Boolean IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISFAILED_OFFSET))(this);
		}

		::System::Boolean IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISLOADING_OFFSET))(this);
		}

		::System::Boolean IsNotLoad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISNOTLOAD_OFFSET))(this);
		}

		::System::Void SetLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SETLOADED_OFFSET))(this);
		}

		::System::Void SetSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SETSUCCEED_OFFSET))(this);
		}

		::System::Void SetFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SETFAILED_OFFSET))(this);
		}

		::System::Void SetNotLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SETNOTLOAD_OFFSET))(this);
		}

		::System::Void SetSyncLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SETSYNCLOADING_OFFSET))(this);
		}

		::System::Void SetAsyncLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SETASYNCLOADING_OFFSET))(this);
		}

		::System::Void IncRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_INCREF_OFFSET))(this);
		}

		::System::Void DecRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_DECREF_OFFSET))(this);
		}

		::System::Boolean IsNoRef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISNOREF_OFFSET))(this);
		}

		::System::UInt32 GetRefNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_GETREFNUM_OFFSET))(this);
		}

		::System::Void AddRef(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ADDREF_OFFSET))(this, value);
		}

		::System::Boolean IsAsyncOperation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISASYNCOPERATION_OFFSET))(this);
		}

		::System::Boolean IsSyncOperation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ISSYNCOPERATION_OFFSET))(this);
		}

		::RPG::Client::AssetState get_State()
		{
			return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_GET_STATE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_UNLOAD_OFFSET))(this);
		}
	};
}
