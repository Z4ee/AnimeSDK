#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AD0D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1D4AD0E0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateErrorDialog___c__DisplayClass21_0_TypeDefinitionIndex = 20877;

	class HandheldAgeGateErrorDialog___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* title; // 0x10
		::System::String* subDesc; // 0x18
		::System::String* desc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEERRORDIALOG___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
