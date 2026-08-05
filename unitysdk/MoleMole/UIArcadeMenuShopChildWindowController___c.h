#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_3;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E2AA60)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18E2AAA0)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__ONSELECTBTNCLICKED_B__22_1_OFFSET UNITYSDK_OFFSET(0x18E2AC40)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x18E2AAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex = 83486;

	class UIArcadeMenuShopChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_47EB23CB5C4B2615_3*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::Class_1_47EB23CB5C4B2615_3*>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CDB0);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CDB8);
		}
		static ::MoleMole::UIArcadeMenuShopChildWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIArcadeMenuShopChildWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3CDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__18_0(::Class_1_47EB23CB5C4B2615_3* a, ::Class_1_47EB23CB5C4B2615_3* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_3*, ::Class_1_47EB23CB5C4B2615_3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET))(this, a, b);
		}

		::System::Void _OnSelectBtnClicked_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__ONSELECTBTNCLICKED_B__22_1_OFFSET))(this);
		}
	};
}
