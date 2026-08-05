#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPLEVELREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1869DAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardPageController_Context_TypeDefinitionIndex = 58531;

	class UICoopLevelRewardPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
