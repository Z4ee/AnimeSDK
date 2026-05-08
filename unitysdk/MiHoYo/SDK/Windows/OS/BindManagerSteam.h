#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/Windows/OS/BindManager.h"

namespace System { class String; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGERSTEAM_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x19C93C80)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGERSTEAM_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x19C94130)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGERSTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19C93C30)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManagerSteam_TypeDefinitionIndex = 19224;

	class BindManagerSteam : public ::MiHoYo::SDK::Windows::OS::BindManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGERSTEAM__CTOR_OFFSET))(this);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGERSTEAM_GETBINDINGWEBURL_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGERSTEAM_GETREPORTTYPE_OFFSET))(this);
		}
	};
}
