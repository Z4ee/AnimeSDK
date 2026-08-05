#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;
namespace System { class Action; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EA17D0)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19EA1810)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__25_1_OFFSET UNITYSDK_OFFSET(0x19EA1820)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x19EA1850)
#define MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_1_OFFSET UNITYSDK_OFFSET(0x19EA1980)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex = 50466;

	class UIHandBookBattlefieldWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookBattlefieldWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookBattlefieldWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E30);
		}
		static ::System::Action** StaticGet___9__27_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E38);
		}
		static ::System::Action** StaticGet___9__27_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E40);
		}
		static ::System::Predicate_1<::Class_1_7A0999DD62F5BF03*>** StaticGet___9__25_1()
		{
			return (::System::Predicate_1<::Class_1_7A0999DD62F5BF03*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookBattlefieldWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshShopPopup_b__25_1(::Class_1_7A0999DD62F5BF03* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__REFRESHSHOPPOPUP_B__25_1_OFFSET))(this, x);
		}

		::System::Void _TryShowExploringDialog_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_0_OFFSET))(this);
		}

		::System::Void _TryShowExploringDialog_b__27_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKBATTLEFIELDWIDGETCONTROLLER___C__TRYSHOWEXPLORINGDIALOG_B__27_1_OFFSET))(this);
		}
	};
}
