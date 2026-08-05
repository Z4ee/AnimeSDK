#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;

#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1604E480)
#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1604E4C0)
#define MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__UNINSTALLCOMMPONENT_B__31_0_OFFSET UNITYSDK_OFFSET(0x1604E4D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex = 68157;

	class UIBuddyDIYComponentWidgetController___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__31_0()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FC00);
		}
		static ::MoleMole::UIBuddyDIYComponentWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBuddyDIYComponentWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBuddyDIYComponentWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3FC08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UnInstallCommponent_b__31_0(::Class_0_16E4307DCC419505_36* call)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUDDYDIYCOMPONENTWIDGETCONTROLLER___C__UNINSTALLCOMMPONENT_B__31_0_OFFSET))(this, call);
		}
	};
}
