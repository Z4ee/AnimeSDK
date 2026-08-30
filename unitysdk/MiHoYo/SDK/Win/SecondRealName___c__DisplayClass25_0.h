#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/REAL_NAME_DIALOG_TYPE.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class SecondRealName; }

#define MIHOYO_SDK_WIN_SECONDREALNAME___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x187A8760)
#define MIHOYO_SDK_WIN_SECONDREALNAME___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x187A8F30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealName___c__DisplayClass25_0_TypeDefinitionIndex = 9493;

	class SecondRealName___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::SecondRealName* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SecondRealName*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
