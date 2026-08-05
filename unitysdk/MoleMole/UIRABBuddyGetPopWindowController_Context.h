#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5D4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABBuddyGetPopWindowController_Context_TypeDefinitionIndex = 71206;

	class UIRABBuddyGetPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABBUDDYGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
