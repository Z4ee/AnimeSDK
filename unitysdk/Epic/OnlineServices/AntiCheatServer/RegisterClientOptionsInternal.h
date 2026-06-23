#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientPlatform.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientType.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class RegisterClientOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9726D0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x972660)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x9724F0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x32EC60)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x48E3B0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0x9725A0)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x972650)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int RegisterClientOptionsInternal_TypeDefinitionIndex = 36231;

	struct alignas(8) RegisterClientOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_ClientHandle; // 0x18
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType m_ClientType; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform m_ClientPlatform; // 0x24
		::System::IntPtr m_AccountId; // 0x28
		::System::IntPtr m_IpAddress; // 0x30

		::System::Void set_ClientHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTHANDLE_OFFSET))(this, value);
		}

		::System::Void set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTTYPE_OFFSET))(this, value);
		}

		::System::Void set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_CLIENTPLATFORM_OFFSET))(this, value);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::Void set_IpAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_IPADDRESS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_REGISTERCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
