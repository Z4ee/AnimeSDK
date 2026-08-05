#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1862E6C0)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1862E700)
#define MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1862E710)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginLanguageSetPopWindowController___c_TypeDefinitionIndex = 53232;

	class UILoginLanguageSetPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILoginLanguageSetPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILoginLanguageSetPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILoginLanguageSetPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A5A0);
		}
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginLanguageSetPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3A5A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSetLanguageVoice_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINLANGUAGESETPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__10_0_OFFSET))(this);
		}
	};
}
