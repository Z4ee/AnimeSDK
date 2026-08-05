#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D82B5D0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D82B5E0)
#define EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D82B5F0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int GetFriendsCountOptions_TypeDefinitionIndex = 36547;

	class GetFriendsCountOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_GETFRIENDSCOUNTOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
