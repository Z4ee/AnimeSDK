#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_13.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_DialogType.h"
#include "unitysdk/MoleMole/UIBangkovTipsDialogPopWindowController_ItemInfo.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C046E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTipsDialogPopWindowController_Context_TypeDefinitionIndex = 47625;

	class UIBangkovTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIBangkovTipsDialogPopWindowController_ItemInfo>* zenkovItemList; // 0x28
		::System::UInt32 SrcId; // 0x30
		::Enum_3_ED790DAC948A65A9_13 PlayType; // 0x34
		::System::UInt32 SrcType; // 0x38
		::MoleMole::UIBangkovTipsDialogPopWindowController_DialogType dialogType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
