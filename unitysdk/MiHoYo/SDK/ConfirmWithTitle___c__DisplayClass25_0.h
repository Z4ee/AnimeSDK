#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfirmWithTitle; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONFIRMWITHTITLE___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC60ED0)
#define MIHOYO_SDK_CONFIRMWITHTITLE___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BC61030)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithTitle___c__DisplayClass25_0_TypeDefinitionIndex = 8003;

	class ConfirmWithTitle___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::String* cancelButtonText; // 0x10
		::System::Action* cancelCallback; // 0x18
		::System::String* titleText; // 0x20
		::System::String* confirmButtonText; // 0x28
		::System::String* contentText; // 0x30
		::System::Action* confirmCallback; // 0x38
		::System::Boolean bAutoHide; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::ConfirmWithTitle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithTitle*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHTITLE___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
