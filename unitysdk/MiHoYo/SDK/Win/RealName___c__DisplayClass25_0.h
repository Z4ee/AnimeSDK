#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/REAL_NAME_DIALOG_TYPE.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class RealName; }

#define MIHOYO_SDK_WIN_REALNAME___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7DAA0)
#define MIHOYO_SDK_WIN_REALNAME___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x15E7E2B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealName___c__DisplayClass25_0_TypeDefinitionIndex = 8151;

	class RealName___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::RealName* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::RealName*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
