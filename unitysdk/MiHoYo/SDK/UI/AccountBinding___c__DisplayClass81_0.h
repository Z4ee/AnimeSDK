#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class AccountBinding; }
namespace System { class String; }

#define MIHOYO_SDK_UI_ACCOUNTBINDING___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17661080)
#define MIHOYO_SDK_UI_ACCOUNTBINDING___C__DISPLAYCLASS81_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x17664D80)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AccountBinding___c__DisplayClass81_0_TypeDefinitionIndex = 7399;

	class AccountBinding___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::System::String* gamertag; // 0x10
		::System::Boolean showAgreement; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::AccountBinding* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::AccountBinding*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING___C__DISPLAYCLASS81_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
