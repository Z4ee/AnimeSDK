#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x137640C0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13764100)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_0_OFFSET UNITYSDK_OFFSET(0x13764110)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_1_OFFSET UNITYSDK_OFFSET(0x13764230)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_2_OFFSET UNITYSDK_OFFSET(0x13764240)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController___c_TypeDefinitionIndex = 38581;

	class UIReportDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__22_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x353F0);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x353F8);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35400);
		}
		static ::MoleMole::UIReportDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIReportDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x35408);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_0_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_1_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_2_OFFSET))(this);
		}
	};
}
