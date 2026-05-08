#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D85270)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D852B0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__REFRESHMATERIAL_B__28_0_OFFSET UNITYSDK_OFFSET(0x14D852C0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__REFRESHMATERIAL_B__28_1_OFFSET UNITYSDK_OFFSET(0x14D85390)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex = 82793;

	class UIMindscapeDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x449D0);
		}
		static ::MoleMole::UIMindscapeDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMindscapeDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x449D8);
		}
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x449E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshMaterial_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__REFRESHMATERIAL_B__28_0_OFFSET))(this);
		}

		::System::Void _RefreshMaterial_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__REFRESHMATERIAL_B__28_1_OFFSET))(this);
		}
	};
}
