#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONS_GET_PLATFORMSPECIFICDATA_OFFSET UNITYSDK_OFFSET(0x1C4CC4E0)
#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONS_SET_PLATFORMSPECIFICDATA_OFFSET UNITYSDK_OFFSET(0x1C4CC4F0)
#define EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CC500)

namespace Epic::OnlineServices::UI
{
	inline static constexpr unsigned int PrePresentOptions_TypeDefinitionIndex = 34929;

	class PrePresentOptions : public ::System::Object
	{
	public:
		::System::IntPtr _PlatformSpecificData_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONS__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_PlatformSpecificData()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONS_GET_PLATFORMSPECIFICDATA_OFFSET))(this);
		}

		::System::Void set_PlatformSpecificData(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_UI_PREPRESENTOPTIONS_SET_PLATFORMSPECIFICDATA_OFFSET))(this, value);
		}
	};
}
