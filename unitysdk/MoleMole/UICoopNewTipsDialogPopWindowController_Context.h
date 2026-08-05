#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UICoopLevelUnlockRowWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_ADDUNLOCKROWWITHMERGE_OFFSET UNITYSDK_OFFSET(0x19377980)
#define MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19377B80)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopNewTipsDialogPopWindowController_Context_TypeDefinitionIndex = 51758;

	class UICoopNewTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UICoopLevelUnlockRowWidgetController_Context*>* UnlockRows; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void AddUnlockRowWithMerge(::MoleMole::UICoopLevelUnlockRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopLevelUnlockRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPNEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT_ADDUNLOCKROWWITHMERGE_OFFSET))(this, context);
		}
	};
}
