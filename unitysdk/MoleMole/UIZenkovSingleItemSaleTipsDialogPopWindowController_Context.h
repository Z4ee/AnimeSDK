#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_C3F0E3B5AB5977AE_29;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVSINGLEITEMSALETIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B17CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSingleItemSaleTipsDialogPopWindowController_Context_TypeDefinitionIndex = 46664;

	class UIZenkovSingleItemSaleTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_C3F0E3B5AB5977AE_29* ItemKovBagIndex; // 0x28
		::System::Action_1<::Class_3_C3F0E3B5AB5977AE_29*>* OnOkAction; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSINGLEITEMSALETIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
