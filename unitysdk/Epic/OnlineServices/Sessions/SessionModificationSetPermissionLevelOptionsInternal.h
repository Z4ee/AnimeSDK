#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionModificationSetPermissionLevelOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x17D70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1D60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetPermissionLevelOptionsInternal_TypeDefinitionIndex = 41359;

	struct alignas(4) SessionModificationSetPermissionLevelOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel m_PermissionLevel; // 0x14

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionModificationSetPermissionLevelOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
