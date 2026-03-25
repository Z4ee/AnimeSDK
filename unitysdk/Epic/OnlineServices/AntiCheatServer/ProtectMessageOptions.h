#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x83942A0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_DATA_OFFSET UNITYSDK_OFFSET(0x83942C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x83942E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x83942B0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_DATA_OFFSET UNITYSDK_OFFSET(0x83942D0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x83942F0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8394300)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int ProtectMessageOptions_TypeDefinitionIndex = 36618;

	class ProtectMessageOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x10
		::System::UInt32 _OutBufferSizeBytes_k__BackingField; // 0x18
		::System::IntPtr _ClientHandle_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_ClientHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_CLIENTHANDLE_OFFSET))(this);
		}

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_DATA_OFFSET))(this, value);
		}

		::System::UInt32 get_OutBufferSizeBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_OUTBUFFERSIZEBYTES_OFFSET))(this);
		}

		::System::Void set_OutBufferSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_OUTBUFFERSIZEBYTES_OFFSET))(this, value);
		}
	};
}
