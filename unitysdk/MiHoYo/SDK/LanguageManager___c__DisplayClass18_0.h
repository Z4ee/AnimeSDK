#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LanguageManager; }
namespace System { class String; }

#define MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A623250)
#define MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS18_0__ONGETVERSION_B__0_OFFSET UNITYSDK_OFFSET(0x1A623650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager___c__DisplayClass18_0_TypeDefinitionIndex = 8030;

	class LanguageManager___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::LanguageManager* __4__this; // 0x10
		::System::String* strRequestLangCode; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGetVersion_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS18_0__ONGETVERSION_B__0_OFFSET))(this, a1);
		}
	};
}
