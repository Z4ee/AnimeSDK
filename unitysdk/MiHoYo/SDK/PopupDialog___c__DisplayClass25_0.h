#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PopupDialog; }
namespace MiHoYo::SDK { class PopupDialog_OnSelectedDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_POPUPDIALOG___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAA1970)
#define MIHOYO_SDK_POPUPDIALOG___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BAA1F30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog___c__DisplayClass25_0_TypeDefinitionIndex = 7968;

	class PopupDialog___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::String* bottomButtonTitle; // 0x10
		::System::String* content; // 0x18
		::MiHoYo::SDK::PopupDialog_OnSelectedDelegate* callback; // 0x20
		::System::String* topButtonTitle; // 0x28
		::System::Boolean isShowBottom; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::PopupDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
