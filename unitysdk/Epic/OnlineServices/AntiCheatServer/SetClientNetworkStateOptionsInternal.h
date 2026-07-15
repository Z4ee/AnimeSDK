#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class SetClientNetworkStateOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AA7BD0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3AA7BC0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_ISNETWORKACTIVE_OFFSET UNITYSDK_OFFSET(0x3AA7A50)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3AA7B00)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int SetClientNetworkStateOptionsInternal_TypeDefinitionIndex = 44115;

	struct alignas(8) SetClientNetworkStateOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::Int32 m_IsNetworkActive; // 0x20

		::System::Void set_ClientHandle(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, a1);
		}

		::System::Void set_IsNetworkActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_ISNETWORKACTIVE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
