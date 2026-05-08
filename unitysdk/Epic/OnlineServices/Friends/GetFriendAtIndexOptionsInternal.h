#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Friends { class GetFriendAtIndexOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93CBD0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x93CBC0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x577FD0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x93CA20)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x93CAE0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int GetFriendAtIndexOptionsInternal_TypeDefinitionIndex = 34324;

	struct alignas(8) GetFriendAtIndexOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::Int32 m_Index; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_INDEX_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::GetFriendAtIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDATINDEXOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
