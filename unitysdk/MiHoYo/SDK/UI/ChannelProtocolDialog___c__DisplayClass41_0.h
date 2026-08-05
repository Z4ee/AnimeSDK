#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/ChannelProtocolDisplayType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class ChannelProtocolDialog; }

#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DC9E0)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG___C__DISPLAYCLASS41_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1D1DC9F0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int ChannelProtocolDialog___c__DisplayClass41_0_TypeDefinitionIndex = 20503;

	class ChannelProtocolDialog___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType protocolDisplayType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::ChannelProtocolDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::ChannelProtocolDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG___C__DISPLAYCLASS41_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
