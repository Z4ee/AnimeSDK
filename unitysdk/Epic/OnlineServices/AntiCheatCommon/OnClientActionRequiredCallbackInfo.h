#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientAction.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientActionReason.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/OnClientActionRequiredCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF5F150)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_ACTIONREASONCODE_OFFSET UNITYSDK_OFFSET(0x1DF5F110)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_ACTIONREASONDETAILSSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5F130)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_CLIENTACTION_OFFSET UNITYSDK_OFFSET(0x1DF5F0F0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF5F0B0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF5F0D0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF5F6A0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_ACTIONREASONCODE_OFFSET UNITYSDK_OFFSET(0x1DF5F120)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_ACTIONREASONDETAILSSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5F140)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_CLIENTACTION_OFFSET UNITYSDK_OFFSET(0x1DF5F100)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF5F0C0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x1DF5F0E0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF5F160)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5F7D0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnClientActionRequiredCallbackInfo_TypeDefinitionIndex = 46342;

	class OnClientActionRequiredCallbackInfo : public ::System::Object
	{
	public:
		::System::String* _ActionReasonDetailsString_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction _ClientAction_k__BackingField; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason _ActionReasonCode_k__BackingField; // 0x24
		::System::IntPtr _ClientHandle_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction get_ClientAction()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_CLIENTACTION_OFFSET))(this);
		}

		::System::Void set_ClientAction(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientAction))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_CLIENTACTION_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason get_ActionReasonCode()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_ACTIONREASONCODE_OFFSET))(this);
		}

		::System::Void set_ActionReasonCode(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientActionReason))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_ACTIONREASONCODE_OFFSET))(this, a1);
		}

		::System::String* get_ActionReasonDetailsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GET_ACTIONREASONDETAILSSTRING_OFFSET))(this);
		}

		::System::Void set_ActionReasonDetailsString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_ACTIONREASONDETAILSSTRING_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnClientActionRequiredCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONCLIENTACTIONREQUIREDCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
