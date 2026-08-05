#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIFORBIDDENAREACOLLECTPOPDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18D71490)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaCollectPopDialogPopWindowContext_TypeDefinitionIndex = 78161;

	class UIForbiddenAreaCollectPopDialogPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Int32 ID; // 0x30
		::System::Boolean IsGroup; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREACOLLECTPOPDIALOGPOPWINDOWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
