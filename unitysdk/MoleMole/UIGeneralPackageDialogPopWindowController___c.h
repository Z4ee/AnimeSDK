#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18977530)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18977570)
#define MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DOPURCHASE_B__19_1_OFFSET UNITYSDK_OFFSET(0x18977580)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPackageDialogPopWindowController___c_TypeDefinitionIndex = 41811;

	class UIGeneralPackageDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIGeneralPackageDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGeneralPackageDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPackageDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49070);
		}
		static ::System::Action** StaticGet___9__19_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralPackageDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x49078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoPurchase_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPACKAGEDIALOGPOPWINDOWCONTROLLER___C__DOPURCHASE_B__19_1_OFFSET))(this);
		}
	};
}
