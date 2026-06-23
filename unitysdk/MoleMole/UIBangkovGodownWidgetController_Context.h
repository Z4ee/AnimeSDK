#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC419505_165;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE4290)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovGodownWidgetController_Context_TypeDefinitionIndex = 56110;

	class UIBangkovGodownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_165<::System::Boolean>* IsInMultiSellMode; // 0x28
		::Class_0_16E4307DCC41950C_12<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* SelectedItemList; // 0x30
		::Class_0_16E4307DCC419505_153<::System::Int32>* SelectedItemSumValue; // 0x38
		::System::Boolean IsNightMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
