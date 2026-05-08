#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::UI { class ReportKeyEventOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88F2A0)
#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x88F230)
#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x819440)
#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_SET_PLATFORMSPECIFICINPUTDATA_OFFSET UNITYSDK_OFFSET(0x381830)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int ReportKeyEventOptionsInternal_TypeDefinitionIndex = 33369;

	struct alignas(8) ReportKeyEventOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_PlatformSpecificInputData; // 0x18

		::System::Void set_PlatformSpecificInputData(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_SET_PLATFORMSPECIFICINPUTDATA_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::UI::ReportKeyEventOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::UI::ReportKeyEventOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
