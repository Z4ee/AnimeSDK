#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateParentalConsentDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A232940)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A232F40)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentDialog___c__DisplayClass50_0_TypeDefinitionIndex = 8727;

	class HandheldAgeGateParentalConsentDialog___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AgeGateFlowType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG___C__DISPLAYCLASS50_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
