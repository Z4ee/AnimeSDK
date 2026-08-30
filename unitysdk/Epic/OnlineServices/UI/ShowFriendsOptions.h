#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB16A1D0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xB16A1E0)
#define EPIC_ONLINESERVICES_UI_SHOWFRIENDSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xB16A1F0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int ShowFriendsOptions_TypeDefinitionIndex = 45003;

	class ShowFriendsOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SHOWFRIENDSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}
	};
}
