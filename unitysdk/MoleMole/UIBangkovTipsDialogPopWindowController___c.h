#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_ItemInfo.h"
#include "unitysdk/System/Object.h"

class Class_3_C3F0E3B5AB5977AE;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1523A090)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1523A0D0)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_0_OFFSET UNITYSDK_OFFSET(0x1523A0F0)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_1_OFFSET UNITYSDK_OFFSET(0x1523A100)
#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__OPENITEMINFOBESIDEICONINTERNAL_B__29_1_OFFSET UNITYSDK_OFFSET(0x1523A0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex = 55259;

	class UIBangkovTipsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30B30);
		}
		static ::System::Func_2<::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo, ::Class_3_C3F0E3B5AB5977AE*>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo, ::Class_3_C3F0E3B5AB5977AE*>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30B38);
		}
		static ::System::Func_2<::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30B40);
		}
		static ::MoleMole::UIBangkovTipsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIBangkovTipsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovTipsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x30B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OpenItemInfoBesideIconInternal_b__29_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__OPENITEMINFOBESIDEICONINTERNAL_B__29_1_OFFSET))(this);
		}

		::System::Boolean _OnClickOKBtn_b__32_0(::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_0_OFFSET))(this, item);
		}

		::Class_3_C3F0E3B5AB5977AE* _OnClickOKBtn_b__32_1(::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo item)
		{
			return ((::Class_3_C3F0E3B5AB5977AE*(*)(::PVOID, ::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER___C__ONCLICKOKBTN_B__32_1_OFFSET))(this, item);
		}
	};
}
