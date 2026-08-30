#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IWinChannelProtocolDialog; }
namespace System { class Action; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F009FD0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__SHOWPRECOMBOLOGINPROTOCOLDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1F00A5B0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__SHOWPRECOMBOLOGINPROTOCOLDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0x1F00A6D0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__SHOWPRECOMBOLOGINPROTOCOLDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0x1F00A7F0)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass5_0_TypeDefinitionIndex = 8329;

	class ProtocolManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IWinChannelProtocolDialog* dialog; // 0x10
		::System::Action* onProtocolAccepted; // 0x18
		::System::Action* onProtocolRefused; // 0x20
		::MiHoYo::SDK::ReportType reportType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPreComboLoginProtocolDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__SHOWPRECOMBOLOGINPROTOCOLDIALOG_B__0_OFFSET))(this);
		}

		::System::Void _ShowPreComboLoginProtocolDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__SHOWPRECOMBOLOGINPROTOCOLDIALOG_B__1_OFFSET))(this);
		}

		::System::Void _ShowPreComboLoginProtocolDialog_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_PROTOCOLMANAGER___C__DISPLAYCLASS5_0__SHOWPRECOMBOLOGINPROTOCOLDIALOG_B__2_OFFSET))(this);
		}
	};
}
