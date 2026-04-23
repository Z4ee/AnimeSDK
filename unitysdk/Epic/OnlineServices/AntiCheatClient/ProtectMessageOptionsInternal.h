#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class ProtectMessageOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C60)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8C50)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x8B60)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8BD0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x26F0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int ProtectMessageOptionsInternal_TypeDefinitionIndex = 42546;

	struct alignas(8) ProtectMessageOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DataLengthBytes; // 0x14
		::System::IntPtr m_Data; // 0x18
		::System::UInt32 m_OutBufferSizeBytes; // 0x20

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::System::Void set_OutBufferSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_OUTBUFFERSIZEBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ProtectMessageOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_PROTECTMESSAGEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
