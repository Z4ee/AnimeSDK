#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x160E8230)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyDevelopePopWindowController_Context_TypeDefinitionIndex = 85441;

	class UISuibianTempleBuddyDevelopePopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 Uid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
