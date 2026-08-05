#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F57D00757009D1EB;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1881FC10)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1881FC50)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__INITVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0x1881FC60)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__SETCURGOODSLIST_B__28_0_OFFSET UNITYSDK_OFFSET(0x1881FD20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController___c_TypeDefinitionIndex = 88165;

	class UIGroceryChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_1_F57D00757009D1EB*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FD50);
		}
		static ::MoleMole::UIGroceryChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIGroceryChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FD58);
		}
		static ::System::Action** StaticGet___9__19_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIGroceryChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3FD60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _InitView_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__INITVIEW_B__19_1_OFFSET))(this);
		}

		::System::Boolean _SetCurGoodsList_b__28_0(::Class_1_F57D00757009D1EB* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F57D00757009D1EB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___C__SETCURGOODSLIST_B__28_0_OFFSET))(this, x);
		}
	};
}
