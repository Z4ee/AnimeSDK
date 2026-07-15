#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Friends { class AddNotifyFriendsUpdateOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x667A60)
#define EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3A48860)
#define EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3A39250)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int AddNotifyFriendsUpdateOptionsInternal_TypeDefinitionIndex = 43765;

	struct alignas(4) AddNotifyFriendsUpdateOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
