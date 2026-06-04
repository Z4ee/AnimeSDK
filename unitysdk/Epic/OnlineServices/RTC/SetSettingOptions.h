#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_GET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0xA340230)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_GET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0xA340250)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_SET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0xA340240)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_SET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0xA340260)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xA340270)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int SetSettingOptions_TypeDefinitionIndex = 42358;

	class SetSettingOptions : public ::System::Object
	{
	public:
		::System::String* _SettingValue_k__BackingField; // 0x10
		::System::String* _SettingName_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS__CTOR_OFFSET))(this);
		}

		::System::String* get_SettingName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_GET_SETTINGNAME_OFFSET))(this);
		}

		::System::Void set_SettingName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_SET_SETTINGNAME_OFFSET))(this, a1);
		}

		::System::String* get_SettingValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_GET_SETTINGVALUE_OFFSET))(this);
		}

		::System::Void set_SettingValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONS_SET_SETTINGVALUE_OFFSET))(this, a1);
		}
	};
}
