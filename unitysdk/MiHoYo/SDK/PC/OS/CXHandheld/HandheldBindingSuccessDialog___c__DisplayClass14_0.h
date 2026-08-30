#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldBindingSuccessDialog; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E7C70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG___C__DISPLAYCLASS14_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B9E87F0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldBindingSuccessDialog___c__DisplayClass14_0_TypeDefinitionIndex = 8745;

	class HandheldBindingSuccessDialog___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::String* hoyoAccountName; // 0x10
		::System::String* accountName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldBindingSuccessDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldBindingSuccessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDBINDINGSUCCESSDIALOG___C__DISPLAYCLASS14_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
