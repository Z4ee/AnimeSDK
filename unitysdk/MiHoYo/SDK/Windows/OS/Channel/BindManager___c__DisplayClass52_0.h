#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class Action; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8550)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS52_0__SHOWPREBINDINGPROTOCOLDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x1BBD8560)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager___c__DisplayClass52_0_TypeDefinitionIndex = 20128;

	class BindManager___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Windows::OS::Channel::BindManager* __4__this; // 0x10
		::System::Action* onProtocolAccepted; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPreBindingProtocolDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS52_0__SHOWPREBINDINGPROTOCOLDIALOG_B__0_OFFSET))(this);
		}
	};
}
