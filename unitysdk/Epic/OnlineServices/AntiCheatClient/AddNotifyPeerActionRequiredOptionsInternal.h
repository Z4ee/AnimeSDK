#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyPeerActionRequiredOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10F00)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3BEF190)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3BCBDF0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyPeerActionRequiredOptionsInternal_TypeDefinitionIndex = 46367;

	struct alignas(4) AddNotifyPeerActionRequiredOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYPEERACTIONREQUIREDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
