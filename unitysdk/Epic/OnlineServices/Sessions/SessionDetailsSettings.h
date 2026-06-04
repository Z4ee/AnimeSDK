#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.h"
#include "unitysdk/Epic/OnlineServices/Sessions/SessionDetailsSettingsInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0xA0E6A60)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0xA0E6A20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0xA0E6AA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0xA0E6A40)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA0E6A80)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_1_OFFSET UNITYSDK_OFFSET(0xA0E70D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0xA0E6A70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0xA0E6A30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0xA0E6AB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0xA0E6A50)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_OFFSET UNITYSDK_OFFSET(0xA0E6AC0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xA0E6A90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E7200)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsSettings_TypeDefinitionIndex = 42140;

	class SessionDetailsSettings : public ::System::Object
	{
	public:
		::System::String* _BucketId_k__BackingField; // 0x10
		::System::UInt32 _NumPublicConnections_k__BackingField; // 0x18
		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel _PermissionLevel_k__BackingField; // 0x1C
		::System::Boolean _AllowJoinInProgress_k__BackingField; // 0x20
		::System::Boolean _InvitesAllowed_k__BackingField; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS__CTOR_OFFSET))(this);
		}

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::UInt32 get_NumPublicConnections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_NUMPUBLICCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_NumPublicConnections(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_NUMPUBLICCONNECTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowJoinInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_ALLOWJOININPROGRESS_OFFSET))(this);
		}

		::System::Void set_AllowJoinInProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_ALLOWJOININPROGRESS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_PERMISSIONLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_InvitesAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_GET_INVITESALLOWED_OFFSET))(this);
		}

		::System::Void set_InvitesAllowed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_INVITESALLOWED_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Sessions::SessionDetailsSettingsInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGS_SET_1_OFFSET))(this, a1);
		}
	};
}
