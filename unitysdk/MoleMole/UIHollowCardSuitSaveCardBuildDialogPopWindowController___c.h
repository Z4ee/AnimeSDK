#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EAFA60)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAFAA0)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONCLICKDEL_B__6_1_OFFSET UNITYSDK_OFFSET(0x19EAFAD0)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONSAVECARDBUILD_B__5_1_OFFSET UNITYSDK_OFFSET(0x19EAFAC0)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x19EAFAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex = 47669;

	class UIHollowCardSuitSaveCardBuildDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32EA0);
		}
		static ::MoleMole::UIHollowCardSuitSaveCardBuildDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardSuitSaveCardBuildDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32EA8);
		}
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32EB0);
		}
		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x32EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET))(this);
		}

		::System::Void _OnSaveCardBuild_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONSAVECARDBUILD_B__5_1_OFFSET))(this);
		}

		::System::Void _OnClickDel_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONCLICKDEL_B__6_1_OFFSET))(this);
		}
	};
}
