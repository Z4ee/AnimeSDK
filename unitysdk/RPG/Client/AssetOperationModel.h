#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/RPG/Client/OpType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_80;
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CLIENT_ASSETOPERATIONMODEL_ADDASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC9320)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ADDONLYSELFASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC95C0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ADDREF_OFFSET UNITYSDK_OFFSET(0x1BFC9B40)
#define RPG_CLIENT_ASSETOPERATIONMODEL_CLEARASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC9500)
#define RPG_CLIENT_ASSETOPERATIONMODEL_CLEARONLYSELFASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC96F0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_DECREF_OFFSET UNITYSDK_OFFSET(0x1BFC9A70)
#define RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHASSETLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x1BFC9550)
#define RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHONLYSELFASSETLOADEDEVENT_OFFSET UNITYSDK_OFFSET(0x1BFC9740)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GETREFNUM_OFFSET UNITYSDK_OFFSET(0x1BFC9B00)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GET_ASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x1BFC9280)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GET_FULLEDITORPATH_OFFSET UNITYSDK_OFFSET(0x1BF9C760)
#define RPG_CLIENT_ASSETOPERATIONMODEL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1BFC9C30)
#define RPG_CLIENT_ASSETOPERATIONMODEL_INCREF_OFFSET UNITYSDK_OFFSET(0x1BFC9A30)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISASYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1BFC9B90)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1BFC9850)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1BFC97B0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISLOADING_OFFSET UNITYSDK_OFFSET(0x1BFC98A0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISNOREF_OFFSET UNITYSDK_OFFSET(0x1BFC9AB0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1BFC98F0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISSUCCEED_OFFSET UNITYSDK_OFFSET(0x1BFC9800)
#define RPG_CLIENT_ASSETOPERATIONMODEL_ISSYNCOPERATION_OFFSET UNITYSDK_OFFSET(0x1BFC9BE0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC93D0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC9450)
#define RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEONLYSELFASSETLOADEDHANDLE_OFFSET UNITYSDK_OFFSET(0x1BFC9670)
#define RPG_CLIENT_ASSETOPERATIONMODEL_RESET_OFFSET UNITYSDK_OFFSET(0x1BF9C480)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETASYNCLOADING_OFFSET UNITYSDK_OFFSET(0x1BFC99E0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETFAILED_OFFSET UNITYSDK_OFFSET(0x1BF9C920)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETLOADED_OFFSET UNITYSDK_OFFSET(0x1BF9C8D0)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETNOTLOAD_OFFSET UNITYSDK_OFFSET(0x1BFC9990)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETSUCCEED_OFFSET UNITYSDK_OFFSET(0x1BFC9940)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SETSYNCLOADING_OFFSET UNITYSDK_OFFSET(0x1BF9C580)
#define RPG_CLIENT_ASSETOPERATIONMODEL_SET_ASSETSHORTNAME_OFFSET UNITYSDK_OFFSET(0x1BFC9290)
#define RPG_CLIENT_ASSETOPERATIONMODEL_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1BF9C970)
#define RPG_CLIENT_ASSETOPERATIONMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF9C2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssetOperationModel_TypeDefinitionIndex = 40078;

	class AssetOperationModel : public ::System::Object
	{
	public:
		::RPG::Client::OnAssetOperationDelegate* AssetLoadedDispatch; // 0x10
		::System::String* _AssetShortName; // 0x18
		::RPG::Client::OnAssetOperationDelegate* OnlySelfAssetLoadedDispatch; // 0x20
		::System::Type* AssetType; // 0x28
		::RPG::Client::OpType OpType; // 0x30
		::RPG::Client::AssetState _AssetState; // 0x34
		::System::UInt32 _RefCount; // 0x38

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

		::System::Void set_AssetShortName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_SET_ASSETSHORTNAME_OFFSET))(this, a1);
		}

		::System::String* get_FullEditorPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_GET_FULLEDITORPATH_OFFSET))(this);
		}

		::System::Void AddAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ADDASSETLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void RemoveAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEASSETLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void RemoveHandle(::System::Boolean a1, ::RPG::Client::OnAssetOperationDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEHANDLE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAssetLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_CLEARASSETLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchAssetLoadedEvent(::Class_0_16E4307DCC419505_80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHASSETLOADEDEVENT_OFFSET))(this, a1);
		}

		::System::Void AddOnlySelfAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ADDONLYSELFASSETLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void RemoveOnlySelfAssetLoadedHandle(::RPG::Client::OnAssetOperationDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_REMOVEONLYSELFASSETLOADEDHANDLE_OFFSET))(this, a1);
		}

		::System::Void ClearOnlySelfAssetLoadedHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_CLEARONLYSELFASSETLOADEDHANDLE_OFFSET))(this);
		}

		::System::Void DispatchOnlySelfAssetLoadedEvent(::Class_0_16E4307DCC419505_80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_DISPATCHONLYSELFASSETLOADEDEVENT_OFFSET))(this, a1);
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

		::System::Void AddRef(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSETOPERATIONMODEL_ADDREF_OFFSET))(this, a1);
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
