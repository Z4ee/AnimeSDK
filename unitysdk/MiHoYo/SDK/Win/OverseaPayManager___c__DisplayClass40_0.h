#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18296E00)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS40_0__SHOWPAYAGELIMIT_B__0_OFFSET UNITYSDK_OFFSET(0x1829E5C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass40_0_TypeDefinitionIndex = 9002;

	class OverseaPayManager___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::Action* closeCallback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayAgeLimit_b__0(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS40_0__SHOWPAYAGELIMIT_B__0_OFFSET))(this, a1);
		}
	};
}
