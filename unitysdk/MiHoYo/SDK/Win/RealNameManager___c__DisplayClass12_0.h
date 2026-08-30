#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8E0110)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS12_0__REFUSEREALNAMECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x1B8E4C90)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS12_0__REFUSEREALNAMECOMMAND_B__1_OFFSET UNITYSDK_OFFSET(0x1B8E4D00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass12_0_TypeDefinitionIndex = 9291;

	class RealNameManager___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x10
		::System::Action* cancel; // 0x18
		::System::Boolean bIsSecondRealName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefuseRealNameCommand_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS12_0__REFUSEREALNAMECOMMAND_B__0_OFFSET))(this);
		}

		::System::Void _RefuseRealNameCommand_b__1(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS12_0__REFUSEREALNAMECOMMAND_B__1_OFFSET))(this, a1);
		}
	};
}
