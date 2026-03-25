#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class AddNotifyMessageToClientOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xDB30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyMessageToClientOptionsInternal_TypeDefinitionIndex = 36604;

	struct alignas(4) AddNotifyMessageToClientOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyMessageToClientOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYMESSAGETOCLIENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
