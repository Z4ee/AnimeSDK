#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18283190)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x18284110)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_B__1_OFFSET UNITYSDK_OFFSET(0x18284190)

namespace MiHoYo::SDK::Win::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager___c__DisplayClass7_0_TypeDefinitionIndex = 9216;

	class AgeGatePayValidationManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog; // 0x18
		::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnParentalConsentInputEmailButtonPressedConfirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_B__0_OFFSET))(this);
		}

		::System::Void _OnParentalConsentInputEmailButtonPressedConfirm_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_B__1_OFFSET))(this);
		}
	};
}
