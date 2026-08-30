#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18798C00)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS22_0__SHOWSECONDREALNAMEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1879D010)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS22_0__SHOWSECONDREALNAMEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1879D0D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass22_0_TypeDefinitionIndex = 9295;

	class RealNameManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSecondRealNameView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS22_0__SHOWSECONDREALNAMEVIEW_B__0_OFFSET))(this);
		}

		::System::Void _ShowSecondRealNameView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS22_0__SHOWSECONDREALNAMEVIEW_B__1_OFFSET))(this);
		}
	};
}
