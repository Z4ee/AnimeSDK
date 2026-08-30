#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class AgeGateManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CCA40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS41_0__ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_B__0_OFFSET UNITYSDK_OFFSET(0x1B9CF690)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager___c__DisplayClass41_0_TypeDefinitionIndex = 8669;

	class AgeGateManager___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager* __4__this; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowParentalControlProcessButtonPressed_b__0(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER___C__DISPLAYCLASS41_0__ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_B__0_OFFSET))(this, a1);
		}
	};
}
