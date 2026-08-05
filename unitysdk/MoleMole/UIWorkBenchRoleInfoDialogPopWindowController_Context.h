#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_CEF0D076577A9E4E;

#define MOLEMOLE_UIWORKBENCHROLEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDA7B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchRoleInfoDialogPopWindowController_Context_TypeDefinitionIndex = 80725;

	class UIWorkBenchRoleInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_CEF0D076577A9E4E* template_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHROLEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
