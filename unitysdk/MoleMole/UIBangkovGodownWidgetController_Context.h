#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/Enum_3_F4A33839AB405E63.h"
#include "unitysdk/MoleMole/UIBangkovBagPageController_LocalBangkovItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_159;
template <typename T> class Class_0_16E4307DCC419505_164;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16029DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovGodownWidgetController_Context_TypeDefinitionIndex = 79781;

	class UIBangkovGodownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC41950C_14<::MoleMole::UIBangkovBagPageController_LocalBangkovItemInfo>* SelectedItemList; // 0x28
		::System::Action_1<::System::Int32>* OnFilterChanged; // 0x30
		::Class_0_16E4307DCC419505_159<::System::Boolean>* IsInMultiSellMode; // 0x38
		::Class_0_16E4307DCC419505_164<::System::Int64>* SelectedItemSumValue; // 0x40
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x48
		::System::Boolean IsNightMode; // 0x4C
		::System::Boolean HideGoBtn; // 0x4D
		::Enum_3_F4A33839AB405E63 ShowPageType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVGODOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
