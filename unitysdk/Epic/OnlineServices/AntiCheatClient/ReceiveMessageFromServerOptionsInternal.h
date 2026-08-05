#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class ReceiveMessageFromServerOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BDD40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9BDD30)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x9BDC40)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9BDCB0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int ReceiveMessageFromServerOptionsInternal_TypeDefinitionIndex = 36991;

	struct alignas(8) ReceiveMessageFromServerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_DataLengthBytes; // 0x14
		::System::IntPtr m_Data; // 0x18

		::System::Void set_Data(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_SET_DATA_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromServerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMSERVEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
