#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C__DISPLAYCLASS104_0__ADDBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1A243DB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A243C30)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldEmailBindingDialog___c__DisplayClass104_0_TypeDefinitionIndex = 8751;

	class HandheldEmailBindingDialog___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _AddButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG___C__DISPLAYCLASS104_0__ADDBUTTONCLICK_B__0_OFFSET))(this);
		}
	};
}
