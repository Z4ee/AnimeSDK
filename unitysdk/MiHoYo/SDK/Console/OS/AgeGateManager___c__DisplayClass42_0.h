#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Console::OS { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1735D1A0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS42_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_B__0_OFFSET UNITYSDK_OFFSET(0x1735F670)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass42_0_TypeDefinitionIndex = 9001;

	class AgeGateManager___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog; // 0x10
		::MiHoYo::SDK::Console::OS::AgeGateManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnParentalConsentInputEmailButtonPressed_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__DISPLAYCLASS42_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_B__0_OFFSET))(this, a1);
		}
	};
}
