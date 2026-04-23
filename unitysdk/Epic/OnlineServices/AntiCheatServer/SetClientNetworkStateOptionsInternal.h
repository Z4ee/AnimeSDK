#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class SetClientNetworkStateOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xED00)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xECF0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x8D10)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_ISNETWORKACTIVE_OFFSET UNITYSDK_OFFSET(0xEB80)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xEC30)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int SetClientNetworkStateOptionsInternal_TypeDefinitionIndex = 42451;

	struct alignas(8) SetClientNetworkStateOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::System::Int32 m_IsNetworkActive; // 0x20

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::Void set_IsNetworkActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_ISNETWORKACTIVE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::SetClientNetworkStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_SETCLIENTNETWORKSTATEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
