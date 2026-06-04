#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184B5380)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__ONREQUESTCOMBOLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x184B5950)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__ONREQUESTCOMBOLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x184B5390)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__ONREQUESTCOMBOLOGIN_B__2_OFFSET UNITYSDK_OFFSET(0x184B5580)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass24_0_TypeDefinitionIndex = 9079;

	class ComboManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x10
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRequestComboLogin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__ONREQUESTCOMBOLOGIN_B__1_OFFSET))(this);
		}

		::System::Void _OnRequestComboLogin_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__ONREQUESTCOMBOLOGIN_B__2_OFFSET))(this);
		}

		::System::Void _OnRequestComboLogin_b__0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS24_0__ONREQUESTCOMBOLOGIN_B__0_OFFSET))(this, a1);
		}
	};
}
