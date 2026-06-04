#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/OnMessageToClientCallbackInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA0CD670)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0CD610)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0CD630)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xA0CD650)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA0CDA90)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA0CD620)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0xA0CD640)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_MESSAGEDATA_OFFSET UNITYSDK_OFFSET(0xA0CD660)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_OFFSET UNITYSDK_OFFSET(0xA0CD680)
#define EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CDBC0)

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int OnMessageToClientCallbackInfo_TypeDefinitionIndex = 43303;

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

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_MessageData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GET_MESSAGEDATA_OFFSET))(this);
		}

		::System::Void set_MessageData(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_MESSAGEDATA_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::OnMessageToClientCallbackInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCOMMON_ONMESSAGETOCLIENTCALLBACKINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
