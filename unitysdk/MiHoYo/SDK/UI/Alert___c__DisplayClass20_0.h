#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class Alert_OnAlertDelegate; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_ALERT___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C6C40)
#define MIHOYO_SDK_UI_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1B9C76F0)
#define MIHOYO_SDK_UI_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1B9C7760)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int Alert___c__DisplayClass20_0_TypeDefinitionIndex = 8354;

	class Alert___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::Alert_OnAlertDelegate* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ALERT___C__DISPLAYCLASS20_0__SHOWPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}
	};
}
