#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class BindManager___c__DisplayClass36_0; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE9280)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__ONCHECKACCOUNT_B__14_OFFSET UNITYSDK_OFFSET(0x15CF27E0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS36_1__ONCHECKACCOUNT_B__16_OFFSET UNITYSDK_OFFSET(0x15CF2950)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass36_1_TypeDefinitionIndex = 9332;

	class BindManager___c__DisplayClass36_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::BindManager___c__DisplayClass36_0* CS___8__locals1; // 0x10
		::System::Action* OnBindMail; // 0x18

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
