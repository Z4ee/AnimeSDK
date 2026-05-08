#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientPlatform.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class RegisterPeerOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x86F9A0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x86F930)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x86F7C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x34DBE0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_CLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x577FD0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0x86F870)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x86F920)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x381830)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int RegisterPeerOptionsInternal_TypeDefinitionIndex = 34771;

	struct alignas(8) RegisterPeerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PeerHandle; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType m_ClientType; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform m_ClientPlatform; // 0x24
		::System::IntPtr m_AccountId; // 0x28
		::System::IntPtr m_IpAddress; // 0x30

		::System::Void set_PeerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_PEERHANDLE_OFFSET))(this, value);
		}

		::System::Void set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_CLIENTTYPE_OFFSET))(this, value);
		}

		::System::Void set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_CLIENTPLATFORM_OFFSET))(this, value);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::Void set_IpAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_IPADDRESS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
