#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Common::OS { class AgeGatePayValidationManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B6210)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS39_0__ONAGEGATEPAYMENTERROR_B__0_OFFSET UNITYSDK_OFFSET(0x1A1B6AA0)

namespace MiHoYo::SDK::Common::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager___c__DisplayClass39_0_TypeDefinitionIndex = 8773;

	class AgeGatePayValidationManager___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* __4__this; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAgeGatePaymentError_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS39_0__ONAGEGATEPAYMENTERROR_B__0_OFFSET))(this, a1);
		}
	};
}
