#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVRESULTITIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1165EA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultITipsDialogPopWindowController_Context_TypeDefinitionIndex = 81385;

	class UIZenkovResultITipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClose; // 0x28
		::System::Int32 TipId; // 0x30
		::System::Int64 ConvertedAmount; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTITIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
