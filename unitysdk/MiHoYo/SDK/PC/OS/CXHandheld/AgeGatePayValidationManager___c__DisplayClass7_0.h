#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class AgeGatePayValidationManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9D0770)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONAGEGATEPAYMENTERROR_B__0_OFFSET UNITYSDK_OFFSET(0x1B9D0780)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGatePayValidationManager___c__DisplayClass7_0_TypeDefinitionIndex = 8672;

	class AgeGatePayValidationManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::AgeGatePayValidationManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAgeGatePaymentError_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONAGEGATEPAYMENTERROR_B__0_OFFSET))(this, a1);
		}
	};
}
