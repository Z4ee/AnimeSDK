#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AlertCompliance; }
namespace MiHoYo::SDK { class AlertCompliance_OnAlertDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_ALERTCOMPLIANCE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197D0140)
#define MIHOYO_SDK_ALERTCOMPLIANCE___C__DISPLAYCLASS23_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x197D0150)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AlertCompliance___c__DisplayClass23_0_TypeDefinitionIndex = 18859;

	class AlertCompliance___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::String* button; // 0x10
		::MiHoYo::SDK::AlertCompliance_OnAlertDelegate* callback; // 0x18
		::System::String* content; // 0x20
		::System::Boolean isShowClose; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::AlertCompliance* alertCompliance)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AlertCompliance*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERTCOMPLIANCE___C__DISPLAYCLASS23_0__SHOW_B__0_OFFSET))(this, alertCompliance);
		}
	};
}
