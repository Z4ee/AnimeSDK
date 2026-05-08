#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AlertWithTitle; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_ALERTWITHTITLE___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05C120)
#define MIHOYO_SDK_ALERTWITHTITLE___C__DISPLAYCLASS19_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A05C130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertWithTitle___c__DisplayClass19_0_TypeDefinitionIndex = 18862;

	class AlertWithTitle___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* confirmCallback; // 0x10
		::System::String* titleText; // 0x18
		::System::String* contentText; // 0x20
		::System::String* confirmButtonText; // 0x28
		::System::Boolean bAutoHide; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::AlertWithTitle* alertDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AlertWithTitle*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTWITHTITLE___C__DISPLAYCLASS19_0__SHOW_B__0_OFFSET))(this, alertDialog);
		}
	};
}
