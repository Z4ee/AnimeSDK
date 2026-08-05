#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVDIFFICULTYDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A1C410)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDifficultyDialogPopWindowController_Context_TypeDefinitionIndex = 72393;

	class UIZenkovDifficultyDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ZKDungeonID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDIFFICULTYDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
