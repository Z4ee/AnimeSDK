#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13521940)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovHandInPopWindowController_Context_TypeDefinitionIndex = 58005;

	class UIZenkovHandInPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 QuestId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
