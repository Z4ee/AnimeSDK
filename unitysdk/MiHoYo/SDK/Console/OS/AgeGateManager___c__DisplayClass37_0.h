#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18254490)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__ONBIRTHDAYINPUTNEXTBUTTONPRESSED_B__0_OFFSET UNITYSDK_OFFSET(0x182563F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass37_0_TypeDefinitionIndex = 8720;

	class AgeGateManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* dialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnBirthdayInputNextButtonPressed_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS37_0__ONBIRTHDAYINPUTNEXTBUTTONPRESSED_B__0_OFFSET))(this, a1);
		}
	};
}
