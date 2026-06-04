#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class ReceiveMessageFromClientOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEFC0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xEFB0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x95B0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_DATA_OFFSET UNITYSDK_OFFSET(0xEEB0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xEF20)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int ReceiveMessageFromClientOptionsInternal_TypeDefinitionIndex = 43250;

	struct alignas(8) ReceiveMessageFromClientOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::UInt32 m_DataLengthBytes; // 0x20
		::System::IntPtr m_Data; // 0x28

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_Data(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_DATA_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::ReceiveMessageFromClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_RECEIVEMESSAGEFROMCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
