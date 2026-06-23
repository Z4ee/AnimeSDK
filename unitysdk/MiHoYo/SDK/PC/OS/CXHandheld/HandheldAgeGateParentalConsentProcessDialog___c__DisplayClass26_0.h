#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateParentalConsentProcessDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DC3F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B9DC400)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentProcessDialog___c__DisplayClass26_0_TypeDefinitionIndex = 20536;

	class HandheldAgeGateParentalConsentProcessDialog___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AgeGateFlowType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentProcessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG___C__DISPLAYCLASS26_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
