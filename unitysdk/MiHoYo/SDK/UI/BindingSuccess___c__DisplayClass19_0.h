#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI { class BindingSuccess; }
namespace System { class String; }

#define MIHOYO_SDK_UI_BINDINGSUCCESS___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A080070)
#define MIHOYO_SDK_UI_BINDINGSUCCESS___C__DISPLAYCLASS19_0__SHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1A080080)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int BindingSuccess___c__DisplayClass19_0_TypeDefinitionIndex = 19239;

	class BindingSuccess___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::String* channelAccount; // 0x10
		::System::String* hoyoAccount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__0(::MiHoYo::SDK::UI::BindingSuccess* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::BindingSuccess*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGSUCCESS___C__DISPLAYCLASS19_0__SHOW_B__0_OFFSET))(this, dialog);
		}
	};
}
