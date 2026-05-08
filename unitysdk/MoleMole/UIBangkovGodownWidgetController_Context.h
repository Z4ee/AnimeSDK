#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F548A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovGodownWidgetController_Context_TypeDefinitionIndex = 56951;

	class UIBangkovGodownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_14<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* SelectedItemList; // 0x28
		::Class_0_16E4307DCC41950C_12<::System::Int32>* SelectedItemSumValue; // 0x30
		::Class_0_16E4307DCC41950C_13<::System::Boolean>* IsInMultiSellMode; // 0x38
		::System::Boolean IsNightMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
