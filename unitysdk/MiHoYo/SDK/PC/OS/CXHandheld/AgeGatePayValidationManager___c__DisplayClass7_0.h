#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class AgeGatePayValidationManager; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC09F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONAGEGATEPAYMENTERROR_B__0_OFFSET UNITYSDK_OFFSET(0x1BBC0A00)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGatePayValidationManager___c__DisplayClass7_0_TypeDefinitionIndex = 20478;

	class AgeGatePayValidationManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::AgeGatePayValidationManager* __4__this; // 0x10
		::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAgeGatePaymentError_b__0(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER___C__DISPLAYCLASS7_0__ONAGEGATEPAYMENTERROR_B__0_OFFSET))(this, result);
		}
	};
}
