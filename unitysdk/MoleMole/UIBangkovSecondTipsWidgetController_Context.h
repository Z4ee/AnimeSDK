#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_ItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1930FE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSecondTipsWidgetController_Context_TypeDefinitionIndex = 87832;

	class UIBangkovSecondTipsWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo>* zenkovItemList; // 0x28
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSECONDTIPSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
