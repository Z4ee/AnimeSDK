#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA491E0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__ONBIRTHDAYINPUTNEXTBUTTONPRESSED_B__0_OFFSET UNITYSDK_OFFSET(0x1AA491F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass37_0_TypeDefinitionIndex = 19644;

	class AgeGateManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* dialog; // 0x10
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBirthdayInputNextButtonPressed_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__ONBIRTHDAYINPUTNEXTBUTTONPRESSED_B__0_OFFSET))(this, response);
		}
	};
}
