#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class NewConfigUICommon; }
namespace UnityEngine::UI::Extension { class UILocalizationImage; }

#define MOLEMOLE_UILOCALLANGUAGESWITCHER_FINDLOCALIZATIONTEXTREFRESH_OFFSET UNITYSDK_OFFSET(0x17831830)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_METHOD_5_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x17831FC0)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17831770)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17831710)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_SETLOCALIZATIONIMAGE_OFFSET UNITYSDK_OFFSET(0x17831CA0)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER_STARTSWITCHLANGUAGE_OFFSET UNITYSDK_OFFSET(0x178317B0)
#define MOLEMOLE_UILOCALLANGUAGESWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x17831F70)

namespace MoleMole
{
	inline static constexpr unsigned int UILocalLanguageSwitcher_TypeDefinitionIndex = 84858;

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

		::System::Void Method_5_4B16404ED490414F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOCALLANGUAGESWITCHER_METHOD_5_4B16404ED490414F_OFFSET))(this);
		}
	};
}
