#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatClient { class AddNotifyMessageToPeerOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA2EAA0)
#define EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::AntiCheatClient
{
	inline static constexpr unsigned int AddNotifyMessageToPeerOptionsInternal_TypeDefinitionIndex = 36958;

	struct alignas(4) AddNotifyMessageToPeerOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatClient::AddNotifyMessageToPeerOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATCLIENT_ADDNOTIFYMESSAGETOPEEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
