#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldReactivateDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE51920)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG___C__DISPLAYCLASS9_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BE51930)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldReactivateDialog___c__DisplayClass9_0_TypeDefinitionIndex = 20559;

	class HandheldReactivateDialog___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Boolean isAccountPlatform; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldReactivateDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldReactivateDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDREACTIVATEDIALOG___C__DISPLAYCLASS9_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
