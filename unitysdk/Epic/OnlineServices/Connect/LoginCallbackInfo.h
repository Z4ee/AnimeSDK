#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/LoginCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ContinuanceToken; }
namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CC33460)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CC33400)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x1CC33440)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC33420)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CC333E0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1CC336F0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1CC33410)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CONTINUANCETOKEN_OFFSET UNITYSDK_OFFSET(0x1CC33450)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC33430)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1CC33480)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1CC333F0)
#define EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC33830)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int LoginCallbackInfo_TypeDefinitionIndex = 36741;

	class LoginCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::ContinuanceToken* _ContinuanceToken_k__BackingField; // 0x20
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ContinuanceToken* get_ContinuanceToken()
		{
			return ((::Epic::OnlineServices::ContinuanceToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GET_CONTINUANCETOKEN_OFFSET))(this);
		}

		::System::Void set_ContinuanceToken(::Epic::OnlineServices::ContinuanceToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ContinuanceToken*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_CONTINUANCETOKEN_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::LoginCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_LOGINCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
