#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class ProtectMessageOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B41D0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9B41C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x462A80)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x9B40C0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9B4130)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x86B770)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int ProtectMessageOptionsInternal_TypeDefinitionIndex = 36886;

	struct alignas(8) ProtectMessageOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::UInt32 m_DataLengthBytes; // 0x20
		::System::IntPtr m_Data; // 0x28
		::System::UInt32 m_OutBufferSizeBytes; // 0x30

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::System::Void set_OutBufferSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_OUTBUFFERSIZEBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::ProtectMessageOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_PROTECTMESSAGEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
