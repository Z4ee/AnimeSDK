#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1762B780)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_1__SHOWPROTOCOLPLUGINUI_B__7_OFFSET UNITYSDK_OFFSET(0x1762B810)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager___c__DisplayClass33_1_TypeDefinitionIndex = 7088;

	class ProtocolManager___c__DisplayClass33_1 : public ::System::Object
	{
	public:
		::System::Action* cancel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowProtocolPluginUI_b__7(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS33_1__SHOWPROTOCOLPLUGINUI_B__7_OFFSET))(this, result);
		}
	};
}
