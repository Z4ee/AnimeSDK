#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyMessageToServerOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x85C0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1EB0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyMessageToServerOptionsInternal_TypeDefinitionIndex = 43322;

	struct alignas(4) AddNotifyMessageToServerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToServerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOSERVEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
