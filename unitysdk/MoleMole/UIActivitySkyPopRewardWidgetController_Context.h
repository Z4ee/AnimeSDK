#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19340610)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyPopRewardWidgetController_Context_TypeDefinitionIndex = 70213;

	class UIActivitySkyPopRewardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
