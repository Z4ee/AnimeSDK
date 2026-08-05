#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19845BF0)
#define MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19845C30)
#define MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__ONSHOW_B__31_0_OFFSET UNITYSDK_OFFSET(0x19845C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelEavesdropChildWindowController___c_TypeDefinitionIndex = 79969;

	class UIInLevelEavesdropChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>** StaticGet___9__31_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEavesdropChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A560);
		}
		static ::MoleMole::UIInLevelEavesdropChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIInLevelEavesdropChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelEavesdropChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__31_0(::UnityEngine::UI::Extension::UILocalizationText* content)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELEAVESDROPCHILDWINDOWCONTROLLER___C__ONSHOW_B__31_0_OFFSET))(this, content);
		}
	};
}
