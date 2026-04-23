#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONS_GET_PLATFORMSPECIFICINPUTDATA_OFFSET UNITYSDK_OFFSET(0x8BF57A0)
#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONS_SET_PLATFORMSPECIFICINPUTDATA_OFFSET UNITYSDK_OFFSET(0x8BF57B0)
#define EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF57C0)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int ReportKeyEventOptions_TypeDefinitionIndex = 41149;

	class ReportKeyEventOptions : public ::System::Object
	{
	public:
		::System::IntPtr _PlatformSpecificInputData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PlatformSpecificInputData()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONS_GET_PLATFORMSPECIFICINPUTDATA_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificInputData(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_REPORTKEYEVENTOPTIONS_SET_PLATFORMSPECIFICINPUTDATA_OFFSET))(this, value);
		}
	};
}
