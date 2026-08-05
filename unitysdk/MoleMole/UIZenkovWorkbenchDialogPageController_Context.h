#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA7230)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchDialogPageController_Context_TypeDefinitionIndex = 41173;

	class UIZenkovWorkbenchDialogPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28
		::System::Int32 OpenProductId; // 0x30
		::System::Int32 OpenCraftPage; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHDIALOGPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
