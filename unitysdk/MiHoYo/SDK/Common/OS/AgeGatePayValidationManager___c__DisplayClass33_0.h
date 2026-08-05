#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Common::OS { class AgeGatePayValidationManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }

#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D495910)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS33_0__ONPARENTALCONSENTEMAILSENT_B__0_OFFSET UNITYSDK_OFFSET(0x1D495920)

namespace MiHoYo::SDK::Common::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager___c__DisplayClass33_0_TypeDefinitionIndex = 20923;

	class AgeGatePayValidationManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog; // 0x10
		::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnParentalConsentEmailSent_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS33_0__ONPARENTALCONSENTEMAILSENT_B__0_OFFSET))(this, response);
		}
	};
}
