#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CE52B0)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS15_0__VERIFYEMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x15CEDB90)
#define MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS15_0__VERIFYEMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x15CEDC60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager___c__DisplayClass15_0_TypeDefinitionIndex = 9320;

	class BindManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _VerifyEmail_b__0(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS15_0__VERIFYEMAIL_B__0_OFFSET))(this, a1);
		}

		::System::Void _VerifyEmail_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER___C__DISPLAYCLASS15_0__VERIFYEMAIL_B__1_OFFSET))(this);
		}
	};
}
