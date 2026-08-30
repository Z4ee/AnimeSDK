#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/Windows/OS/Channel/BindManager.h"

namespace System { class String; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM_CHECKSHOWPREBINDINGPROTOCOLDIALOG_OFFSET UNITYSDK_OFFSET(0x187CC900)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x187CC910)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x187CCCC0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x187C4270)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManagerSteam_TypeDefinitionIndex = 8325;

	class BindManagerSteam : public ::MiHoYo::SDK::Windows::OS::Channel::BindManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckShowPreBindingProtocolDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM_CHECKSHOWPREBINDINGPROTOCOLDIALOG_OFFSET))(this);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM_GETBINDINGWEBURL_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERSTEAM_GETREPORTTYPE_OFFSET))(this);
		}
	};
}
