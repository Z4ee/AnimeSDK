#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Friends { class QueryFriendsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x44A50)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x44A40)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x448B0)
#define EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x44970)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int QueryFriendsOptionsInternal_TypeDefinitionIndex = 42928;

	struct alignas(8) QueryFriendsOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Friends::QueryFriendsOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_QUERYFRIENDSOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
