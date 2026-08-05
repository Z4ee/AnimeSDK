#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Common::OS { class AgeGatePayValidationManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }

#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D495950)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS35_0__ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_B__0_OFFSET UNITYSDK_OFFSET(0x1D495960)

namespace MiHoYo::SDK::Common::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager___c__DisplayClass35_0_TypeDefinitionIndex = 20924;

	class AgeGatePayValidationManager___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog; // 0x10
		::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowParentalControlProcessButtonPressed_b__0(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* d)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS35_0__ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_B__0_OFFSET))(this, d);
		}
	};
}
