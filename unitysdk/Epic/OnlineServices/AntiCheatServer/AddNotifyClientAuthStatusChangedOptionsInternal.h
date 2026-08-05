#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::AntiCheatServer { class AddNotifyClientAuthStatusChangedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA29E10)
#define EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9029E0)

namespace Epic::OnlineServices::AntiCheatServer
{
	inline static constexpr unsigned int AddNotifyClientAuthStatusChangedOptionsInternal_TypeDefinitionIndex = 36869;

	struct alignas(4) AddNotifyClientAuthStatusChangedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::AntiCheatServer::AddNotifyClientAuthStatusChangedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ANTICHEATSERVER_ADDNOTIFYCLIENTAUTHSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
