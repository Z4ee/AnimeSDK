#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatClient/AntiCheatClientMode.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x837F860)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_GET_MODE_OFFSET UNITYSDK_OFFSET(0x837F880)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x837F870)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_SET_MODE_OFFSET UNITYSDK_OFFSET(0x837F890)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x837F8A0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int BeginSessionOptions_TypeDefinitionIndex = 36701;

	class BeginSessionOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode _Mode_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode get_Mode()
		{
			return ((::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONS_SET_MODE_OFFSET))(this, value);
		}
	};
}
