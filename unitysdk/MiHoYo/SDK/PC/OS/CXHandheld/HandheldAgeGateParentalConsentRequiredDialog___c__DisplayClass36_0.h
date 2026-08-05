#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateParentalConsentRequiredDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD3760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS36_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1CFD3770)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentRequiredDialog___c__DisplayClass36_0_TypeDefinitionIndex = 20886;

	class HandheldAgeGateParentalConsentRequiredDialog___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::MiHoYo::SDK::AgeGateFlowType type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentRequiredDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentRequiredDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTREQUIREDDIALOG___C__DISPLAYCLASS36_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
