#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF79E0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS18_0__SHOWREALNAMEVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18DF79F0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS18_0__SHOWREALNAMEVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x18DF7AB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass18_0_TypeDefinitionIndex = 19932;

	class RealNameManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowRealNameView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS18_0__SHOWREALNAMEVIEW_B__0_OFFSET))(this);
		}

		::System::Void _ShowRealNameView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS18_0__SHOWREALNAMEVIEW_B__1_OFFSET))(this);
		}
	};
}
