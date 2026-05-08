#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class UnregisterClientOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9313E0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x931370)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x381830)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x819440)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int UnregisterClientOptionsInternal_TypeDefinitionIndex = 34674;

	struct alignas(8) UnregisterClientOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::UnregisterClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_UNREGISTERCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
