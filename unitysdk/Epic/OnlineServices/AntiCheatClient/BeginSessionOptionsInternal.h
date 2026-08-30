#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AntiCheatClient/AntiCheatClientMode.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::AntiCheatClient { class BeginSessionOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FD0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8FC0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8E20)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_MODE_OFFSET UNITYSDK_OFFSET(0x2AA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8EE0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int BeginSessionOptionsInternal_TypeDefinitionIndex = 46374;

	struct alignas(8) BeginSessionOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode m_Mode; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_Mode(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientMode))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_MODE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::BeginSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_BEGINSESSIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
