#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x162E8550)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x162E8590)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONCLICKDEL_B__6_1_OFFSET UNITYSDK_OFFSET(0x162E85C0)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONSAVECARDBUILD_B__5_1_OFFSET UNITYSDK_OFFSET(0x162E85B0)
#define MOLEMOLE_UIHOLLOWCARDSUITSAVECARDBUILDDIALOGPOPWINDOWCONTROLLER___C__ONUIINIT_B__3_1_OFFSET UNITYSDK_OFFSET(0x162E85A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex = 67388;

	class UIHollowCardSuitSaveCardBuildDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHollowCardSuitSaveCardBuildDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowCardSuitSaveCardBuildDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EE70);
		}
		static ::System::Action** StaticGet___9__3_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EE78);
		}
		static ::System::Action** StaticGet___9__6_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EE80);
		}
		static ::System::Action** StaticGet___9__5_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowCardSuitSaveCardBuildDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2EE88);
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
