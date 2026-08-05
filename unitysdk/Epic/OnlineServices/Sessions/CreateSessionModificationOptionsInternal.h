#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class CreateSessionModificationOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA28090)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA28020)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_BUCKETID_OFFSET UNITYSDK_OFFSET(0xA27D40)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA27DF0)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_MAXPLAYERS_OFFSET UNITYSDK_OFFSET(0x36CDA0)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA28010)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET UNITYSDK_OFFSET(0xA27EB0)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONID_OFFSET UNITYSDK_OFFSET(0xA27F60)
#define EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET UNITYSDK_OFFSET(0xA27C90)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int CreateSessionModificationOptionsInternal_TypeDefinitionIndex = 35695;

	struct alignas(8) CreateSessionModificationOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SessionName; // 0x18
		::System::IntPtr m_BucketId; // 0x20
		::System::UInt32 m_MaxPlayers; // 0x28
		::System::IntPtr m_LocalUserId; // 0x30
		::System::Int32 m_PresenceEnabled; // 0x38
		::System::IntPtr m_SessionId; // 0x40

		::System::Void set_SessionName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONNAME_OFFSET))(this, value);
		}

		::System::Void set_BucketId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_BUCKETID_OFFSET))(this, value);
		}

		::System::Void set_MaxPlayers(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_MAXPLAYERS_OFFSET))(this, value);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_PresenceEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_PRESENCEENABLED_OFFSET))(this, value);
		}

		::System::Void set_SessionId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_SESSIONID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionModificationOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_CREATESESSIONMODIFICATIONOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
