#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__DISPLAYCLASS63_0__ADDBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1A2477F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2476B0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldQRBindingDialog___c__DisplayClass63_0_TypeDefinitionIndex = 8757;

	class HandheldQRBindingDialog___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDQRBINDINGDIALOG___C__DISPLAYCLASS63_0__ADDBUTTONCLICK_B__0_OFFSET))(this);
		}
	};
}
