#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYCAMERAREMAKEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3C9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraRemakeInfoDialogPopWindowController_Context_TypeDefinitionIndex = 44398;

	class UIActivityCameraRemakeInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* PicPath; // 0x28
		::System::String* Desc1; // 0x30
		::System::String* Desc2; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAREMAKEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
