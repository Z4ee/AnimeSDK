#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class GrantBindPhone; }

#define MIHOYO_SDK_WIN_GRANTBINDPHONE___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCA7320)
#define MIHOYO_SDK_WIN_GRANTBINDPHONE___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BCA7330)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantBindPhone___c__DisplayClass30_0_TypeDefinitionIndex = 21259;

	class GrantBindPhone___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::GrantBindPhone* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::GrantBindPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTBINDPHONE___C__DISPLAYCLASS30_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
