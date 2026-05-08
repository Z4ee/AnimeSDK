#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UI/FlowerShop/ESlotType.h"
#include "unitysdk/System/Object.h"

class Class_2_D6FEE2A35B0F262A;
namespace MoleMole { class UIFlowerMainPageController; }

#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__BUILDVIEWMODELDATABINDING_FLOWERSTATEEXT_B__0_OFFSET UNITYSDK_OFFSET(0x149C7310)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__BUILDVIEWMODELDATABINDING_FLOWERSTATEEXT_B__1_OFFSET UNITYSDK_OFFSET(0x149C7630)
#define MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149C3320)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerMainPageController___c__DisplayClass21_0_TypeDefinitionIndex = 54407;

	class UIFlowerMainPageController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::Class_2_D6FEE2A35B0F262A* gameplayFlowerStateExt; // 0x10
		::MoleMole::UIFlowerMainPageController* __4__this; // 0x18
		::Class_2_D6FEE2A35B0F262A* rightFlowerStateExt; // 0x20
		::MoleMole::UI::FlowerShop::ESlotType slot; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_FlowerStateExt_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__BUILDVIEWMODELDATABINDING_FLOWERSTATEEXT_B__0_OFFSET))(this);
		}

		::System::Void _BuildViewModelDataBinding_FlowerStateExt_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERMAINPAGECONTROLLER___C__DISPLAYCLASS21_0__BUILDVIEWMODELDATABINDING_FLOWERSTATEEXT_B__1_OFFSET))(this);
		}
	};
}
