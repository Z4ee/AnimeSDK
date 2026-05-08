#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_106;
class Class_2_7B15B3118FE590CD_3_Class_2_1232405AB4457962;
namespace MoleMole { class UIHandBookSuibianWidgetController; }

#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__BUILDVIEWMODELDATABINDING_B__3_OFFSET UNITYSDK_OFFSET(0x15CB4210)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__BUILDVIEWMODELDATABINDING_B__4_OFFSET UNITYSDK_OFFSET(0x15CB42C0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB4200)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 44881;

	class UIHandBookSuibianWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_106* template_; // 0x10
		::Class_2_7B15B3118FE590CD_3_Class_2_1232405AB4457962* view; // 0x18
		::MoleMole::UIHandBookSuibianWidgetController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_b__3(::System::Boolean isCanBuy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__BUILDVIEWMODELDATABINDING_B__3_OFFSET))(this, isCanBuy);
		}

		::System::Void _BuildViewModelDataBinding_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__BUILDVIEWMODELDATABINDING_B__4_OFFSET))(this);
		}
	};
}
