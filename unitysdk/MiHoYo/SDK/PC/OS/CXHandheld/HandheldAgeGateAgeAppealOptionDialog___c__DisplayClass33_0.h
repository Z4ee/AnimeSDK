#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DC3B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B9DC3C0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateAgeAppealOptionDialog___c__DisplayClass33_0_TypeDefinitionIndex = 20526;

	class HandheldAgeGateAgeAppealOptionDialog___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Int32 days; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateAgeAppealOptionDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEAGEAPPEALOPTIONDIALOG___C__DISPLAYCLASS33_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
