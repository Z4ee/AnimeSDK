#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/QueryIdTokenCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x85FE190)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x85FE130)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x85FE150)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x85FE110)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x85FE170)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x85FE6E0)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x85FE140)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x85FE160)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x85FE1B0)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x85FE120)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0x85FE180)
#define EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x85FE810)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int QueryIdTokenCallbackInfo_TypeDefinitionIndex = 36579;

	class QueryIdTokenCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetAccountId_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetAccountId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GET_TARGETACCOUNTID_OFFSET))(this);
		}

		::System::Void set_TargetAccountId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_TARGETACCOUNTID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_QUERYIDTOKENCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
