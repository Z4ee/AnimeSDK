#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/UI/NotificationLocation.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONS_GET_NOTIFICATIONLOCATION_OFFSET UNITYSDK_OFFSET(0x1CE7B6C0)
#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONS_SET_NOTIFICATIONLOCATION_OFFSET UNITYSDK_OFFSET(0x1CE7B6D0)
#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7B6E0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int SetDisplayPreferenceOptions_TypeDefinitionIndex = 34933;

	class SetDisplayPreferenceOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::UI::NotificationLocation _NotificationLocation_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::UI::NotificationLocation get_NotificationLocation()
		{
			return ((::Epic::OnlineServices::UI::NotificationLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONS_GET_NOTIFICATIONLOCATION_OFFSET))(this);
		}

		::System::Void set_NotificationLocation(::Epic::OnlineServices::UI::NotificationLocation value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::NotificationLocation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONS_SET_NOTIFICATIONLOCATION_OFFSET))(this, value);
		}
	};
}
