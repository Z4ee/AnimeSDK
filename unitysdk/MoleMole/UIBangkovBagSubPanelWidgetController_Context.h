#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/Enum_3_F4A33839AB405E63.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

template <typename T> class Class_0_16E4307DCC419505_164;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIBANGKOVBAGSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C04050)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagSubPanelWidgetController_Context_TypeDefinitionIndex = 84595;

	class UIBangkovBagSubPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_164<::System::Int64>* SelectedItemSumValue; // 0x28
		::Class_0_16E4307DCC41950C_14<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* SelectedItemList; // 0x30
		::Class_0_16E4307DCC419505_164<::System::Boolean>* IsInMultiSellMode; // 0x38
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x40
		::System::Boolean HideEquipSection; // 0x44
		::System::Boolean HideEquipEmptySlots; // 0x45
		::Enum_3_F4A33839AB405E63 ShowPageType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
