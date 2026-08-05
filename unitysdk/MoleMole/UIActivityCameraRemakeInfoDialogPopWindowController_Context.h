#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYCAMERAREMAKEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E5270)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraRemakeInfoDialogPopWindowController_Context_TypeDefinitionIndex = 78115;

	class UIActivityCameraRemakeInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* Desc1; // 0x28
		::System::String* Desc2; // 0x30
		::System::String* PicPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAREMAKEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
