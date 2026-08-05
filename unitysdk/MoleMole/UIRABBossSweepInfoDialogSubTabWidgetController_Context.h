#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16902320)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossSweepInfoDialogSubTabWidgetController_Context_TypeDefinitionIndex = 56219;

	class UIRABBossSweepInfoDialogSubTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 bossGroupId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGSUBTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
