#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaPayManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BEF40)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_0__SHOWPAYAGELIMITNEWFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1B8C7C20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass42_0_TypeDefinitionIndex = 9285;

	class OverseaPayManager___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::OverseaPayManager* __4__this; // 0x10
		::MiHoYo::SDK::AccountModel* account; // 0x18
		::System::Action* closeCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayAgeLimitNewFlow_b__0(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_0__SHOWPAYAGELIMITNEWFLOW_B__0_OFFSET))(this, a1, a2);
		}
	};
}
