#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183CE8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotServeMenuPopWindowController_Context_TypeDefinitionIndex = 52538;

	class UIActivityHotpotServeMenuPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TabIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSERVEMENUPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
