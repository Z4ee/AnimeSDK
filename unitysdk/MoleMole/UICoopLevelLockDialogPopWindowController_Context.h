#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UICoopLevelUnlockRowWidgetController_Context; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPLEVELLOCKDIALOGPOPWINDOWCONTROLLER_CONTEXT_ADDUNLOCKROWWITHMERGE_OFFSET UNITYSDK_OFFSET(0x17A5C8E0)
#define MOLEMOLE_UICOOPLEVELLOCKDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5CAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelLockDialogPopWindowController_Context_TypeDefinitionIndex = 62919;

	class UICoopLevelLockDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* CancelCallBack; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::UICoopLevelUnlockRowWidgetController_Context*>* UnlockRows; // 0x30
		::System::Action* OkCallBack; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELLOCKDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void AddUnlockRowWithMerge(::MoleMole::UICoopLevelUnlockRowWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopLevelUnlockRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELLOCKDIALOGPOPWINDOWCONTROLLER_CONTEXT_ADDUNLOCKROWWITHMERGE_OFFSET))(this, context);
		}
	};
}
