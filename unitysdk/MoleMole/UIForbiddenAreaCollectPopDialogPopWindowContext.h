#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREACOLLECTPOPDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1698F8B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaCollectPopDialogPopWindowContext_TypeDefinitionIndex = 68225;

	class UIForbiddenAreaCollectPopDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Boolean IsGroup; // 0x30
		::System::Int32 ID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTPOPDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
