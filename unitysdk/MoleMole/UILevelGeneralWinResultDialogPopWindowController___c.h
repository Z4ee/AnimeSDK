#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150040E0)
#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15004120)
#define MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C___ADDFADEOUTANIMATIONCALLBACK_B__54_0_OFFSET UNITYSDK_OFFSET(0x15004130)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelGeneralWinResultDialogPopWindowController___c_TypeDefinitionIndex = 82016;

	class UILevelGeneralWinResultDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__54_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevelGeneralWinResultDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3ABA0);
		}
		static ::MoleMole::UILevelGeneralWinResultDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UILevelGeneralWinResultDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UILevelGeneralWinResultDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3ABA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __AddFadeOutAnimationCallback_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELGENERALWINRESULTDIALOGPOPWINDOWCONTROLLER___C___ADDFADEOUTANIMATIONCALLBACK_B__54_0_OFFSET))(this);
		}
	};
}
