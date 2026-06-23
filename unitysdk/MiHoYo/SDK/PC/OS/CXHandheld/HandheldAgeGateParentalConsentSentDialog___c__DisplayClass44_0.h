#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateParentalConsentSentDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C395100)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1C395110)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentSentDialog___c__DisplayClass44_0_TypeDefinitionIndex = 20543;

	class HandheldAgeGateParentalConsentSentDialog___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::String* email; // 0x10
		::System::String* date; // 0x18
		::MiHoYo::SDK::AgeGateFlowType type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentSentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentSentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTSENTDIALOG___C__DISPLAYCLASS44_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
