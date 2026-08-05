#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::Sessions { class GetInviteIdByIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA32D70)
#define EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0xA32D60)
#define EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA32BC0)
#define EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0xA32C80)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int GetInviteIdByIndexOptionsInternal_TypeDefinitionIndex = 35711;

	struct alignas(8) GetInviteIdByIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::UInt32 m_Index; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Index(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_GETINVITEIDBYINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
