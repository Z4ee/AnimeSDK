#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x18CD0030)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_DATA_OFFSET UNITYSDK_OFFSET(0x18CD0050)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_GET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CD0070)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x18CD0040)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_DATA_OFFSET UNITYSDK_OFFSET(0x18CD0060)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS_SET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x18CD0080)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD0090)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int ProtectMessageOptions_TypeDefinitionIndex = 34663;

	class ProtectMessageOptions : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* _Data_k__BackingField; // 0x10
		::System::IntPtr _ClientHandle_k__BackingField; // 0x18
		::System::UInt32 _OutBufferSizeBytes_k__BackingField; // 0x20

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
