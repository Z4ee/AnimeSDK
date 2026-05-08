#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_909;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168835A0)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x168835E0)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__ONUIOPEN_B__3_0_OFFSET UNITYSDK_OFFSET(0x168835F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookHadalWidgetWidgetController___c_TypeDefinitionIndex = 70184;

	class UIHandBookHadalWidgetWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_208CC9941471731A_909*, ::System::Int32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_909*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32820);
		}
		static ::MoleMole::UIHandBookHadalWidgetWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookHadalWidgetWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookHadalWidgetWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnUIOpen_b__3_0(::Class_2_208CC9941471731A_909* cfg)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_909*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__ONUIOPEN_B__3_0_OFFSET))(this, cfg);
		}
	};
}
