#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class LanguageManager; }
namespace System { class String; }

#define MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98FAE0)
#define MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS12_0__UPDATELANGUAGEMODEL_B__0_OFFSET UNITYSDK_OFFSET(0x1B990D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int LanguageManager___c__DisplayClass12_0_TypeDefinitionIndex = 8029;

	class LanguageManager___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::LanguageManager* __4__this; // 0x10
		::System::String* strRequestLang; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateLanguageModel_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LANGUAGEMANAGER___C__DISPLAYCLASS12_0__UPDATELANGUAGEMODEL_B__0_OFFSET))(this, a1);
		}
	};
}
