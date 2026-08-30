#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class CreateSessionModificationOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C247D0)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C24750)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0x3C24470)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C24520)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_MAXPLAYERS_OFFSET UNITYSDK_OFFSET(0x3AA1870)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C24740)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0x3C245E0)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x3C24690)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0x3C243C0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CreateSessionModificationOptionsInternal_TypeDefinitionIndex = 45100;

	struct alignas(8) CreateSessionModificationOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18
		::System::IntPtr m_BucketId; // 0x20
		::System::UInt32 m_MaxPlayers; // 0x28
		::System::IntPtr m_LocalUserId; // 0x30
		::System::Int32 m_PresenceEnabled; // 0x38
		::System::IntPtr m_SessionId; // 0x40

		::System::Void set_SessionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, a1);
		}

		::System::Void set_BucketId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_BUCKETID_OFFSET))(this, a1);
		}

		::System::Void set_MaxPlayers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_MAXPLAYERS_OFFSET))(this, a1);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_PresenceEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET))(this, a1);
		}

		::System::Void set_SessionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionModificationOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
