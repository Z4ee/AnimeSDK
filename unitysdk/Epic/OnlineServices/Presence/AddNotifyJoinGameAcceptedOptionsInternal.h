#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Presence { class AddNotifyJoinGameAcceptedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x610A0)
#define EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1980)

namespace Epic::OnlineServices::Presence
{
	inline static constexpr unsigned int AddNotifyJoinGameAcceptedOptionsInternal_TypeDefinitionIndex = 41577;

	struct alignas(4) AddNotifyJoinGameAcceptedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Presence::AddNotifyJoinGameAcceptedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PRESENCE_ADDNOTIFYJOINGAMEACCEPTEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
