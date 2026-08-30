#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_ALERT___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A194C60)
#define MIHOYO_SDK_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1A1957F0)
#define MIHOYO_SDK_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1A195860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert___c__DisplayClass20_0_TypeDefinitionIndex = 8199;

	class Alert___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Alert_OnAlertDelegate* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}
	};
}
