#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIMEDALTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x168D12C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalTipsDialogPopWindowController_Context_TypeDefinitionIndex = 71347;

	class UIMedalTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* currMedalValue; // 0x28
		::System::UInt32 medalID; // 0x30
		::System::Boolean isHideMedalVal; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
