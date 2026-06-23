#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindManager___c__DisplayClass36_0; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53F910)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__ONCHECKACCOUNT_B__14_OFFSET UNITYSDK_OFFSET(0x1B53F920)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__ONCHECKACCOUNT_B__16_OFFSET UNITYSDK_OFFSET(0x1B53FA80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass36_1_TypeDefinitionIndex = 21137;

	class BindManager___c__DisplayClass36_1 : public ::System::Object
	{
	public:
		::System::Action* OnBindMail; // 0x10
		::MiHoYo::SDK::Win::BindManager___c__DisplayClass36_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__14()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__ONCHECKACCOUNT_B__14_OFFSET))(this);
		}

		::System::Void _OnCheckAccount_b__16()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__ONCHECKACCOUNT_B__16_OFFSET))(this);
		}
	};
}
