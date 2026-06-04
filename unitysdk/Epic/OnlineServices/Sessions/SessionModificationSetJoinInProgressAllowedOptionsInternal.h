#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetJoinInProgressAllowedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x17DF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_SET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x17C90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x17D40)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetJoinInProgressAllowedOptionsInternal_TypeDefinitionIndex = 42158;

	struct alignas(4) SessionModificationSetJoinInProgressAllowedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::Int32 m_AllowJoinInProgress; // 0x14

		::System::Void set_AllowJoinInProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_SET_ALLOWJOININPROGRESS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetJoinInProgressAllowedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETJOININPROGRESSALLOWEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
