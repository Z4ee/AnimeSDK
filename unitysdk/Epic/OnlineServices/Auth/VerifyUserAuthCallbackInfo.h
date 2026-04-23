#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/VerifyUserAuthCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E2AD90)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8E2AD70)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E2AD50)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8E2B030)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8E2AD80)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8E2ADB0)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x8E2AD60)
#define EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8E2B140)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int VerifyUserAuthCallbackInfo_TypeDefinitionIndex = 42415;

	class VerifyUserAuthCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, value);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::VerifyUserAuthCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_VERIFYUSERAUTHCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
