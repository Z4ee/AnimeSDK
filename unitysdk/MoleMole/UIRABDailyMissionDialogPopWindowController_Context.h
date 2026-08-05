#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF19E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDailyMissionDialogPopWindowController_Context_TypeDefinitionIndex = 60425;

	class UIRABDailyMissionDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDAILYMISSIONDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
