#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1085;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AFBB40)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFBB80)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x18AFBB90)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__REFRESHVIEW_B__6_0_OFFSET UNITYSDK_OFFSET(0x18AFBBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex = 79476;

	class UIHandBookVoidFrontWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookVoidFrontWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookVoidFrontWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA10);
		}
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA18);
		}
		static ::System::Comparison_1<::Class_2_208CC9941471731A_1085*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::Class_2_208CC9941471731A_1085*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookVoidFrontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x4DA20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__2_0(::System::Int32 i)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__ONUIINIT_B__2_0_OFFSET))(this, i);
		}

		::System::Int32 _RefreshView_b__6_0(::Class_2_208CC9941471731A_1085* l, ::Class_2_208CC9941471731A_1085* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_1085*, ::Class_2_208CC9941471731A_1085*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTWIDGETCONTROLLER___C__REFRESHVIEW_B__6_0_OFFSET))(this, l, r);
		}
	};
}
