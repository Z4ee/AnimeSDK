#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIRABSTAGEUNLOCKPOPWINDOWCONTROLLER_RABSTAGEUNLOCKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160C4120)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageUnlockPopWindowController_RABStageUnlockContext_TypeDefinitionIndex = 65714;

	class UIRABStageUnlockPopWindowController_RABStageUnlockContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 FromStageID; // 0x28
		::System::Int32 ToStageID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEUNLOCKPOPWINDOWCONTROLLER_RABSTAGEUNLOCKCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
