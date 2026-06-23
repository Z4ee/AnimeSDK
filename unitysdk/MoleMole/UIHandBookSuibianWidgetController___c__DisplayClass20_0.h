#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1107;
class Class_2_7B15B3118FE590CD_8_Class_2_1232405AB4457962;
namespace MoleMole { class UIHandBookSuibianWidgetController; }

#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__BUILDVIEWMODELDATABINDING_B__3_OFFSET UNITYSDK_OFFSET(0x18814C00)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__BUILDVIEWMODELDATABINDING_B__4_OFFSET UNITYSDK_OFFSET(0x18814CF0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18814BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianWidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 45481;

	class UIHandBookSuibianWidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Class_2_7B15B3118FE590CD_8_Class_2_1232405AB4457962* view; // 0x10
		::MoleMole::UIHandBookSuibianWidgetController* __4__this; // 0x18
		::Class_2_208CC9941471731A_1107* template_; // 0x20

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
