#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAuthStatus.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/OnClientAuthStatusChangedCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF5F880)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x1DF5F860)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF5F820)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF5F840)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF5FBB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x1DF5F870)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF5F830)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF5F850)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF5F890)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5FCD0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnClientAuthStatusChangedCallbackInfo_TypeDefinitionIndex = 46344;

	class OnClientAuthStatusChangedCallbackInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus _ClientAuthStatus_k__BackingField; // 0x18
		::System::IntPtr _ClientHandle_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus get_ClientAuthStatus()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GET_CLIENTAUTHSTATUS_OFFSET))(this);
		}

		::System::Void set_ClientAuthStatus(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAuthStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_CLIENTAUTHSTATUS_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientAuthStatusChangedCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTAUTHSTATUSCHANGEDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
