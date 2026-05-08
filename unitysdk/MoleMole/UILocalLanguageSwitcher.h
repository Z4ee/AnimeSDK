#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class NewConfigUICommon; }
namespace UnityEngine::UI::Extension { class UILocalizationImage; }

#define MOLEMOLE_UILOCALLANGUAGESWITCHER_FINDLOCALIZATIONTEXTREFRESH_OFFSET UNITYSDK_OFFSET(0x155FA5C0)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_METHOD_5_3E6AC14EE28F55D4_OFFSET UNITYSDK_OFFSET(0x155FAD20)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x155FA500)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x155FA4A0)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_SETLOCALIZATIONIMAGE_OFFSET UNITYSDK_OFFSET(0x155FAA00)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_STARTSWITCHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x155FA540)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x155FACD0)

namespace MoleMole
{
	inline static constexpr unsigned int UILocalLanguageSwitcher_TypeDefinitionIndex = 57484;

	class UILocalLanguageSwitcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::LanguageType showLanguageType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_ONDESTROY_OFFSET))(this);
		}

		::System::Void StartSwitchLanguage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_STARTSWITCHLANGUAGE_OFFSET))(this);
		}

		::System::Void FindLocalizationTextRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_FINDLOCALIZATIONTEXTREFRESH_OFFSET))(this);
		}

		::System::Void SetLocalizationImage(::MoleMole::NewConfigUICommon* a1, ::UnityEngine::UI::Extension::UILocalizationImage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::UnityEngine::UI::Extension::UILocalizationImage*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_SETLOCALIZATIONIMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_3E6AC14EE28F55D4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_METHOD_5_3E6AC14EE28F55D4_OFFSET))(this);
		}
	};
}
