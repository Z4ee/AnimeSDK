#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYCAMERAREMAKEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1864E2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraRemakeInfoDialogPopWindowController_Context_TypeDefinitionIndex = 80210;

	class UIActivityCameraRemakeInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Desc1; // 0x28
		::System::String* PicPath; // 0x30
		::System::String* Desc2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAREMAKEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
