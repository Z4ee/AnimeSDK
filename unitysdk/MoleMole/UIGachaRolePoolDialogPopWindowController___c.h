#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187EC840)
#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187EC880)
#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__GETNEWBIECHOOSEAVATAR_B__10_1_OFFSET UNITYSDK_OFFSET(0x187EC8A0)
#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__GETNEWBIECHOOSEAVATAR_B__10_3_OFFSET UNITYSDK_OFFSET(0x187EC890)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRolePoolDialogPopWindowController___c_TypeDefinitionIndex = 65577;

	class UIGachaRolePoolDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1** StaticGet___9__10_3()
		{
			return (::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRolePoolDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34600);
		}
		static ::System::Action** StaticGet___9__10_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRolePoolDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34608);
		}
		static ::MoleMole::UIGachaRolePoolDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGachaRolePoolDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGachaRolePoolDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GetNewbieChooseAvatar_b__10_3(::Class_0_16E4307DCC419505_29* err)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__GETNEWBIECHOOSEAVATAR_B__10_3_OFFSET))(this, err);
		}

		::System::Void _GetNewbieChooseAvatar_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__GETNEWBIECHOOSEAVATAR_B__10_1_OFFSET))(this);
		}
	};
}
