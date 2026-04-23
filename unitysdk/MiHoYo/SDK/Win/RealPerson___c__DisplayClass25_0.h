#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealPerson; }

#define MIHOYO_SDK_WIN_REALPERSON___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174BEE80)
#define MIHOYO_SDK_WIN_REALPERSON___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x174BF250)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealPerson___c__DisplayClass25_0_TypeDefinitionIndex = 8239;

	class RealPerson___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::RealPerson* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::RealPerson*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON___C__DISPLAYCLASS25_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
