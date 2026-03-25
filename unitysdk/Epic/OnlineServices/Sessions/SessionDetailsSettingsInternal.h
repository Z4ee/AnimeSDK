#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsSettings; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16610)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x162D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x16170)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x16430)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x68F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x5E00)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x165A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x16380)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x16220)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x164E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x26F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x16590)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xBC50)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsSettingsInternal_TypeDefinitionIndex = 35512;

	struct alignas(8) SessionDetailsSettingsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_BucketId; // 0x18
		::System::UInt32 m_NumPublicConnections; // 0x20
		::System::Int32 m_AllowJoinInProgress; // 0x24
		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel m_PermissionLevel; // 0x28
		::System::Int32 m_InvitesAllowed; // 0x2C

		::System::String* get_BucketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_BUCKETID_OFFSET))(this);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::UInt32 get_NumPublicConnections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_NUMPUBLICCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_NumPublicConnections(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_NUMPUBLICCONNECTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_AllowJoinInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_ALLOWJOININPROGRESS_OFFSET))(this);
		}

		::System::Void set_AllowJoinInProgress(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_ALLOWJOININPROGRESS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_InvitesAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_INVITESALLOWED_OFFSET))(this);
		}

		::System::Void set_InvitesAllowed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_INVITESALLOWED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsSettings* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsSettings*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
