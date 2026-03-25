#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86DC800)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86DC820)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x86DC810)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x86DC830)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x86DC840)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int AddNotifyParticipantStatusChangedOptions_TypeDefinitionIndex = 35694;

	class AddNotifyParticipantStatusChangedOptions : public ::System::Object
	{
	public:
		::System::String* _RoomName_k__BackingField; // 0x10
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}
	};
}
