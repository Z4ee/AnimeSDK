#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class AddNotifySessionInviteReceivedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x96D1C0)
#define EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8B18C0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int AddNotifySessionInviteReceivedOptionsInternal_TypeDefinitionIndex = 35022;

	struct alignas(4) AddNotifySessionInviteReceivedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_ADDNOTIFYSESSIONINVITERECEIVEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
