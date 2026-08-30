#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::RTC { class SetSettingOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C17BE0)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C17B60)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C17B50)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGNAME_OFFSET UNITYSDK_OFFSET(0x3C179F0)
#define EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGVALUE_OFFSET UNITYSDK_OFFSET(0x3C17AA0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int SetSettingOptionsInternal_TypeDefinitionIndex = 45402;

	struct alignas(8) SetSettingOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_SettingName; // 0x18
		::System::IntPtr m_SettingValue; // 0x20

		::System::Void set_SettingName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGNAME_OFFSET))(this, a1);
		}

		::System::Void set_SettingValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_SETTINGVALUE_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::SetSettingOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::SetSettingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_SETSETTINGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
