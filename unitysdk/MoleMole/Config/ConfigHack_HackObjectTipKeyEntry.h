#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHACK_HACKOBJECTTIPKEYENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x12716540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHack_HackObjectTipKeyEntry_TypeDefinitionIndex = 75741;

	class ConfigHack_HackObjectTipKeyEntry : public ::System::Object
	{
	public:
		::System::String* HackViewConsoleKey; // 0x10
		::System::String* MobileKey; // 0x18
		::System::String* HackViewMobileKey; // 0x20
		::System::String* ConsoleKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHACK_HACKOBJECTTIPKEYENTRY__CTOR_OFFSET))(this);
		}
	};
}
