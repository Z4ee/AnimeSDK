#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D3962E0)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1D3962F0)
#define EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D396300)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int GetFriendsVisibleOptions_TypeDefinitionIndex = 35570;

	class GetFriendsVisibleOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_GETFRIENDSVISIBLEOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}
	};
}
