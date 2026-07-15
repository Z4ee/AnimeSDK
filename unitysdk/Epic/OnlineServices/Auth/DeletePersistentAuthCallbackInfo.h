#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/DeletePersistentAuthCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C221130)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C221110)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C2210F0)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1C2213D0)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1C221120)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1C221150)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0x1C221100)
#define EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2214F0)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int DeletePersistentAuthCallbackInfo_TypeDefinitionIndex = 44029;

	class DeletePersistentAuthCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::DeletePersistentAuthCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_DELETEPERSISTENTAUTHCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
