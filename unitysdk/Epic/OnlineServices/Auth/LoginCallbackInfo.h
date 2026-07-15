#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LoginCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Auth { class AccountFeatureRestrictedInfo; }
namespace Epic::OnlineServices::Auth { class PinGrantInfo; }

#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BBBB9C0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_ACCOUNTFEATURERESTRICTEDINFO_OFFSET UNITYSDK_OFFSET(0x1BBBB980)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BBBB900)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x1BBBB960)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BBBB920)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_PINGRANTINFO_OFFSET UNITYSDK_OFFSET(0x1BBBB940)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BBBB8E0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_SELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1BBBB9A0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1BBBC300)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_ACCOUNTFEATURERESTRICTEDINFO_OFFSET UNITYSDK_OFFSET(0x1BBBB990)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1BBBB910)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x1BBBB970)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1BBBB930)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1BBBB9E0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_PINGRANTINFO_OFFSET UNITYSDK_OFFSET(0x1BBBB950)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1BBBB8F0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_SELECTEDACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1BBBB9B0)
#define EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBC440)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LoginCallbackInfo_TypeDefinitionIndex = 44040;

	class LoginCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Auth::PinGrantInfo* _PinGrantInfo_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo* _AccountFeatureRestrictedInfo_k__BackingField; // 0x20
		::System::Object* _ClientData_k__BackingField; // 0x28
		::Epic::OnlineServices::ContinuanceToken* _ContinuanceToken_k__BackingField; // 0x30
		::Epic::OnlineServices::EpicAccountId* _SelectedAccountId_k__BackingField; // 0x38
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::PinGrantInfo* get_PinGrantInfo()
		{
			return ((::Epic::OnlineServices::Auth::PinGrantInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_PINGRANTINFO_OFFSET))(this);
		}

		::System::Void set_PinGrantInfo(::Epic::OnlineServices::Auth::PinGrantInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::PinGrantInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_PINGRANTINFO_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_CONTINUANCETOKEN_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo* get_AccountFeatureRestrictedInfo()
		{
			return ((::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_ACCOUNTFEATURERESTRICTEDINFO_OFFSET))(this);
		}

		::System::Void set_AccountFeatureRestrictedInfo(::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::AccountFeatureRestrictedInfo*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_ACCOUNTFEATURERESTRICTEDINFO_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_SelectedAccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GET_SELECTEDACCOUNTID_OFFSET))(this);
		}

		::System::Void set_SelectedAccountId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_SELECTEDACCOUNTID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::LoginCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::LoginCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGINCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
