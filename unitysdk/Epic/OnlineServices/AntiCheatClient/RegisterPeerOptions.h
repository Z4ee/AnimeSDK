#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientPlatform.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatCommon/AntiCheatCommonClientType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1CC2DFD0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CC2DFB0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_CLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2DF90)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0x1CC2DFF0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC2DF70)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x1CC2DFE0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_CLIENTPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CC2DFC0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_CLIENTTYPE_OFFSET UNITYSDK_OFFSET(0x1CC2DFA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_IPADDRESS_OFFSET UNITYSDK_OFFSET(0x1CC2E000)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_PEERHANDLE_OFFSET UNITYSDK_OFFSET(0x1CC2DF80)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC2E010)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int RegisterPeerOptions_TypeDefinitionIndex = 36992;

	class RegisterPeerOptions : public ::System::Object
	{
	public:
		::System::String* _IpAddress_k__BackingField; // 0x10
		::System::String* _AccountId_k__BackingField; // 0x18
		::System::IntPtr _PeerHandle_k__BackingField; // 0x20
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType _ClientType_k__BackingField; // 0x28
		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform _ClientPlatform_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PeerHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_PEERHANDLE_OFFSET))(this);
		}

		::System::Void set_PeerHandle(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_PEERHANDLE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType get_ClientType()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_CLIENTTYPE_OFFSET))(this);
		}

		::System::Void set_ClientType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_CLIENTTYPE_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform get_ClientPlatform()
		{
			return ((::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_CLIENTPLATFORM_OFFSET))(this);
		}

		::System::Void set_ClientPlatform(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_CLIENTPLATFORM_OFFSET))(this, value);
		}

		::System::String* get_AccountId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_ACCOUNTID_OFFSET))(this);
		}

		::System::Void set_AccountId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_ACCOUNTID_OFFSET))(this, value);
		}

		::System::String* get_IpAddress()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_GET_IPADDRESS_OFFSET))(this);
		}

		::System::Void set_IpAddress(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_REGISTERPEEROPTIONS_SET_IPADDRESS_OFFSET))(this, value);
		}
	};
}
