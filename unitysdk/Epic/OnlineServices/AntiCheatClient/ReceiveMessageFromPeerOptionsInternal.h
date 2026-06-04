#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class ReceiveMessageFromPeerOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96D0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0x95C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9630)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x95B0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int ReceiveMessageFromPeerOptionsInternal_TypeDefinitionIndex = 43351;

	struct alignas(8) ReceiveMessageFromPeerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PeerHandle; // 0x18
		::System::UInt32 m_DataLengthBytes; // 0x20
		::System::IntPtr m_Data; // 0x28

		::System::Void set_PeerHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_PEERHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_DATA_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::ReceiveMessageFromPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_RECEIVEMESSAGEFROMPEEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
