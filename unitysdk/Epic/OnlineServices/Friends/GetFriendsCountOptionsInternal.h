#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Friends { class GetFriendsCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x40170)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x40160)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3FFD0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x40090)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int GetFriendsCountOptionsInternal_TypeDefinitionIndex = 42107;

	struct alignas(8) GetFriendsCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Friends::GetFriendsCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::GetFriendsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
