#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class SecondRealnameGrantPhone; }

#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1718A590)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE___C__DISPLAYCLASS38_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1718A890)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealnameGrantPhone___c__DisplayClass38_0_TypeDefinitionIndex = 9188;

	class SecondRealnameGrantPhone___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* model; // 0x10
		::System::Boolean isShowOtherVerify; // 0x18
		::System::Boolean isShowRedirect; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Win::SecondRealnameGrantPhone* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::SecondRealnameGrantPhone*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE___C__DISPLAYCLASS38_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
