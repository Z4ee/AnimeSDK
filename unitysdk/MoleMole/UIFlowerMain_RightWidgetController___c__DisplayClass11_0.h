#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class Class_2_AF4036FBC298303A;
namespace MoleMole { class UIFlowerMain_RightWidgetController; }

#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__BUILDDATABINDING_VIEWMODEL2CONTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x19F9DFB0)
#define MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9DFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMain_RightWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 68811;

	class UIFlowerMain_RightWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_2_AF4036FBC298303A* currentSelectData; // 0x10
		::MoleMole::UIFlowerMain_RightWidgetController* __4__this; // 0x18
		::MoleMole::UI::FlowerShop::ESlotType slot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDataBinding_ViewModel2Context_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAIN_RIGHTWIDGETCONTROLLER___C__DISPLAYCLASS11_0__BUILDDATABINDING_VIEWMODEL2CONTEXT_B__1_OFFSET))(this);
		}
	};
}
