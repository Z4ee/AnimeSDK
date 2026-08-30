#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Sessions/OnlineSessionPermissionLevel.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Sessions { class SessionDetailsSettings; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x168D0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x16770)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x16A30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x6E30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0x6330)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x16BA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_ALLOWJOININPROGRESS_OFFSET UNITYSDK_OFFSET(0x16980)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x16820)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_INVITESALLOWED_OFFSET UNITYSDK_OFFSET(0x16AE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_NUMPUBLICCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x2AA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x16B90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_PERMISSIONLEVEL_OFFSET UNITYSDK_OFFSET(0xC4A0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionDetailsSettingsInternal_TypeDefinitionIndex = 45184;

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

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::UInt32 get_NumPublicConnections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_NUMPUBLICCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_NumPublicConnections(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_NUMPUBLICCONNECTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_AllowJoinInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_ALLOWJOININPROGRESS_OFFSET))(this);
		}

		::System::Void set_AllowJoinInProgress(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_ALLOWJOININPROGRESS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel get_PermissionLevel()
		{
			return ((::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_PERMISSIONLEVEL_OFFSET))(this);
		}

		::System::Void set_PermissionLevel(::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::OnlineSessionPermissionLevel))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_PERMISSIONLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_InvitesAllowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_GET_INVITESALLOWED_OFFSET))(this);
		}

		::System::Void set_InvitesAllowed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_INVITESALLOWED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::SessionDetailsSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SessionDetailsSettings*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONDETAILSSETTINGSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
