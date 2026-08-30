#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/Windows/OS/Channel/BindManager.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_CHECKSHOWPREBINDINGPROTOCOLDIALOG_OFFSET UNITYSDK_OFFSET(0x187CCCD0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1F009210)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1F009370)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_GETREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1F009720)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_ISBINDINGACCOUNTSWITCHON_OFFSET UNITYSDK_OFFSET(0x187CCCE0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_SAVEPREBINDINGPROTOCOLAGREERECORD_OFFSET UNITYSDK_OFFSET(0x187CCD40)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x187C42C0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManagerXbox_TypeDefinitionIndex = 8326;

	class BindManagerXbox : public ::MiHoYo::SDK::Windows::OS::Channel::BindManager
	{
	public:
		::System::Boolean isProtocolAccepted; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckShowPreBindingProtocolDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_CHECKSHOWPREBINDINGPROTOCOLDIALOG_OFFSET))(this);
		}

		::System::Boolean IsBindingAccountSwitchOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_ISBINDINGACCOUNTSWITCHON_OFFSET))(this);
		}

		::System::Void SavePreBindingProtocolAgreeRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_SAVEPREBINDINGPROTOCOLAGREERECORD_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_GENERATEACCESSTOKEN_OFFSET))(this, a1, a2);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_GETBINDINGWEBURL_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX_GETREPORTTYPE_OFFSET))(this);
		}
	};
}
