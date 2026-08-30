#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB1040)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS38_0__SHOWOVERSEAPROTOCOLPLUGINUI_B__5_OFFSET UNITYSDK_OFFSET(0x1BAB1400)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass38_0_TypeDefinitionIndex = 8006;

	class ProtocolManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Action* cancel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__5(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS38_0__SHOWOVERSEAPROTOCOLPLUGINUI_B__5_OFFSET))(this, a1);
		}
	};
}
