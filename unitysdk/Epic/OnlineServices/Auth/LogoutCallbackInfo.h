#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Auth/LogoutCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xB321A40)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB321A00)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB321A20)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3219E0)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xB321E40)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xB321A10)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB321A30)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xB321A60)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_RESULTCODE_OFFSET UNITYSDK_OFFSET(0xB3219F0)
#define EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB321F60)

namespace Epic::OnlineServices::Auth
{
	inline static constexpr unsigned int LogoutCallbackInfo_TypeDefinitionIndex = 46229;

	class LogoutCallbackInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::Result _ResultCode_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Result get_ResultCode()
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GET_RESULTCODE_OFFSET))(this);
		}

		::System::Void set_ResultCode(::Epic::OnlineServices::Result a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Result))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_RESULTCODE_OFFSET))(this, a1);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Auth::LogoutCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_AUTH_LOGOUTCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
