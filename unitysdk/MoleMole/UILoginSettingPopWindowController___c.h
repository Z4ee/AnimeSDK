#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155C9210)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155C9250)
#define MOLEMOLE_UILOGINSETTINGPOPWINDOWCONTROLLER___C__ONSETLANGUAGEVOICE_B__17_0_OFFSET UNITYSDK_OFFSET(0x155C9260)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginSettingPopWindowController___c_TypeDefinitionIndex = 59383;

	class UILoginSettingPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILoginSettingPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILoginSettingPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43340);
		}
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILoginSettingPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x43348);
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
