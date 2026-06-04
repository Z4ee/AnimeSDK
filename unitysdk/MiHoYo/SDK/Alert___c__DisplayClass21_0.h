#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Alert; }
namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_ALERT___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x181E0600)
#define MIHOYO_SDK_ALERT___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x181E0DB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert___c__DisplayClass21_0_TypeDefinitionIndex = 8184;

	class Alert___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* content; // 0x10
		::System::String* button; // 0x18
		::MiHoYo::SDK::Alert_OnAlertDelegate* callback; // 0x20
		::System::Boolean isShowClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::Alert* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__DISPLAYCLASS21_0__SHOW_B__0_OFFSET))(this, a1);
		}
	};
}
