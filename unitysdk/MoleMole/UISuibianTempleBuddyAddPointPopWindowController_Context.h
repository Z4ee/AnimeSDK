#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10885CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyAddPointPopWindowController_Context_TypeDefinitionIndex = 87261;

	class UISuibianTempleBuddyAddPointPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 Uid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
