#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13025080)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x130250C0)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_10_OFFSET UNITYSDK_OFFSET(0x130250E0)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_11_OFFSET UNITYSDK_OFFSET(0x130251A0)
#define MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_4_OFFSET UNITYSDK_OFFSET(0x130250D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductionRightWidgetController___c_TypeDefinitionIndex = 45708;

	class UISuibianProductionRightWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_11()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51070);
		}
		static ::MoleMole::UISuibianProductionRightWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianProductionRightWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51078);
		}
		static ::System::Action** StaticGet___9__23_4()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51080);
		}
		static ::System::Action** StaticGet___9__23_10()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISuibianProductionRightWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x51088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProduct_b__23_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_4_OFFSET))(this);
		}

		::System::Void _OnProduct_b__23_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_10_OFFSET))(this);
		}

		::System::Void _OnProduct_b__23_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTIONRIGHTWIDGETCONTROLLER___C__ONPRODUCT_B__23_11_OFFSET))(this);
		}
	};
}
