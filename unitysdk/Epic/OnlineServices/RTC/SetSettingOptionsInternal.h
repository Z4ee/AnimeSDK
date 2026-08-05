#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTC { class SetSettingOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A1F0)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x99A180)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x99A170)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x99A010)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0x99A0C0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int SetSettingOptionsInternal_TypeDefinitionIndex = 35997;

	struct alignas(8) SetSettingOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SettingName; // 0x18
		::System::IntPtr m_SettingValue; // 0x20

		::System::Void set_SettingName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGNAME_OFFSET))(this, value);
		}

		::System::Void set_SettingValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGVALUE_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::SetSettingOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::SetSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
