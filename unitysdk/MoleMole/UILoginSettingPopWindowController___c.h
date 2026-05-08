#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16431D20)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16431D60)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__17_0_OFFSET UNITYSDK_OFFSET(0x16431D70)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginSettingPopWindowController___c_TypeDefinitionIndex = 72270;

	class UILoginSettingPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x408D0);
		}
		static ::MoleMole::UILoginSettingPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILoginSettingPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x408D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSetLanguageVoice_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__17_0_OFFSET))(this);
		}
	};
}
