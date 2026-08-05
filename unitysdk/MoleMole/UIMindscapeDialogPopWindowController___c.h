#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x179EFD60)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179EFDA0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__REFRESHMATERIAL_B__28_0_OFFSET UNITYSDK_OFFSET(0x179EFDB0)
#define MOLEMOLE_UIMINDSCAPEDIALOGPOPWINDOWCONTROLLER___C__REFRESHMATERIAL_B__28_1_OFFSET UNITYSDK_OFFSET(0x179EFE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex = 64249;

	class UIMindscapeDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIMindscapeDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIMindscapeDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50030);
		}
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50038);
		}
		static ::System::Action** StaticGet___9__28_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMindscapeDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x50040);
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
