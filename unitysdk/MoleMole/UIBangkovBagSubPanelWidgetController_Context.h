#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_12B29E9C1C324CDB.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC419505_153;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIBANGKOVBAGSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x176D6100)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagSubPanelWidgetController_Context_TypeDefinitionIndex = 75625;

	class UIBangkovBagSubPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Int32>* SelectedItemSumValue; // 0x28
		::Class_0_16E4307DCC41950C_12<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* SelectedItemList; // 0x30
		::Class_0_16E4307DCC419505_153<::System::Boolean>* IsInMultiSellMode; // 0x38
		::Enum_3_12B29E9C1C324CDB ShowPageType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
