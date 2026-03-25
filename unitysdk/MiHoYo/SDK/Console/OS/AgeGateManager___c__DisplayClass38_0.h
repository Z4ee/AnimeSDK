#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E56700)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS38_0__ONRESENDEMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x15E57D40)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass38_0_TypeDefinitionIndex = 7673;

	class AgeGateManager___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnResendEmail_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS38_0__ONRESENDEMAIL_B__0_OFFSET))(this, response);
		}
	};
}
