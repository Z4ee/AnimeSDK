#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class OverseaConfirmWithTitle; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16108A30)
#define MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE___C__DISPLAYCLASS22_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x16108B50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaConfirmWithTitle___c__DisplayClass22_0_TypeDefinitionIndex = 7918;

	class OverseaConfirmWithTitle___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* cancelButtonText; // 0x10
		::System::String* confirmButtonText; // 0x18
		::System::String* title; // 0x20
		::System::String* content; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::OverseaConfirmWithTitle* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OverseaConfirmWithTitle*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEACONFIRMWITHTITLE___C__DISPLAYCLASS22_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
