#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Friends { class QueryFriendsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x40740)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x40730)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x405A0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x40660)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int QueryFriendsOptionsInternal_TypeDefinitionIndex = 42125;

	struct alignas(8) QueryFriendsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Friends::QueryFriendsOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
