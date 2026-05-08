#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYDEVELOPEPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E87310)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyDevelopePopWindowController_Context_TypeDefinitionIndex = 74166;

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
