#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/UI/NotificationLocation.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class SetDisplayPreferenceOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8D6290)
#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_SET_NOTIFICATIONLOCATION_OFFSET UNITYSDK_OFFSET(0x5B6810)
#define EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x86F730)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int SetDisplayPreferenceOptionsInternal_TypeDefinitionIndex = 33371;

	struct alignas(4) SetDisplayPreferenceOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Epic::OnlineServices::UI::NotificationLocation m_NotificationLocation; // 0x14

		::System::Void set_NotificationLocation(::Epic::OnlineServices::UI::NotificationLocation value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::NotificationLocation))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_SET_NOTIFICATIONLOCATION_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UI::SetDisplayPreferenceOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::SetDisplayPreferenceOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_SETDISPLAYPREFERENCEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
