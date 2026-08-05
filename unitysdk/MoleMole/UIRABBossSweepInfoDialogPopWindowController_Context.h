#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABBOSSSWEEPINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7DE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBossSweepInfoDialogPopWindowController_Context_TypeDefinitionIndex = 81976;

	class UIRABBossSweepInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBOSSSWEEPINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
