#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E85990)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int AddNotifyFriendsUpdateOptions_TypeDefinitionIndex = 42100;

	class AddNotifyFriendsUpdateOptions : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ADDNOTIFYFRIENDSUPDATEOPTIONS__CTOR_OFFSET))(this);
		}
	};
}
