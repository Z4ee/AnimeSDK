#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SKINCOLORMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B8790)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SkinColorModel_TypeDefinitionIndex = 7843;

	class SkinColorModel : public ::System::Object
	{
	public:
		::System::String* highlightborder; // 0x10
		::System::String* highlighttext; // 0x18
		::System::String* marketingtext; // 0x20
		::System::String* amounttext; // 0x28
		::System::String* tagbg; // 0x30
		::System::String* backgroundColor; // 0x38
		::System::String* verticalline; // 0x40
		::System::String* modulefill; // 0x48
		::System::String* liststroke; // 0x50
		::System::String* toasttext; // 0x58
		::System::String* warningtext; // 0x60
		::System::String* ciphertext; // 0x68
		::System::String* bodytext; // 0x70
		::System::String* subtitletext; // 0x78
		::System::String* titletext; // 0x80
		::System::String* btntext_primaryconsole; // 0x88
		::System::String* btntext_primaryconsole_d; // 0x90
		::System::String* btntext_secondary_d; // 0x98
		::System::String* btntext_secondary; // 0xA0
		::System::String* btntext_primary_d; // 0xA8
		::System::String* btntext_primary; // 0xB0
		::System::String* text_ointeract; // 0xB8
		::System::String* text_ointeract_p; // 0xC0
		::System::String* text_ointeract_h; // 0xC8
		::System::String* text_interact_d; // 0xD0
		::System::String* text_interact_p; // 0xD8
		::System::String* text_interact_h; // 0xE0
		::System::String* text_interact; // 0xE8
		::System::String* switch_on_bg; // 0xF0
		::System::String* switch_on_bg_d; // 0xF8
		::System::String* switch_off_bg; // 0x100
		::System::String* switch_circle_icon; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SKINCOLORMODEL__CTOR_OFFSET))(this);
		}
	};
}
