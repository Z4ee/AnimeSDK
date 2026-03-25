#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAuthStatus.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/OnClientAuthStatusChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x838C600)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x838C5E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x838C5A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x838C5C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x838C930)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x838C5F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x838C5B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x838C5D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x838C610)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x838CA40)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnClientAuthStatusChangedCallbackInfo_TypeDefinitionIndex = 36672;

	class OnClientAuthStatusChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::System::IntPtr _ClientHandle_k__BackingField; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus _ClientAuthStatus_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus get_ClientAuthStatus()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTAUTHSTATUS_OFFSET))(this);
		}

		::System::Void set_ClientAuthStatus(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTAUTHSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
