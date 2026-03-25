#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class AddNotifyDisplaySettingsUpdatedOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x1FD80)
#define EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x1900)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int AddNotifyDisplaySettingsUpdatedOptionsInternal_TypeDefinitionIndex = 35302;

	struct alignas(4) AddNotifyDisplaySettingsUpdatedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::AddNotifyDisplaySettingsUpdatedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_ADDNOTIFYDISPLAYSETTINGSUPDATEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
