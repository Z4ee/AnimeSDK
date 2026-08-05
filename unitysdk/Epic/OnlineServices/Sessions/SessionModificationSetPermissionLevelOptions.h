#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONS_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D279FA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONS_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1D279FB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D279FC0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionModificationSetPermissionLevelOptions_TypeDefinitionIndex = 35799;

	class SessionModificationSetPermissionLevelOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel _PermissionLevel_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONS_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONMODIFICATIONSETPERMISSIONLEVELOPTIONS_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}
	};
}
