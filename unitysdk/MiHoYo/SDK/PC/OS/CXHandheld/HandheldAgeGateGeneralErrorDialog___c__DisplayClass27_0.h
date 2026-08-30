#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateGeneralErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2303E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A230780)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateGeneralErrorDialog___c__DisplayClass27_0_TypeDefinitionIndex = 8717;

	class HandheldAgeGateGeneralErrorDialog___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::String* subDesc; // 0x10
		::System::String* confirmText; // 0x18
		::System::String* title; // 0x20
		::System::String* cancelText; // 0x28
		::System::String* desc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEGENERALERRORDIALOG___C__DISPLAYCLASS27_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
