#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionDetailsSettingsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A810C10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1A810BD0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1A810C50)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A810BF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A810C30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_1_OFFSET UNITYSDK_OFFSET(0x1A811070)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x1A810C20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x1A810BE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x1A810C60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A810C00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_OFFSET UNITYSDK_OFFSET(0x1A810C70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1A810C40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8111B0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsSettings_TypeDefinitionIndex = 33556;

	class SessionDetailsSettings : public ::System::Object
	{
	public:
		::System::String* _BucketId_k__BackingField; // 0x10
		::System::Boolean _InvitesAllowed_k__BackingField; // 0x18
		::System::Boolean _AllowJoinInProgress_k__BackingField; // 0x19
		::System::UInt32 _NumPublicConnections_k__BackingField; // 0x1C
		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel _PermissionLevel_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::UInt32 get_NumPublicConnections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_NUMPUBLICCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_NumPublicConnections(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_NUMPUBLICCONNECTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowJoinInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_ALLOWJOININPROGRESS_OFFSET))(this);
		}

		::System::Void set_AllowJoinInProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_ALLOWJOININPROGRESS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_InvitesAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_INVITESALLOWED_OFFSET))(this);
		}

		::System::Void set_InvitesAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_INVITESALLOWED_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_1_OFFSET))(this, other);
		}
	};
}
