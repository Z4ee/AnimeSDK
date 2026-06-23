#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Connect/AuthExpirationCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1B7ABA00)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B7AB9C0)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7AB9E0)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1B7ABB70)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1B7AB9D0)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1B7AB9F0)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1B7ABA10)
#define EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7ABD70)

namespace Epic::OnlineServices::Connect
{
	inline static constexpr unsigned int AuthExpirationCallbackInfo_TypeDefinitionIndex = 36041;

	class AuthExpirationCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Connect::AuthExpirationCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CONNECT_AUTHEXPIRATIONCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
