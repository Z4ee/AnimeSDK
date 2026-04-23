#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/OnMessageToClientCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x8BB4AF0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BB4A90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x8BB4AB0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x8BB4AD0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x8BB4F10)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x8BB4AA0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x8BB4AC0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x8BB4AE0)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0x8BB4B00)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB5040)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnMessageToClientCallbackInfo_TypeDefinitionIndex = 42500;

	class OnMessageToClientCallbackInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _MessageData_k__BackingField; // 0x10
		::System::Object* _ClientData_k__BackingField; // 0x18
		::System::IntPtr _ClientHandle_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_MessageData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_MESSAGEDATA_OFFSET))(this);
		}

		::System::Void set_MessageData(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_MESSAGEDATA_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_1_OFFSET))(this, other);
		}
	};
}
