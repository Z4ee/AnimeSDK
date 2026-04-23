#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class UnprotectMessageOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95A0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9590)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x94A0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9510)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_OUTBUFFERSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x26F0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int UnprotectMessageOptionsInternal_TypeDefinitionIndex = 42554;

	struct alignas(8) UnprotectMessageOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DataLengthBytes; // 0x14
		::System::IntPtr m_Data; // 0x18
		::System::UInt32 m_OutBufferSizeBytes; // 0x20

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::System::Void set_OutBufferSizeBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_OUTBUFFERSIZEBYTES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::UnprotectMessageOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_UNPROTECTMESSAGEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
