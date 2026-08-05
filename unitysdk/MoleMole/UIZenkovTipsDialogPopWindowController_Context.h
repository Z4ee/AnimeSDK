#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIZENKOVTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B230A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTipsDialogPopWindowController_Context_TypeDefinitionIndex = 65806;

	class UIZenkovTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* GoAction; // 0x28
		::System::String* DescTextKey; // 0x30
		::System::Action* OkAction; // 0x38
		::System::Boolean ShowCancelBtn; // 0x40
		::System::Boolean ShowOkBtn; // 0x41
		::System::Boolean ShowGoBtn; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
