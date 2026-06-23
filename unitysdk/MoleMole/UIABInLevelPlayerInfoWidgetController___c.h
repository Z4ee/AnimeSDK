#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_208CC9941471731A_1025;
class Class_2_5AA8899FEE19F18E;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16104980)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161049C0)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET UNITYSDK_OFFSET(0x161049D0)
#define MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET UNITYSDK_OFFSET(0x16104A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex = 72310;

	class UIABInLevelPlayerInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_2_5AA8899FEE19F18E*, ::System::ValueTuple_2<::Class_2_208CC9941471731A_1025*, ::Class_2_5AA8899FEE19F18E*>>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_2_5AA8899FEE19F18E*, ::System::ValueTuple_2<::Class_2_208CC9941471731A_1025*, ::Class_2_5AA8899FEE19F18E*>>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39F60);
		}
		static ::System::Func_2<::Class_2_5AA8899FEE19F18E*, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_2_5AA8899FEE19F18E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39F68);
		}
		static ::MoleMole::UIABInLevelPlayerInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIABInLevelPlayerInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIABInLevelPlayerInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x39F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshBangBoo_b__19_0(::Class_2_5AA8899FEE19F18E* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_5AA8899FEE19F18E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_0_OFFSET))(this, slot);
		}

		::System::ValueTuple_2<::Class_2_208CC9941471731A_1025*, ::Class_2_5AA8899FEE19F18E*> _RefreshBangBoo_b__19_1(::Class_2_5AA8899FEE19F18E* slot)
		{
			return ((::System::ValueTuple_2<::Class_2_208CC9941471731A_1025*, ::Class_2_5AA8899FEE19F18E*>(*)(::PVOID, ::Class_2_5AA8899FEE19F18E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELPLAYERINFOWIDGETCONTROLLER___C__REFRESHBANGBOO_B__19_1_OFFSET))(this, slot);
		}
	};
}
